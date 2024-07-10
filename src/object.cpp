#include "object.h"

using namespace QP;

/**
 * @brief Construct a new Object Space:: Object Space object
 * 
 * @param type 
 */
ObjectSpace::ObjectSpace(ObjectSpaceType type) {
    this->type = 0;
    this->dataPtr = nullptr;
    this->dataArrayLength = 1;
    this->attributeMap = new std::map<unsigned int*, ObjectSpace*>();
    this->compositeType = type;
    this->isReference = false;
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
    //this->attributeMap->emplace(0, obj); //FIXME: replace 0 with the integer defined by the strie after the strie reads the specified attribute name.
}
/**
 * @brief 
 * 
 */
void ObjectSpace::free(){
    if(this->isReference){
        this->dataPtr = nullptr;
    } else {
        switch(this->compositeType){
            case PRIMITIVE:
                delete this->dataPtr;
                this->dataPtr = nullptr;
                break;
            case ARRAY:
            case TUPLE:
                ObjectSpace* objSpaceData = (ObjectSpace*) this->dataPtr;
                for(int i = 0; i < this->dataArrayLength; i++){
                    objSpaceData[i].free();
                }
                this->dataPtr = nullptr;
                break;
    }
}
    
}