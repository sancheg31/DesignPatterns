#pragma once

template <typename T>
class TType
{
public:
    using type = T;
};

template <typename ... Tp>
struct type_list { };

template <typename TList>
struct first;

template <typename T, typename ... Tp>
struct first<type_list<T, Tp...>>
{
    using type = T;
};

template <typename TList>
using first_t = typename first<TList>::type;


template <typename TList>
struct pop_front;

template <typename T, typename ... Tp>
struct pop_front<type_list<T, Tp...>>
{
    using type = type_list<Tp...>;
};

template <typename TList>
using pop_front_t = typename pop_front<TList>::type;


template <typename Type, typename Base>
class linear_hierarchy_holder: public Base
{
public:
    using type = Type;
};

template <class TList, template <class, class> class TUnit, class TRoot>
class generate_linear_hierarchy;

template <typename T, typename ... Tp, template <class, class> class TUnit, class TRoot>
class generate_linear_hierarchy<type_list<T, Tp...>, TUnit, TRoot>:
        public TUnit<T, generate_linear_hierarchy<type_list<Tp...>, TUnit, TRoot>>
{

};

template <typename T, template <class, class> class TUnit, class TRoot>
class generate_linear_hierarchy<type_list<T>, TUnit, TRoot>: public TUnit<T, TRoot> { };
