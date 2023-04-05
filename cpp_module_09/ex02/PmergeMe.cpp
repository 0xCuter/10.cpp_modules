#include "PmergeMe.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe & src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PmergeMe::~PmergeMe()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PmergeMe & PmergeMe::operator=( PmergeMe const & rhs )
{
	_vector = rhs._vector;
	_list = rhs._list;
	_timeVector = rhs._timeVector;
	_timeList = rhs._timeList;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PmergeMe::getArg(char **argv)
{
	int i = 1;
	while (argv[i] != NULL)
	{
		_vector.push_back( std::atoi(argv[i]) );
		_list.push_back( std::atoi(argv[i]) );
		i++;
	}
}

// Merge two sorted subarrays into a single sorted array

void vector_merge(std::vector<unsigned int>& v, unsigned int left, unsigned int mid, unsigned int right)
{
	unsigned int n1 = mid - left + 1;
	unsigned int n2 = right - mid;

	std::vector<unsigned int> L(n1);
	std::vector<unsigned int> R(n2);

	for (unsigned int i = 0; i < n1; i++)
		L[i] = v[left + i];

	for (unsigned int j = 0; j < n2; j++)
		R[j] = v[mid + 1 + j];

	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = left;

	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
			v[k++] = L[i++];
		else
			v[k++] = R[j++];
	}

	// copy remaining numbers
	while (i < n1)
		v[k++] = L[i++];

	while (j < n2)
		v[k++] = R[j++];
}

// Recursively sorts subarrays using merge-insert sort.
// If subarray size < 10, uses insertion sort instead of merge sort.

void vector_merge_insert_sort(std::vector<unsigned int>& v, unsigned int left, unsigned int right)
{
	if (left < right)
	{
		unsigned int mid = left + (right - left) / 2;

		if (mid - left < 10)
		{
			// insertion sort
			for (unsigned int i = left; i <= right; i++)
			{
				unsigned int key = v[i];
				int j = i - 1;

				while (j >= (int)left && v[j] > key)
				{
					v[j + 1] = v[j];
					j--;
				}

				v[j + 1] = key;
			}
		}
		else
		{
			vector_merge_insert_sort(v, left, mid);
			vector_merge_insert_sort(v, mid + 1, right);
			vector_merge(v, left, mid, right);
		}
	}
}

// Merge two sorted sublists into a single sorted list

void list_merge(std::list<unsigned int>::iterator first, std::list<unsigned int>::iterator mid, std::list<unsigned int>::iterator last)
{
	std::list<unsigned int> L(first, mid);
	std::list<unsigned int> R(mid, last);

	for (std::list<unsigned int>::iterator i = first; i != last; ++i)
	{
		if (L.empty() || (R.size() > 0 && *R.begin() < *L.begin()))
		{
			*i = *R.begin();
			R.pop_front();
		}
		else
		{
			*i = *L.begin();
			L.pop_front();
		}
	}
}

// Same as for the vector but with a list.

void list_merge_insert_sort(std::list<unsigned int>::iterator first, std::list<unsigned int>::iterator last)
{
	if (std::distance(first, last) > 1)
	{
		std::list<unsigned int>::iterator mid = first;
		std::advance(mid, std::distance(first, last) / 2);

		if (std::distance(first, mid) < 10)
		{
			// insertion sort
			for (std::list<unsigned int>::iterator i = first; i != last; ++i)
			{
				unsigned int key = *i;
				std::list<unsigned int>::iterator j = i;

				while (j != first && *(--j) > key)
				{
					std::iter_swap(j, std::next(j));
				}

				*j = key;
			}
		}
		else
		{
			list_merge_insert_sort(first, mid);
			list_merge_insert_sort(mid, last);
			list_merge(first, mid, last);
		}
	}
}

void	PmergeMe::sortValues(void)
{
	clock_t	start;
	clock_t	end;

	// VECTOR SORTING //
	start = clock();
	vector_merge_insert_sort(_vector, 0, _vector.size() - 1);
	end = clock();

	_timeVector = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;

	// LIST SORTING //
	start = clock();
	list_merge_insert_sort(_list.begin(), _list.end());
	end = clock();

	_timeList = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;
}

void	PmergeMe::displayResults(void)
{
	std::cout << "After  : ";
	for (std::vector<unsigned int>::iterator it=_vector.begin();
			it!=_vector.end(); ++it)
		std::cout << *it << " ";
	std::cout << '\n';

	std::cout << "Time to process a range of " << _vector.size()
		<< " elements with std::vector : " << std::fixed
		<< _timeVector << " µs" << std::endl;

	std::cout << "Time to process a range of " << _list.size()
		<< " elements with std::list : " << std::fixed
		<< _timeList << " µs" << std::endl;
}

/* ************************************************************************** */
