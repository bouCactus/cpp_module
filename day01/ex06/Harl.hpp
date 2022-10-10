#ifndef __HARL_H__
#define __HARL_H__
#include<iostream>

class Harl{
public:
    void complain( std::string level );
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};
int hashit(std::string const &inString);
#endif