#ifndef QP_OBJECT_H
#define QP_OBJECT_H

#include <iostream>
#include <map>

#include "typedefs.h"
#include "objecttype.h"

/**
 * @brief 
 * 
 */
namespace QP {
    
    /**
     * @brief 
     * 
     */
    union ObjectSpacePrimitiveValue {
        QPByte byteValue;
        QPUnsignedByte unsignedByteValue;
        QPBoolean booleanValue;
        QPInt integerValue;
        QPUnsignedInt unsignedIntegerValue;
        QPDecimal decimalValue;
        ObjectSpace* reference;
        std::map<unsigned int, ObjectSpace*>* attributeMap;
        ObjectSpace* compositeReference;
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
            ObjectSpaceType* type;

            /**
             * @brief 
             * 
             */
            ObjectSpacePrimitiveValue primitiveValue;
        
        public:

            ObjectSpace(ObjectSpaceType* type);
            ObjectSpaceType* getType();
            ObjectSpace* getNonreference();
            QPByte getByte();
            QPUnsignedByte getUnsignedByte();
            QPBoolean getBoolean();
            QPInt getInt();
            QPUnsignedInt getUnsignedInt(); 
            QPDecimal getDecimal();

            void setByte(QPByte value);
            void setUnsignedByte(QPUnsignedByte value);
            void setBoolean(QPBoolean value);
            void setInt(QPInt value);
            void setUnsignedInt(QPUnsignedInt value);
            void setDecimal(QPDecimal value);

            void setReference(ObjectSpace* space);

            void initArray(ObjectSpace* length);
            void initTuple(ObjectSpaceType* types, unsigned int length);

            void initAttributeMap();
            ObjectSpace* getAttribute(char* name);
            void addAttribute(char* name, ObjectSpace* value);

            bool isAllocated();
            void free();
    };
}
#endif