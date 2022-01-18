#include "NxorGate.hpp"

NxorGate::NxorGate(Circuit * _firstInput, Circuit * _secondInput):Gate(_firstInput, _secondInput), GATENAME("NXOR"){}


bool NxorGate::evaluate() const {
    return !(firstInput->evaluate() != secondInput->evaluate());
}

string NxorGate::getGateName() const {
    return GATENAME;
}