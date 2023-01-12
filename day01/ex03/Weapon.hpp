#ifndef __WEAPON_H__
#define __WEAPON_H__
#include <iostream>
class Weapon
{
public:
    Weapon(void);
    Weapon(std::string type);
    ~Weapon(void);
    void setType(std::string);
    std::string const &getType() const;

private:
    std::string _type;
};
#endif