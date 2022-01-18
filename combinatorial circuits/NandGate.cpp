#include "NandGate.hpp"

NandGate::NandGate(Circuit * _firstInput, Circuit * _secondInput):Gate(_firstInput, _secondInput), GATENAME("NAND"){}


bool NandGate::evaluate() const {
    return !(firstInput->evaluate() && secondInput->evaluate());
}

string NandGate::getGateName() const {
    return GATENAME;
}