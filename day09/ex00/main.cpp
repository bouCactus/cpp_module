#include <string>
#include<iostream>
#include <sstream>
const char* ws = " \t\n\r\f\v";

// trim from end of string (right)
inline std::string& rtrim(std::string& s, const char* t = ws)
{
    s.erase(s.find_last_not_of(t) + 1);
    return s;
}

// trim from beginning of string (left)
inline std::string& ltrim(std::string& s, const char* t = ws)
{
    s.erase(0, s.find_first_not_of(t));
    return s;
}

// trim from both ends of string (right then left)
inline std::string& trim(std::string& s, const char* t = ws)
{
    return ltrim(rtrim(s, t), t);
}

std::pair<std::string, std::string> adv_tokenizer(std::string s, char del)
{
    std::stringstream ss(s);
    std::string word;
    int i = 0;
    std::string tokens[2];
    while (!ss.eof()){
        getline(ss, word, del);
	// "   01-01-01   "
        tokens[i] = trim(word);
        std::cout << "\"" << tokens[i] << "\""<< std::endl;
        i++;
    }
    std::pair<std::string, std::string> token;
    token.first = tokens[0];
    token.second = tokens[1];
    return (token);
}

bool isValidDateFormat(const std::string& dateStr) {
    if (dateStr.size() != 10) {  // Check length
        return false;
    }

    try {
        int year = std::stoi(dateStr.substr(0, 4));  
        int month = std::stoi(dateStr.substr(5, 2)); 
        int day = std::stoi(dateStr.substr(8, 2));  


        if (year < 1900 || year > 9999 || month < 1 || month > 12 || day < 1 || day > 31) {
            return false;
        }
    } catch (const std::invalid_argument& e) {
        return false;
    }

    return true;
}

bool check_value(std::string& value){
  try{
    std::stoi(value);
  }catch(const std::invalid_argument& e){
    return (false);
  }
  return (true);
}

int check_token_grammer(std::pair<std::string, std::string>& token){
  return (!check_date(token.first) || !check_value(token.second));
}

void parseDataFile(ofstream &file, std:map<std:string, int>& m){
  std::pair<std::string, std::string>token;

  while (file.good()){
    getline(file, line);
    token = adv_tokenizer(line);
    if(check_token_grammer(token))
      std::exit(1);
      m[token.first] = std::stoi(token.second)
  }
}

void caluclateCertainAmountBtc(std::map<std::string,int>&m,std::pair<std::string,int>token){
  std::map<std::string, int>::iterator it;
  it = m.find(token.first);
  if (it == m.end())
    it = m.upper_bound(token.first);

  std::cout << token.first << " => "
	    << token.second << " = "
	    << it.second * token.second
	    <<std::endl;

}

void parseIputFile(ofstream& file, std::map<std::string, int>&m){
  std::pair<std::string,std::string>token;
  std::pair<std::string,int>tokenInt;
  while (file.good()){
    getline(file,line);
    token = adv_tokenizer(line);
    if (!check_token_grammer(token)){
      tokenInt.first = token.first;
      tokenInt.second = std::stoi(token.second);
      caluclateCertainAmountBtc(m,tokenInt);
    }
  }
}
int main(int argc, char *arg[]){
  ofstream inputFile;
  ofstream data;
  if (argc != 2){
    std::cout << "Error: could not open file." << std::endl;
    return (1);
  }
  inputFile.open(argv[1], ios::in);
  
  if (!inputFile.is_open()){
    std::cout << "Error: could not open file." << std::endl;
    return (1);
  }
  data.open("./data");
  if (!data.is_open()){
    std::cout << "Error: could not read from data" << std::endl;
    return (1);
  }
  
   
  inputFile.close;
  return (0);
}
