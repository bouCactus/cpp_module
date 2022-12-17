#ifndef __ICE_H__
#define __ICE_H__
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria{
public:
    Ice(void);
    Ice(const Ice &copy);
    ~Ice(void);
    Ice &operator= (const Ice &copy);

    AMateria    *clone() const;
    void        use(ICharacter &target);
};

#endif