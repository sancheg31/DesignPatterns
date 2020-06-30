#pragma once


#include <string>

namespace patterns {
namespace visitor {

class BasicVisitor;

class Widget
{
public:
    virtual void accept(BasicVisitor*);
    virtual std::string text() const;
    virtual ~Widget() { }
};

} //visitor
} //patterns

