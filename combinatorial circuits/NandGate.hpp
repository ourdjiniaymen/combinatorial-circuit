#ifndef NANDGATE_HPP
#define NNDGATE_HPP
#include "Gate.hpp"
#include<string>

class NandGate : public Gate{
    private:
        const string GATENAME;
    public:
        NandGate(Circuit * _firstInput, Circuit * _secondInput);
        string getGateName() const override;
        bool evaluate() const override;
};
#endif

