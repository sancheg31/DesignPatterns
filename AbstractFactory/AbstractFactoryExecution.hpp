#pragma once

#include "MediumEnemyFactory.hpp"
#include "EasyEnemyFactory.hpp"
#include "HardEnemyFactory.hpp"

#include <iostream>

namespace patterns {
namespace abstract_factory {

class AbstractFactoryExecution
{
public:
    virtual void execute() {

        std::cout << "\nAbstractFactoryExecution\n\n";
        AbstractEnemyFactory* factory = new EasyEnemyFactory();
        testFactory(factory);
        factory = new MediumEnemyFactory();
        testFactory(factory);
        factory = new HardEnemyFactory();
        testFactory(factory);

    }

    void testFactory(AbstractEnemyFactory* factory) {
        std::cout << "Factory name is: " << factory->name() << '\n';
        std::cout << "soldier is: " << factory->makeSoldier()->text() << '\n';
        std::cout << "monster is: " << factory->makeMonster()->text() << "\n\n";
    }
};


} //abstract factory
} //patterns
