#pragma once

#include <string>
#include "BasicAcyclicVisitor.hpp"

namespace patterns {
namespace acyclic_visitor {

class Widget
{
public:
    virtual void accept(BasicAcyclicVisitor*);
    virtual std::string text() const;
    virtual ~Widget() { }
};

} //acyclic_visitor
} //patterns
