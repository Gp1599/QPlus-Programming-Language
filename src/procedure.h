#ifndef GP_PROCEDURE_H
#define GP_PROCEDURE_H
#include <iostream>
#include <map>
#include "object.h"

namespace GP {
    class Procedure {
        private:
            std::map<unsigned int, ObjectSpace*>* parameters;

        public:
            Procedure();
            ~Procedure();

            virtual void run() = 0;
            virtual bool isRunnable() = 0;
    };
}

#endif