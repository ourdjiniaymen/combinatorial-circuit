#include "Gate.hpp"

Gate::Gate(Circuit * _firstInput, Circuit * _secondInput) : firstInput(_firstInput), secondInput(_secondInput){}

int Gate::getDepth() const {
    if(firstInput->isInput() && secondInput->isInput()) return 1;
    return firstInput->getDepth() + secondInput->getDepth();
}

bool Gate::isInput() const {
    return false;
}
void Gate::displayInConsole(ostream& out) const {
    for (size_t i = 0; i < firstInput->getDepth(); i++){
        out << "     ";
    }
    out << firstInput;
    for (size_t i = 0; i < firstInput->getDepth()+secondInput->getDepth(); i++){
        out << "     ";
    }
    out << secondInput << endl;

    for (size_t i = 0; i < firstInput->getDepth(); i++){
        out << "     ";
    }
    out << "  |";
    for (size_t i = 0; i < firstInput->getDepth()+secondInput->getDepth(); i++){
        out << "     ";
    }
    out << "  |\n";
    for (size_t i = 0; i < firstInput->getDepth(); i++){
        out << "     ";
    }
    out << "  |";
    for (size_t i = 0; i < firstInput->getDepth()+secondInput->getDepth(); i++){
        out << "     ";
    }
    out << "  |\n";
    
    /*for (size_t i = 0; i < firstInput->getDepth(); i++){
        out << "     ";
    }
    out << "  |\n";*/
    

}
string Gate::getTextualForm() const {
    stringstream ss;
    ss << getGateName() << "(" << firstInput->getTextualForm() << ", " << secondInput->getTextualForm() << ")";
    return ss.str();
}