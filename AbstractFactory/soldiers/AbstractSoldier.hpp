#pragma once

#include "AbstractFactory/AbstractEnemy.hpp"

namespace patterns {
namespace abstract_factory {

class AbstractSoldier: public AbstractEnemy
{
public:
    virtual AbstractSoldier* clone() = 0;
    virtual ~AbstractSoldier() { }
};

} //abstract factory
} //patterns


