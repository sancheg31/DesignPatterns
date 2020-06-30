#pragma once

#include "AcyclicWidget.hpp"

#include <string>

namespace patterns {
namespace acyclic_visitor {

class ConcreteWidget2: public Widget
{
public:
    DEFINE_VISITABLE
    virtual std::string text() const override;
    virtual ~ConcreteWidget2() { }
};

} //acyclic_visitor
} //patterns
