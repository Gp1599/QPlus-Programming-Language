#include "object.h"

using namespace QP;

/**
 * @brief 
 * 
 * @param type 
 */
ObjectSpace::ObjectSpace(ObjectSpaceType* type) {
    this->type = type;
    this->type->init(this);
}

/**
 * @brief 
 * 
 * @return 
 */
ObjectSpace* ObjectSpace::value(){
    if(this->type->isReference()){
        return this->primitiveValue.reference->value();
    } else {
        return this;
    }
}


/**
 * @brief 
 * 
 * @return ObjectSpaceType 
 */
ObjectSpaceType* ObjectSpace::getType(){
    return this->type;
}
