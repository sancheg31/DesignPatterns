#pragma once

#include "type_list_excerpt.hpp"

template <template <class> class TUnit, class TList>
class TemplateAbstractFactory;

template <template <class> class TUnit, typename ... Tp>
class TemplateAbstractFactory<TUnit, type_list<Tp...>>: protected TUnit<Tp>...
{
public:
    using product_list = type_list<Tp...>;

    template <class T>
    T* create() {
        TUnit<T>& unit = *this;
        return unit.doCreate(TType<T>{});
    }

    virtual ~TemplateAbstractFactory() { }
};



template <template <class> class TUnit, class TList>
class TemplateAbstractCloneFactory;

template <template <class> class TUnit, typename ... Tp>
class TemplateAbstractCloneFactory<TUnit, type_list<Tp...>>: public TemplateAbstractFactory<TUnit, type_list<Tp...>>
{
public:
    using product_list = type_list<Tp...>;

    template <class T>
    T* getPrototype() {
        T* prototype;
        TUnit<T>& unit = *this;
        unit.doGetPrototype(prototype);
        return prototype;
    }


    template <class T>
    void setPrototype(T* prototype) {
        TUnit<T>& unit = *this;
        unit.doSetPrototype(prototype);
    }

    virtual ~TemplateAbstractCloneFactory() { }

};






