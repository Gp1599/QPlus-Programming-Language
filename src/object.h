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
        PROCEDURE,
        STRUCTURED,
    };
    
    /**
     * @brief 
     * 
     */
    class ObjectSpace {

        private:
            /** 
             * 
            */
            unsigned int* type;

            /**
             * @brief 
             * 
             */
            void* primitiveDataPtr;

            /**
             * @brief 
             * 
             */
            ObjectSpaceCompositeType compositeType;

            /**
             * @brief 
             * 
             */
            ObjectSpace* compositeDataPtr;

            /**
             * @brief 
             * 
             */
            std::map<unsigned int*, ObjectSpace*>* attributeMap;

            /**
             * @brief 
             * 
             */
            bool isAllocated;
        
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