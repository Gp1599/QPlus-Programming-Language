#ifndef GX_OBJECT_H
#define GX_OBJECT_H

#include <iostream>
#include <map>

/**
 * @brief 
 * 
 */
namespace GP {

    /**
     * @brief 
     * 
     */
    enum ObjectSpaceCompositeType {
        PRIMITIVE,
        ARRAY,
        TUPLE,
        FUNCTIONOBJECT,
        STRUCTURED,
        REFERENCE
    };
    
    /**
     * @brief 
     * 
     */
    class ObjectSpace {
        
        private:
            
            /**
             * @brief 
             * 
             */
            void* primitiveDataPtr;     
            
            /**
             * @brief 
             * 
             */
            ObjectSpace* localObjectPtr; //Used for composite types and reference types
            
            /**
             * @brief 
             * 
             */
            std::map<unsigned int*, ObjectSpace*>* attributeMap; //Used for structures types
            
            /**
             * @brief 
             * 
             */
            unsigned int type;
            
            /**
             * @brief 
             * 
             */
            ObjectSpaceCompositeType compositeType; // Defines which 
            
            /**
             * @brief 
             * 
             */
            bool isAllocated; //Indicates whether the data behind the object space is allocated
        
        public:

            /**
             * @brief Construct a new Object Space object
             * 
             * @param type 
             */
            ObjectSpace(ObjectSpaceCompositeType type);

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