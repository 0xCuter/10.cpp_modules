#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Usage : " << argv[0] << " [sequence to sort]" << std::endl;
		return (1);
	}

	int i = 1;
	while (argv[i] != NULL)
	{
		int j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				std::cerr << "Error: Invalid input" << std::endl;
				return 1;
			}
			j++;
		}
		j = std::atoi(argv[i]);
		if (j < 0 && 2147483647 > j)
		{
			std::cout << "Error: Input not in range" << std::endl;
			return 1;
		}
		i++;
	}

	PmergeMe	p;

	p.getArg(argv);

	i = 1;
	std::cout << "Before : ";
	while (argv[i] != NULL)
	{
		std::cout << std::atoi(argv[i]) << " ";
		i++;
	}
	std::cout << std::endl;

	p.sortValues();
	p.displayResults();
	return (0);
}
