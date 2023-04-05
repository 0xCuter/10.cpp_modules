#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <stdexcept>
# include <fstream>
# include <sstream>

class BitcoinExchange
{

	public:

		BitcoinExchange(const std::string& bitcoinPricesFile);
		BitcoinExchange(BitcoinExchange const & src);
		~BitcoinExchange();
		BitcoinExchange & operator=(BitcoinExchange const & rhs);

		double getExchangeRate(const std::string& date) const;

	private:

		std::map<std::string, double> prices;

};

#endif /* ************************************************* BITCOINEXCHANGE_H */
