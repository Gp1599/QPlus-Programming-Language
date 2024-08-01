#ifndef QP_OBJECTTYPE_H
#define QP_OBJECTTYPE_H
#include <iostream>

namespace QP {
    class ObjectSpace;

    /**
     * @brief 
     * 
     */
    enum ObjectSpaceTypeID {
        BYTE,
        UBYTE,
        BOOLEAN,
        INT,
        UINT,
        DECIMAL,
        CHAR,
        STRING,
        REFERENCE,
        OPTIONAL,
        ARRAY,
        TUPLE,
        STRUCTURED,
        UNION
    };

    /**
     * @brief 
     * 
     */
    class ObjectSpaceType {
        public:
            /**
             * @brief Construct a new Object Space Type object
             * 
             */
            ObjectSpaceType();
            
            /**
             * @brief 
             * 
             * @return ObjectSpaceTypeID 
             */
            virtual ObjectSpaceTypeID getID() = 0;

            /**
             * @brief 
             * 
             * @param object 
             */
            virtual void init(ObjectSpace* object) = 0;

            /**
             * @brief 
             * 
             * @param type 
             */
            virtual void equals(ObjectSpaceType* type) = 0;
    };
}

#endif