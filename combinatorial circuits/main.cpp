#include "Circuit.hpp"
#include "InputGate.hpp"
#include "Gate.hpp"
#include "AndGate.hpp"
#include "OrGate.hpp"
#include "XorGate.hpp"
#include "NandGate.hpp"
#include "NorGate.hpp"
#include "NxorGate.hpp"
#include "NegationGate.hpp"
#include "OutputGate.hpp"
#include <iostream>

using namespace std;


int main(){
   InputGate * a = new InputGate('a', false);
   InputGate * b = new InputGate('b', false);
   AndGate * andGate = new AndGate(a, b);
   OrGate * orGate = new OrGate(a, andGate);
   OutputGate * A = new OutputGate('A', orGate);
  // A->displayTextualForm();
   //A->saveInFile();
   cout << A;
}