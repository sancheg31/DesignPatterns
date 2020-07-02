#pragma once


#include "AbstractMonster.hpp"

namespace patterns {
namespace abstract_factory {

class MediumMonster: public AbstractMonster
{
public:
    virtual MediumMonster* clone() override {
        return new MediumMonster();
    }
    virtual std::string text() const override {
        return "Medium monster";
    }

    virtual ~MediumMonster() { }
};

} //abstract factory
} //patterns
