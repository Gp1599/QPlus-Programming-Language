#ifndef QP_OBJECT_H
#define QP_OBJECT_H

#include <iostream>
#include <map>

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
        char byteValue;
        unsigned char unsignedByteValue;
        bool booleanValue;
        long integerValue;
        unsigned long unsignedIntegerValue;
        double decimalValue;
        ObjectSpace* reference;
        std::map<unsigned int, ObjectSpace*> attributeMap;
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

            /**
             * @brief 
             * 
             */
            ObjectSpace(ObjectSpaceType* type);

            /**
             * @brief
             * 
             * @return 
             */
            ObjectSpaceType* getType();

            /**
             * @brief 
             * 
             * @return 
             */
            ObjectSpace* value();

            /**
             * @brief Get the Byte object
             * 
             * @return char 
             */
            char getByte();

            /**
             * @brief Get the Unsigned Byte object
             * 
             * @return unsigned char 
             */
            unsigned char getUnsignedByte();

            /**
             * @brief Get the Boolean object
             * 
             * @return true 
             * @return false 
             */
            bool getBoolean();

            /**
             * @brief Get the Int object
             * 
             * @return long 
             */
            long getInt();

            /**
             * @brief Get the Unsigned Int object
             * 
             * @return unsigned long 
             */
            unsigned long getUnsignedInt(); 

            /**
             * @brief Get the Decimal object
             * 
             * @return double 
             */
            double getDecimal();

            /**
             * @brief Set the Byte object
             * 
             * @param value 
             */
            void setByte(char value);

            /**
             * @brief Set the Unsigned Byte object
             * 
             * @param value 
             */
            void setUnsignedByte(unsigned char value);

            /**
             * @brief Set the Boolean object
             * 
             * @param value 
             */
            void setBoolean(bool value);

            /**
             * @brief Set the Int object
             * 
             * @param value 
             */
            void setInt(long value);

            /**
             * @brief Set the Unsigned Int object
             * 
             * @param value 
             */
            void setUnsignedInt(unsigned long value);

            /**
             * @brief Set the Decimal object
             * 
             * @param value 
             */
            void setDecimal(double value);

            /**
             * @brief Set the Reference object
             * 
             * @param space 
             */
            void setReference(ObjectSpace* space);

            /**
             * @brief 
             * 
             * @param length 
             */
            void initArray(ObjectSpace* length);

            /**
             * @brief 
             * 
             * @param types 
             * @param length 
             */
            void initTuple(ObjectSpaceType* types, unsigned int length);

            /**
             * @brief 
             * 
             */
            void initAttributeMap();
            
            /**
             * @brief Get the Attribute object
             * 
             * @param name 
             */
            void getAttribute(char* name);
            
            /**
             * @brief 
             * 
             * @param name 
             * @param value 
             */
            void addAttribute(char* name, ObjectSpace* value);

            /**
             * @brief 
             * 
             * @return true 
             * @return false 
             */
            bool isAllocated();
    };
}
#endif