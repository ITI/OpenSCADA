#ifndef __PC_EMULATOR_INCLUDE_INSNS_SHL_H
#define __PC_EMULATOR_INCLUDE_INSNS_SHL_H
#include <iostream>
#include <fcntl.h>
#include <fstream>
#include <unordered_map>
#include "src/pc_emulator/include/insns/insn.h"


using namespace std;
using namespace pc_specification;

namespace pc_emulator {

    //! Generic abstract class for an Shift left instruction
    class SHL_Insn: public Insn {
        public:

            SHL_Insn(PCResourceImpl* AssociatedResource) {
                __InsnName = "SHL";
                __AssociatedResource = AssociatedResource;
            }
            //! Called to execute the instruction
            /*!
                \param Operands     Operands to the instruction
                \param isNegated    Should operands be negated before instruction operation
            */
            void Execute(std::vector<PCVariable*>& Operands,
                    bool isNegated);
    };

}


#endif