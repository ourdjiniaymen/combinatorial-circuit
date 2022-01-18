#include "NegationGate.hpp"

NegationGate::NegationGate(Circuit * _firstInput):Gate(_firstInput,nullptr), GATENAME("NEGATE"){}


bool NegationGate::evaluate() const {
    return !(firstInput->evaluate());
}

string NegationGate::getGateName() const {
    return GATENAME;
}

void NegationGate::displayInConsole(ostream& out) const {
    //out << getGateName() << "(" << firstInput << ")";
}

string NegationGate::getTextualForm() const {
    stringstream ss;
    ss << getGateName() << "(" << firstInput->getTextualForm() << ")";
    return ss.str();
}

