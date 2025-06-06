#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

struct instruction {
    string opcode;
    string op1;
    string op2;
};

class CPU {
private:
    int AX = 0, BX = 0, CX = 0, DX = 0;
    int PC = 0;
    bool running = true;
    int memory[64 * 1024] = { 0 };
    vector<instruction> pr;

    

    int getValue(string operand) {
        if (operand == "AX") 
            return AX;
        else if (operand == "BX") 
            return BX;
        else if (operand == "CX") 
            return CX;
        else if (operand == "DX") 
            return DX;
        else if (operand.front() == '[' && operand.back() == ']') {
            string addrStr = operand.substr(1, operand.length() - 2);
            int addr = stoi(addrStr);
            if (addr >= 0 && addr < 64 * 1024)
                return memory[addr];
            else {
                cout << "Error: Memory address out of bounds: " << addr << endl;
                running = false;
                return 0;
            }
        }
        else {
            return stoi(operand);
        }
    }

    void setValue(string operand, int value) {
        if (operand == "AX")
            AX = value;
        else if (operand == "BX")
            BX = value;
        else if (operand == "CX")
            CX = value;
        else if (operand == "DX")
            DX = value;
        else if (operand.front() == '[' && operand.back() == ']') {
            string addrStr = operand.substr(1, operand.length() - 2);
            int addr = stoi(addrStr);
            if (addr >= 0 && addr < 64 * 1024) {
                memory[addr] = value;
            }
            else {
                cout << "Error: Memory address out of bounds: " << addr << endl;
                running = false;
            }
        }
        else {
            cout << "Error: Invalid operand '" << operand << "' in setValue" << endl;
            running = false;
        }
    }

    void execute() {
        instruction inst = pr[PC];
        string op = inst.opcode;
        if (op == "MOV") {
            int val = getValue(inst.op2);
            setValue(inst.op1, val);
        }
        else if (op == "ADD") {
            int result = getValue(inst.op1) + getValue(inst.op2);
            setValue(inst.op1, result);
        }
        else if (op == "SUB") {
            int result = getValue(inst.op1) - getValue(inst.op2);
            setValue(inst.op1, result);
        }
        else if (op == "MUL") {
            int result = getValue(inst.op1) * getValue(inst.op2);
            setValue(inst.op1, result);
        }
        else if (op == "DIV")
        {
            int d = getValue(inst.op2);
            if (d != 0) {
                int result = getValue(inst.op1) / d;
                setValue(inst.op1, result);
               
            }
          
        }
        else  (op == "HLT")
        {
            running = false;
            return;
        }
        
        
        PC++;
    }

    void display() {
        cout << "AX = " << AX << endl;
        cout << "BX = " << BX << endl;
        cout << "CX = " << CX << endl;
        cout << "DX = " << DX << endl;
    }

public:
    void loadProgram(vector<instruction> program) {
        pr = program;
    }

    void run() {
        while (running && PC < pr.size()) {
            execute();
        }
        display();
    }

    void displayMemory(int count = 16) {
        cout << "First " << count << " memory locations:" << endl;
        for (int i = 0; i < count; i++) {
            cout << "[" << i << "] = " << memory[i] << endl;
        }
    }
};

vector<instruction> readFile(const string& filename) {
    vector<instruction> instructions;
    try {
        ifstream infile;
        infile.open(filename, ios::in);

        if (!infile.is_open()) {
            cout << "file cannot be opened" << endl
        }
    }
    catch (string s)
    {
        cout << s;
        exit(0);
    }
    while (infile.eof()) {
        string op, arg1, arg2;
        infile >> op >> arg1 >> arg2;
        instruction inst;
        inst.push_back(op);
        inst.push_back(arg1);
        inst.push_back(arg2);
        
    }
    return instructions;
}

int main() {
    CPU c;
    vector<instruction> program = readFile("instructions.txt");
    c.loadProgram(program);
    c.run();
    c.displayMemory(16);
    return 0;
}



