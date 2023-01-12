#include <iostream>
#include <fstream>
#include <cstring>

void emptyFirst(std::string &str)
{
    if (str.empty())
    {
        std::cout << "first RE my not be empty" << std::endl;
        std::exit(0);
    }
}

int replaceText(std::string &str, std::string s1, std::string s2)
{
    size_t pos;

    pos = 0;
    emptyFirst(s1);
    while ((pos = str.find(s1, pos)) != std::string::npos)
    {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos += s2.length();
    }
    return (str.length());
}

int main(int argc, char *argv[])
{
    std::fstream infile;
    std::string line;

    if (argc != 4){
        std::cout << "error: arguments!" << std::endl;
        return (0);
    }
    infile.open(argv[1], std::ios::in);
    if (!infile.is_open()){
        std::cout << "file refuse to open" << std::endl;
        return (1);
    }
    std::ofstream outfile(((std::string)argv[1]) + ".replace");
    while (getline(infile, line)){
        replaceText(line, argv[2], argv[3]);
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    return (0);
}