#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN
{
	public:

		RPN();
		RPN(RPN const & src);
		~RPN();
		RPN & operator=(RPN const & rhs);

		void compute(std::string input);

	private:
		std::stack<int> stack;
};

#endif /* ************************************************************* RPN_H */
