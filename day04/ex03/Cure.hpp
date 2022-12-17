
#ifndef __CURE_H__
#define __CURE_H__
#include "AMateria.hpp"


class Cure: public AMateria{
public:
    Cure(void);
    ~Cure(void);
    Cure(const Cure &copy);
    Cure &operator= (const Cure &copy);

    AMateria *closne(void)const;
    void use(ICharacter &target);
};
#endif