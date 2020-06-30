#pragma once

#include <string>
#include "BaseAcyclicVisitable.hpp"

namespace patterns {
namespace acyclic_visitor {

class Widget: public BaseVisitable<>
{
public:
    DEFINE_VISITABLE
    virtual std::string text() const;
    virtual ~Widget() { }
};

} //acyclic_visitor
} //patterns
