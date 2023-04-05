#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange(const std::string& bitcoinPricesFile)
{
	std::ifstream bitcoinFile(bitcoinPricesFile.c_str());
	if (bitcoinFile.fail()) {
		throw std::runtime_error("Error: Fail during data.csv opening");
	}
	std::string line;
	std::getline(bitcoinFile, line);
	while (std::getline(bitcoinFile, line)) {
		std::istringstream ss(line);
		std::string dateStr;
		double price;
		std::getline(ss, dateStr, ',');
		dateStr = dateStr + " ";
		ss >> price;
		prices[dateStr] = price;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BitcoinExchange::~BitcoinExchange()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	prices = rhs.prices;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

double BitcoinExchange::getExchangeRate(const std::string& date) const {
	std::map<std::string, double>::const_iterator it = prices.upper_bound(date);
	if (it == prices.begin()) {
		throw std::runtime_error("Error: No Bitcoin price available for date " + date);
	}
	it = prev(prices.upper_bound(date));
	return it->second;
}

/* ************************************************************************** */
