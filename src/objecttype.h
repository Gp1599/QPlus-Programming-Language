#ifndef QP_OBJECTTYPE_H
#define QP_OBJECTTYPE_H
#include <iostream>

namespace QP {
    class ObjectSpace;

    class ObjectSpaceType {
        private:
            bool reference;
            bool destructable;
        public:
            ObjectSpaceType(bool reference, bool destructable);

            bool isDestructable();
            bool isReference();
            virtual void init(ObjectSpace* object) = 0;
            virtual void equals(ObjectSpaceType* type) = 0;
    };
}

#endif