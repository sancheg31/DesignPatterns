#pragma once

#include "AbstractEnemyFactory.hpp"
#include "soldiers/EasySoldier.hpp"
#include "monsters/EasyMonster.hpp"


namespace patterns {
namespace abstract_factory {

class EasyEnemyFactory: public AbstractEnemyFactory
{
public:
    virtual EasySoldier* makeSoldier() const override {
        return new EasySoldier();
    }
    virtual EasyMonster* makeMonster() const override {
        return new EasyMonster();
    }
    virtual std::string name() const override {
        return "EasyEnemyFactory";
    }
};

} //abstract factory
} //patterns
