#ifndef NORGATE_HPP
#define NORGATE_HPP
#include "Gate.hpp"
#include<string>

class NorGate : public Gate{
    private:
        const string GATENAME;
    public:
        NorGate(Circuit * _firstInput, Circuit * _secondInput);
        string getGateName() const override;
        bool evaluate() const override;
};
#endif

