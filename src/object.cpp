#include "object.h"

using namespace GP;

/**
 * @brief Construct a new Object Space:: Object Space object
 * 
 * @param type 
 */
ObjectSpace::ObjectSpace(ObjectSpaceCompositeType type) {
    this->type = 0;
    this->primitiveDataPtr = nullptr;
    this->compositeType = type;
    this->compositeDataPtr = nullptr;
    this->attributeMap = new std::map<unsigned int*, ObjectSpace*>();
    this->isAllocated = false;
}

/**
 * @brief Destroy the Object Space:: Object Space object
 * 
 */
ObjectSpace::~ObjectSpace(){

}

/**
 * @brief 
 * 
 * @param data 
 */
void ObjectSpace::update(void* data){
    
}

/**
 * @brief 
 * 
 */
void ObjectSpace::free(){
    delete this->primitiveDataPtr;
}