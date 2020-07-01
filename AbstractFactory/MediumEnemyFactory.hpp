#pragma once

#include "AbstractEnemyFactory.hpp"
#include "soldiers/MediumSoldier.hpp"
#include "monsters/MediumMonster.hpp"

namespace patterns {
namespace abstract_factory {

class MediumEnemyFactory: public AbstractEnemyFactory
{
public:
    virtual MediumSoldier* makeSoldier() const override {
        return new MediumSoldier();
    }
    virtual MediumMonster* makeMonster() const override {
        return new MediumMonster();
    }
    virtual std::string name() const override {
        return "MediumEnemyFactory";
    }
};

} //abstract factory
} //patterns
