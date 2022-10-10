#include <iostream>
#include <fstream>
#include <cstring>

int replaceText(std::string &str, std::string s1, std::string s2)
{
    size_t ptrch;

    ptrch = str.find(s1);
    if (ptrch != std::string::npos)
    {
        str.erase(ptrch, s1.length());
        str.insert(ptrch, s2);
    }
    return (str.length());
}
int main(int argc, char *argv[])
{
    std::fstream infile;
    std::ofstream outfile("newfile.txt");
    std::string line;

    infile.open(argv[1], std::ios::in);

    if (!infile.is_open())
    {
        std::cout << "file refuse to open" << std::endl;
        return (1);
    }
    if (argc == 4)
    {
        while (getline(infile, line))
        {
            replaceText(line, argv[2], argv[3]);
            outfile << line << std::endl;
        }
        infile.close();
        outfile.close();
    }
    else
        std::cout << "error: arguments!" << std::endl;
    return (0);
}