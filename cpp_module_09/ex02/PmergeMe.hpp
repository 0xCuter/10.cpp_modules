#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <iterator>
# include <algorithm>
# include <cstdlib>
# include <ctime>

class PmergeMe
{

	public:

		PmergeMe();
		PmergeMe(PmergeMe const & src);
		~PmergeMe();
		PmergeMe & operator=(PmergeMe const & rhs);

		void getArg(char **argv);
		void sortValues(void);
		void displayResults(void);

	private:

		std::vector<unsigned int> _vector;
		std::list<unsigned int> _list;
		double _timeVector;
		double _timeList;

};

#endif /* ******************************************************** PMERGEME_H */
