#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (this->materias[i])
            delete this->materias[i];
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = src.materias[i];
}

MateriaSource&  MateriaSource::operator=( MateriaSource const & rhs )
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = rhs.materias[i];
    return *this;
}

AMateria*       MateriaSource::getMateria( std::string const & type )
{
    for (int i = 0; i < 4; i++)
        if (this->materias[i] && this->materias[i]->getType() == type)
            return this->materias[i];
    return NULL;
}

AMateria*       MateriaSource::createMateria( std::string const & type )
{
    if (type == "ice")
        return new Ice();
    else if (type == "cure")
        return new Cure();
    return NULL;
}

void            MateriaSource::learnMateria( AMateria* m )
{
    for (int i = 0; i < 4; i++)
        if (this->materias[i] == NULL)
        {
            this->materias[i] = m;
            break ;
        }
}

