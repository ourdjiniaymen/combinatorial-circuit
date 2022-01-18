#ifndef OUTPUTGATE_HPP
#define OUTPUTGATE_HPP
#include "Circuit.hpp"
#include<string>
#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

class OutputGate{
    private:
        const char name;
        const Circuit * output;
        string getTextualForm() const;
        int getDepth() const;
        bool evaluate() const;
    public:
        OutputGate(char _name, Circuit * _output);
        //OutputGate(string fileName);
        void displayTextualForm() const;
        void DisplayInConsole();
        void saveInFile() const;
};

ostream& operator<<(ostream& out, const OutputGate * oG);

#endif

