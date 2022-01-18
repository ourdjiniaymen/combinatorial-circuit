#include "NorGate.hpp"

NorGate::NorGate(Circuit * _firstInput, Circuit * _secondInput):Gate(_firstInput, _secondInput), GATENAME("NOR"){}


bool NorGate::evaluate() const {
    return !(firstInput->evaluate() || secondInput->evaluate());
}

string NorGate::getGateName() const {
    return GATENAME;
}