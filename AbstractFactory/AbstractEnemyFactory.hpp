#pragma once

#include "AbstractEnemy.hpp"
#include "soldiers/AbstractSoldier.hpp"
#include "monsters/AbstractMonster.hpp"

namespace patterns {
namespace abstract_factory {

class AbstractEnemyFactory
{
public:
    virtual AbstractSoldier* makeSoldier() const = 0;
    virtual AbstractMonster* makeMonster() const = 0;
    virtual std::string name() const {
        return "AbstractEnemyFactory";
    }
};

} //abstract factory
} //patterns
