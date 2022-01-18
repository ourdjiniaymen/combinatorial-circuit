#include "XorGate.hpp"

XorGate::XorGate(Circuit * _firstInput, Circuit * _secondInput):Gate(_firstInput, _secondInput), GATENAME("XOR"){}


bool XorGate::evaluate() const {
    return firstInput->evaluate() != secondInput->evaluate();
}

string XorGate::getGateName() const {
    return GATENAME;
}