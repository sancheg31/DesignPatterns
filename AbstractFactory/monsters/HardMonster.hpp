#pragma once


#include "AbstractMonster.hpp"

namespace patterns {
namespace abstract_factory {

class HardMonster: public AbstractMonster
{
public:
    virtual std::string text() const override {
        return "Hard monster";
    }

    virtual ~HardMonster() { }
};

} //abstract factory
} //patterns
