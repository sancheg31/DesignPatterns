#pragma once

#include "AbstractEnemyFactory.hpp"
#include "soldiers/MediumSoldier.hpp"
#include "monsters/MediumMonster.hpp"

namespace patterns {
namespace abstract_factory {


using MediumEnemyFactory = TemplateConcreteFactory<AbstractEnemyFactory,
                                                ConcreteFactoryNewUnit,
                                                type_list<MediumMonster, MediumSoldier>>;

using MediumEnemyCloneFactory = TemplateConcreteFactory<AbstractEnemyCloneFactory,
                                                        ConcreteFactoryCloneUnit,
                                                        type_list<MediumMonster, MediumSoldier>>;

} //abstract factory
} //patterns
