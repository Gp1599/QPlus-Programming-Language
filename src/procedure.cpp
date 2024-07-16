#include "procedure.h"

using namespace QP;

/**
 * @brief Construct a new Procedure:: Procedure object
 * 
 * @param structuredScope 
 */
Procedure::Procedure(ObjectSpace* structuredScope){
    this->outerScope = nullptr;
    this->structuredScope = structuredScope;
    this->localScope = new std::map<unsigned int, ObjectSpace>();
}

/**
 * @brief Destroy the Procedure:: Procedure object
 * 
 */
Procedure::~Procedure(){

}