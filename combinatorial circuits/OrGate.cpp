#include "OrGate.hpp"

OrGate::OrGate(Circuit * _firstInput, Circuit * _secondInput):Gate(_firstInput, _secondInput), GATENAME("OR"){}


bool OrGate::evaluate() const {
    return firstInput->evaluate() || secondInput->evaluate();
}

string OrGate::getGateName() const {
    return GATENAME;
}