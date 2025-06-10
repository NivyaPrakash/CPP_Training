#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>  
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

    int getValue(const string& operand) {
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

    void setValue(const string& operand, int value) {
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
        if (PC >= pr.size()) {
            running = false;
            return;
        }
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
        else if (op == "DIV") {
            int d = getValue(inst.op2);
            if (d != 0) {
                int result = getValue(inst.op1) / d;
                setValue(inst.op1, result);
            }
            else {
                cout << "Error: Division by zero!" << endl;
                running = false;
            }
        }
        else if (op == "HLT") {
            running = false;
            return;
        }
        else {
            cout << "Error: Invalid opcode '" << op << "'!" << endl;
            running = false;
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
    void loadProgram(const vector<instruction>& program) {
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
        ifstream infile(filename);
        if (!infile.is_open()) {
            cout << "File cannot be opened!" << endl;
            exit(1); // Exit if file cannot be opened
        }

        string line;
        while (getline(infile, line)) {
            stringstream ss(line);
            string op, arg1, arg2;

            // Split the line into components
            if (ss >> op >> arg1 >> arg2) {
                instruction inst;
                inst.opcode = op;
                inst.op1 = arg1;
                inst.op2 = arg2;
                instructions.push_back(inst);
            }
            else {
                // Handle lines with invalid format or fewer than expected arguments
                cout << "Invalid instruction: " << line << endl;
            }
        }

        infile.close();
    }
    catch (const exception& e) {
        cout << "Error reading file: " << e.what() << endl;
        exit(1); // Exit in case of an error
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
