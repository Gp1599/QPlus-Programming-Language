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
char ObjectSpace::getByte(){
    return this->primitiveValue.byteValue;
}

/**
 * @brief 
 * 
 * @return unsigned char 
 */
unsigned char ObjectSpace::getUnsignedByte(){
    return this->primitiveValue.unsignedByteValue;
}

/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
bool ObjectSpace::getBoolean(){
    return this->primitiveValue.booleanValue;
}

/**
 * @brief 
 * 
 * @return long 
 */
long ObjectSpace::getInt(){
    return this->primitiveValue.integerValue;
}

/**
 * @brief 
 * 
 * @return unsigned long 
 */
unsigned long ObjectSpace::getUnsignedInt(){
    return this->primitiveValue.unsignedIntegerValue;
}

/**
 * @brief 
 * 
 * @return double 
 */
double ObjectSpace::getDecimal(){
    return this->primitiveValue.decimalValue;
}

/**
 * @brief 
 * 
 * @param value 
 */
void ObjectSpace::setByte(char value){
    this->primitiveValue.byteValue = value;
}

/**
 * @brief 
 * 
 * @param value 
 */
void ObjectSpace::setUnsignedByte(unsigned char value){
     this->primitiveValue.unsignedByteValue = value;
}

/**
 * @brief 
 * 
 * @param value 
 */
void ObjectSpace::setBoolean(bool value){
    this->primitiveValue.booleanValue = value;
}

/**
 * @brief 
 * 
 * @param value 
 */
void ObjectSpace::setInt(long value){
    this->primitiveValue.integerValue = value;
}

/**
 * @brief 
 * 
 * @param value 
 */
void ObjectSpace::setUnsignedInt(unsigned long value){
    this->primitiveValue.unsignedIntegerValue = value;
}

/**
 * @brief 
 * 
 * @param value 
 */
void ObjectSpace::setDecimal(double value){
    this->primitiveValue.decimalValue = value;
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