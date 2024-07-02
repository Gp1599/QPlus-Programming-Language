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
    this->localObjectPtr = nullptr;
    this->attributeMap = new std::map<unsigned int*, ObjectSpace*>();
    this->isAllocated = false;
}

/**
 * @brief Destroy the Object Space:: Object Space object
 * 
 */
ObjectSpace::~ObjectSpace(){
    delete this->attributeMap; 
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
 * @param name 
 * @param obj 
 */
void ObjectSpace::addAttribute(char* name, ObjectSpace* obj){
    this->attributeMap->emplace(0, obj); //FIXME: replace 0 with the integer defined by the strie after the strie reads the specified attribute name.
}
/**
 * @brief 
 * 
 */
void ObjectSpace::free(){
    delete this->primitiveDataPtr;
}