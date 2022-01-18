#ifndef XORGATE_HPP
#define XORGATE_HPP
#include "Gate.hpp"
#include<string>

class XorGate : public Gate{
    private:
        const string GATENAME;
    public:
        XorGate(Circuit * _firstInput, Circuit * _secondInput);
        string getGateName() const override;
        bool evaluate() const override;
};
#endif

