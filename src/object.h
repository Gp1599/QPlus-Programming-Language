#ifndef QP_OBJECT_H
#define QP_OBJECT_H

#include <iostream>
#include <map>

/**
 * @brief 
 * 
 */
namespace QP {

    /**
     * @brief 
     * 
     */
    enum ObjectSpaceType {
        PRIMITIVE,
        ARRAY,
        TUPLE,
        PROCEDURE,
        STRUCTURED
    };
    
    /**
     * @brief 
     * 
     */
    class ObjectSpace {

        private:
            
            /**
             * @brief  Represents a pointer to a primitive value such as an integer, decimal, boolean, and an array of object spaces.
             * 
             */
            void* dataPtr;  
            
            /**
             * @brief 
             * 
             */
            std::map<unsigned int*, ObjectSpace*>* attributeMap; 
            
            /**
             * @brief  Represents a length of an array that represents a array or tuple
             * 
             */
            unsigned int dataArrayLength;
            
            /**
             * @brief Defines which composite type that object space is.
             * 
             */
            ObjectSpaceType compositeType; 

            /**
             * @brief  Defines whether or not the object refers to a more primitive object.
             * 
             */
            bool isReference;
            
            /**
             * @brief Indicates whether the data behind the object space is allocated.
             * 
             */
            bool isAllocated;
        
        public:

            /**
             * @brief Construct a new Object Space object
             * 
             * @param type 
             */
            ObjectSpace(ObjectSpaceType type);

            /**
             * @brief Destroy the Object Space object
             * 
             */
            ~ObjectSpace();

            /**
             * @brief 
             * 
             * @param s 
             */
            void update(void* data);

            /**
             * @brief 
             * 
             * @param name 
             * @param object 
             */
            void addAttribute(char* name, ObjectSpace* object);

            /**
             * @brief 
             * 
             */
            void free();
    };
}
#endif