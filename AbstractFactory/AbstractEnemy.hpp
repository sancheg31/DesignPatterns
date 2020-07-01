#pragma once

#include <string>

namespace patterns {
namespace abstract_factory {

class AbstractEnemy
{
public:
    virtual std::string text() const = 0;
    virtual ~AbstractEnemy() { }
};


} //abstract factory
} //patterns

