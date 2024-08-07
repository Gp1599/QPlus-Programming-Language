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
ObjectSpace* ObjectSpace::getNonreference(){
    if(this->type->getID() == ObjectSpaceTypeID::REFERENCE){
        return this->primitiveValue.reference->getNonreference();
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

/**
 * @brief 
 * 
 * @return char 
 */
QPByte ObjectSpace::getByte(){
    return this->primitiveValue.byteValue;
}

/**
 * @brief 
 * 
 * @return unsigned char 
 */
QPUnsignedByte ObjectSpace::getUnsignedByte(){
    return this->primitiveValue.unsignedByteValue;
}

/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
QPBoolean ObjectSpace::getBoolean(){
    return this->primitiveValue.booleanValue;
}

/**
 * @brief 
 * 
 * @return long 
 */
QPInt ObjectSpace::getInt(){
    return this->primitiveValue.integerValue;
}

/**
 * @brief 
 * 
 * @return unsigned long 
 */
QPUnsignedInt ObjectSpace::getUnsignedInt(){
    return this->primitiveValue.unsignedIntegerValue;
}

/**
 * @brief 
 * 
 * @return double 
 */
QPDecimal ObjectSpace::getDecimal(){
    return this->primitiveValue.decimalValue;
}

/**
 * @brief 
 * 
 * @param value 
 */
void ObjectSpace::setByte(QPByte value){
    this->primitiveValue.byteValue = value;
}

/**
 * @brief 
 * 
 * @param value 
 */
void ObjectSpace::setUnsignedByte(QPUnsignedByte value){
     this->primitiveValue.unsignedByteValue = value;
}

/**
 * @brief 
 * 
 * @param value 
 */
void ObjectSpace::setBoolean(QPBoolean value){
    this->primitiveValue.booleanValue = value;
}

/**
 * @brief 
 * 
 * @param value 
 */
void ObjectSpace::setInt(QPInt value){
    this->primitiveValue.integerValue = value;
}

/**
 * @brief 
 * 
 * @param value 
 */
void ObjectSpace::setUnsignedInt(QPUnsignedInt value){
    this->primitiveValue.unsignedIntegerValue = value;
}

/**
 * @brief 
 * 
 * @param value 
 */
void ObjectSpace::setDecimal(QPDecimal value){
    this->primitiveValue.decimalValue = value;
}

/**
 * @brief 
 * 
 * @param reference 
 */
void ObjectSpace::setReference(ObjectSpace* reference){
    this->primitiveValue.reference = reference;

}

/**
 * @brief 
 * 
 * @param length 
 */
void ObjectSpace::initArray(ObjectSpace* length){
    //CHECKPOINT: Implement
}

/**
 * @brief 
 * 
 * @param length 
 * @param length 
 */
void ObjectSpace::initTuple(ObjectSpaceType* types, unsigned int length){
    //CHECKPOINT: Implement
}

/**
 * @brief 
 * 
 */
void ObjectSpace::initAttributeMap(){
    //CHECKPOINT: Implement
}

/**
 * @brief 
 * 
 * @param name 
 * @param value 
 */
void ObjectSpace::addAttribute(char* name, ObjectSpace* value){
    //CHECKPOINT: Implement
}

/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
bool ObjectSpace::isAllocated(){
    return true; //CHECKPOINT: Implement
}

/**
 * @brief 
 * 
 */
void ObjectSpace::free(){
    //CHECKPOINT: Implement
}