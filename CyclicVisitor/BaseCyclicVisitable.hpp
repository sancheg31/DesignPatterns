#pragma once


namespace patterns {
namespace visitor {

template <typename R = void>
class BaseCyclicVisitable
{
public:
    using ReturnType = R;
};


} //cyclic_visitor
} //patterns


