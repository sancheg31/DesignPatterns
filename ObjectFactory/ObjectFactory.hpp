#pragma once

#include <functional>
#include <map>
#include <utility>

namespace patterns {
namespace object_factory {

template <
        class TAbstractProduct,
        typename IdentifierType,
        class TProductCreator = std::function<TAbstractProduct*()>
          >
class ObjectFactory
{
public:
    using product_type = TAbstractProduct;
    using id_type = IdentifierType;
    using creator_type = TProductCreator;

    ObjectFactory() = default;

    bool registerType(const id_type& id, creator_type callback) {
        typename TCallbackMap::value_type el{id, callback};
        auto res = callbacks.insert(el);
        return true;
    }

    bool unregisterType(const id_type& id) {
        return (callbacks.erase(id) == 1);
    }

    product_type* create(id_type id) const {
        auto iterator = callbacks.find(id);
        if (iterator != callbacks.end()) {
            return iterator->second();
        }
    }


private:
    using TCallbackMap = std::map<IdentifierType, TProductCreator>;
    TCallbackMap callbacks;
};

} //object factory
} //patterns











