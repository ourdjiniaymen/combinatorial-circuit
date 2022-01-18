#include "OutputGate.hpp"

ostream& operator<< (ostream& out, const OutputGate * oG) {
   out << oG->output << endl;
   for (size_t i = 0; i < oG->getDepth(); i++){
       out << "     ";
   }
   out << "  |\n";
   for (size_t i = 0; i < oG->getDepth(); i++){
       out << "     ";
   }
   out << "  |\n";
   for (size_t i = 0; i < oG->getDepth(); i++){
       out << "     ";
   }
   out << oG->name << " = " << oG->evaluate()<< endl;
   return out;
}

OutputGate::OutputGate(char _name, Circuit * _output) : name(_name), output(_output){}

int OutputGate::getDepth() const {
    return output->getDepth();
}

string OutputGate::getTextualForm() const {
    stringstream ss;
    ss << name << " = " << output->getTextualForm() << " = " << evaluate();
    return ss.str();
}

void OutputGate::displayTextualForm() const {
    cout << getTextualForm() << endl;
}

void OutputGate::saveInFile() const {
    string fileName(1, name);
    ofstream file(fileName+".txt");
    file << getTextualForm();
    file.close();
}

bool OutputGate::evaluate() const {
    return output->evaluate();
}
