#ifndef NXORGATE_HPP
#define NXORGATE_HPP
#include "Gate.hpp"
#include<string>

class NxorGate : public Gate{
    private:
        const string GATENAME;
    public:
        NxorGate(Circuit * _firstInput, Circuit * _secondInput);
        string getGateName() const override;
        bool evaluate() const override;
};
#endif

