#ifndef DESKTOP_MATERIASOURCE_H
#define DESKTOP_MATERIASOURCE_H

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
    AMateria *material[4];

public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    ~MateriaSource();
    MateriaSource& operator=(const MateriaSource& other);
    void learnMateria(AMateria *);
    AMateria * createMateria(const std::string &type);

};


#endif
