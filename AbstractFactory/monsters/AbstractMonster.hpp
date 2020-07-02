#pragma once

#include "AbstractFactory/AbstractEnemy.hpp"

namespace patterns {
namespace abstract_factory {

class AbstractMonster: public AbstractEnemy
{
public:
    virtual AbstractMonster* clone() = 0;
    virtual ~AbstractMonster() { }
};

} //abstract factory
} //patterns

