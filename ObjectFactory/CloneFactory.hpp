#pragma once

#include <functional>
#include <map>

namespace patterns {
namespace object_factory {

template <
        typename TAbstractProduct,
        typename TIdentifierType,
        typename TProductCreator
         >
class  CloneFactory
{
public:
    using creator_type = TProductCreator;
    using id_type = TIdentifierType;
    using abstract_product = TAbstractProduct;

    bool registerType(const id_type& id, creator_type creator) {
        return callbacks.insert(typename TCallbackMap::value_type(id, creator)).second;
    }

    bool unregisterType(const id_type& id) {
        return callbacks.erase(id) == 1;
    }

    abstract_product* create(const id_type& id, abstract_product* object) const {
        auto iterator = callbacks.find(id);
        if (iterator != callbacks.end()) {
            return callbacks.second(object);
        }
        return nullptr;
    }

private:
    using TCallbackMap = std::map<id_type, creator_type>;
    TCallbackMap callbacks;
};

} //object factory
} //patterns


