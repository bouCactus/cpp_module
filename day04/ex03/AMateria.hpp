#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <iostream>
#include "ICharacter.hpp"

class AMateria{
public:
    AMateria(void);
    AMateria(const AMateria &copy);
    AMateria(std::string const & type);
    ~AMateria(void);

    AMateria &operator= (const AMateria &copy);
    std::string const &getType(void) const;
    virtual AMateria *clone(void) const = 0;
    virtual void use(ICharacter& target);
protected:
    std::string _type;
};

#endif