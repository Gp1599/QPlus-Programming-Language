#ifndef QP_PROCEDURE_H
#define QP_PROCEDURE_H

#include <iostream>
#include <map>
#include "object.h"

namespace QP {
    /**
     * @brief 
     * 
     */
    class Procedure {
        private:
            /**
             * @brief 
             * 
             */
            Procedure* outerScope;
            
            /**
             * @brief 
             * 
             */
            ObjectSpace* structuredScope; 
            
            /**
             * @brief 
             * 
             */
            ObjectSpace* localScope;

        public:

            Procedure(ObjectSpace* structuredScope);
            ~Procedure();
    };
}

#endif