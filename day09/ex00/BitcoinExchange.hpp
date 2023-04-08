/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:53:52 by aboudarg          #+#    #+#             */
/*   Updated: 2023/04/05 12:53:53 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BitcoinExchange_H__
#define __BitcoinExchange_H__

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <map>





class BitcoinExchange {
public:
    // Default constructor
  BitcoinExchange();
    
    // Destructor
  ~BitcoinExchange();
  BitcoinExchange(std::string filename);
    
    // Copy constructor
    BitcoinExchange(const BitcoinExchange& other);
    
    // Copy assignment operator
    BitcoinExchange& operator=(const BitcoinExchange& other);
    void processData();
    void getBitcoinValueOnDate();
    

private:
    // Data members
  std::string _inputFile;
  std::map<std::string, float> _m;

  inline std::string& rtrim(std::string& s);
  inline std::string& ltrim(std::string& s);
  inline std::string& trim(std::string& s);
  std::pair<std::string, std::string> split(std::string s, char del);
  bool isValidDate(const std::string& dateStr);
  bool isNumeric(const std::string& str);
  bool isValidNumber(const std::pair<std::string, std::string>& token);
  bool isValidNumberInput(const std::pair<std::string, std::string>& token);
  int isValidToken(const std::pair<std::string, std::string>& token);
  std::map<std::string, float>::iterator
  get_date_before(std::map<std::string, float>& m, const std::string& date);
  void caluclateBtcValue(std::map<std::string, float>& m, std::pair<std::string, float> token);
  void parseDataFile(std::ifstream& file, std::map<std::string, float>& m);
  void parseInputFile(std::ifstream& file, std::map<std::string, float>&m);

};

#endif // __BitcoinExchange_H__
