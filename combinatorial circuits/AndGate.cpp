#include "AndGate.hpp"

AndGate::AndGate(Circuit * _firstInput, Circuit * _secondInput):Gate(_firstInput, _secondInput), GATENAME("AND"){}


bool AndGate::evaluate() const {
    return firstInput->evaluate() && secondInput->evaluate();
}

string AndGate::getGateName() const {
    return GATENAME;
}
