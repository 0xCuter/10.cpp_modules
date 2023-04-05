#include "RPN.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RPN::RPN()
{
}

RPN::RPN(const RPN & src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RPN::~RPN()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RPN & RPN::operator=(RPN const & rhs)
{
	stack = rhs.stack;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void RPN::compute(std::string input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		if (input[i] == ' ')
			continue;
		else if (isdigit(input[i]))
			stack.push(input[i] - '0');
		else if (stack.size() >= 2)
		{
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();
			if (input[i] == '+')
				stack.push(a + b);
			else if (input[i] == '-')
				stack.push(a - b);
			else if (input[i] == '*')
				stack.push(a * b);
			else if (input[i] == '/')
			{
				if (b == 0)
					throw std::invalid_argument("Error: Division by '0'");
				stack.push(a / b);
			}
			else
				throw std::invalid_argument("Error: Invalid input");
		}
		else
			throw std::invalid_argument("Error: Invalid input");
	}
	if (stack.size() != 1)
		throw std::invalid_argument("Error: Invalid input");
	std::cout << stack.top() << std::endl;
}


/* ************************************************************************** */
