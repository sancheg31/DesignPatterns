#pragma once

#include "AbstractEnemyFactory.hpp"
#include "soldiers/EasySoldier.hpp"
#include "monsters/EasyMonster.hpp"


namespace patterns {
namespace abstract_factory {

using EasyEnemyFactory = TemplateConcreteFactory<AbstractEnemyFactory,
                                                ConcreteFactoryNewUnit,
                                                type_list<EasyMonster, EasySoldier>>;

using EasyEnemyCloneFactory = TemplateConcreteFactory<AbstractEnemyCloneFactory,
                                                        ConcreteFactoryCloneUnit,
                                                        type_list<EasyMonster, EasySoldier>>;

} //abstract factory
} //patterns
