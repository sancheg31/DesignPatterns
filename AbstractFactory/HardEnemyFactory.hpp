#pragma once

#include "AbstractEnemyFactory.hpp"
#include "soldiers/HardSoldier.hpp"
#include "monsters/HardMonster.hpp"

namespace patterns {
namespace abstract_factory {

class HardEnemyFactory: public AbstractEnemyFactory
{
public:
    virtual HardSoldier* makeSoldier() const override {
        return new HardSoldier();
    }
    virtual HardMonster* makeMonster() const override {
        return new HardMonster();
    }
    virtual std::string name() const override {
        return "HardEnemyFactory";
    }
};

} //abstract factory
} //patterns
