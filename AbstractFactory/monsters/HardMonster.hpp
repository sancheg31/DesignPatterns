#pragma once


#include "AbstractMonster.hpp"

namespace patterns {
namespace abstract_factory {

class HardMonster: public AbstractMonster
{
public:
    virtual HardMonster* clone() override {
        return new HardMonster();
    }
    virtual std::string text() const override {
        return "Hard monster";
    }

    virtual ~HardMonster() { }
};

} //abstract factory
} //patterns
