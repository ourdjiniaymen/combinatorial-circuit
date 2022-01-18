#ifndef GATE_HPP
#define GATE_HPP
#include "Circuit.hpp"
#include <string>
#include <iostream>
#include<sstream>

using namespace std;

class Gate : public Circuit{
    private:
        const string GATENAME;
    public:
        const Circuit * firstInput;
        const Circuit * secondInput;
        Gate(Circuit * _firstInput, Circuit * _secondInput);
        virtual string getGateName() const = 0;
        int getDepth() const;
        bool isInput() const override;
        virtual bool evaluate() const = 0;
        void displayInConsole(ostream& out) const override;
        string getTextualForm() const override;
};

#endif

