#ifndef ANDGATE_HPP
#define ANDGATE_HPP
#include "Gate.hpp"
#include<string>

class AndGate : public Gate{
    private:
        const string GATENAME;
    public:
        AndGate(Circuit * _firstInput, Circuit * _secondInput);
        string getGateName() const override;
        bool evaluate() const override;
};
#endif

