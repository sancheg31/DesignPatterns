#pragma once

#include "AbstractEnemyFactory.hpp"
#include "soldiers/EasySoldier.hpp"
#include "monsters/EasyMonster.hpp"


namespace patterns {
namespace abstract_factory {

using EasyEnemyFactory = TemplateConcreteFactory<AbstractEnemyFactory,
                                                ConcreteFactoryUnit,
                                                type_list<EasyMonster, EasySoldier>>;

} //abstract factory
} //patterns
