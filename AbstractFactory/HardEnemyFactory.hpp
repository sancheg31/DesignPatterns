#pragma once

#include "AbstractEnemyFactory.hpp"
#include "soldiers/HardSoldier.hpp"
#include "monsters/HardMonster.hpp"

namespace patterns {
namespace abstract_factory {


using HardEnemyFactory = TemplateConcreteFactory<AbstractEnemyFactory,
                                                ConcreteFactoryUnit,
                                                type_list<HardMonster, HardSoldier>>;

} //abstract factory
} //patterns
