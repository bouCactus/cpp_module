#include<iostream>

int main(int argc, char *argv[])
{
    int inner;
    int outer;

    outer = 1;
    (void)argc;
    while (argv[outer])
    {
        inner = 0;
        while (argv[outer][inner])
        {
            if (isalpha(argv[outer][inner]))
                std::cout <<(char)toupper(argv[outer][inner]);
            else
            std::cout <<(char)argv[outer][inner];
            inner++;
        }
        std::cout << " " ;
        outer++;
    }
    std::cout << std::endl;
    return (0);
}