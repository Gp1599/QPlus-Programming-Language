#ifndef GP_PROCEDURE_H
#define GP_PROCEDURE_H

#include <iostream>
#include <map>
#include "object.h"

namespace QP {
    class Procedure {
        private:
            Procedure* outerScope;
            ObjectSpace* structuredScope; 
            ObjectSpace* localScope;

        public:
            Procedure(ObjectSpace* structuredScope);
            ~Procedure();

            virtual void run() = 0;
    };
}

#endif