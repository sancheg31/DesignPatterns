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

        std::cout << "\nAbstractCloneFactoryExecution\n\n";
        AbstractMonster* monster = new EasyMonster();
        AbstractSoldier* soldier = new EasySoldier();

        AbstractEnemyCloneFactory* cloneFactory = new EasyEnemyCloneFactory();
        cloneFactory->setPrototype<AbstractMonster>(monster);
        cloneFactory->setPrototype<AbstractSoldier>(soldier);

        testFactory(cloneFactory);
    }

    template <template <class> class TUnit, typename TList>
    void testFactory(TemplateAbstractFactory<TUnit, TList>* factory) {
        std::cout << "soldier is: " << factory->template create<AbstractSoldier>()->text() << '\n';
        std::cout << "monster is: " << factory->template create<AbstractMonster>()->text() << "\n\n";
    }
};


} //abstract factory
} //patterns
