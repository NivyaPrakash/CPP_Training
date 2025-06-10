#include<iostream>
using namespace std;

class A {
public:
    A() {
        callA = 0;
    }
private:
    int callA;
    void inc() {
        callA++;
    }

protected:
    void func(int& a) {
        a = a * 2;
        inc();
    }
public:
    int getA() {
        return callA;
    }
};

class B {
public:
    B() {
        callB = 0;
    }
private:
    int callB;
    void inc() {
        callB++;
    }

protected:
    void func(int& a) {
        a = a * 3;
        inc();
    }
public:
    int getB() {
        return callB;
    }
};

class C {
public:
    C() {
        callC = 0;
    }
private:
    int callC;
    void inc() {
        callC++;
    }

protected:
    void func(int& a) {
        a = a * 5;
        inc();
    }
public:
    int getC() {
        return callC;
    }
};

class D {
    int val;
    A a;
    B b;
    C c;

public:
    D() {
        val = 1;
    }

    void update_val(int new_val) {
        int count2 = 0, count3 = 0, count5 = 0;

        while (new_val % 2 == 0) {
            count2++;
            new_val /= 2;
        }

        while (new_val % 3 == 0) {
            count3++;
            new_val /= 3;
        }

        while (new_val % 5 == 0) {
            count5++;
            new_val /= 5;
        }

        for (int i = 0; i < count2; i++) {
            a.func(val);
        }
        for (int i = 0; i < count3; i++) {
            b.func(val);
        }
        for (int i = 0; i < count5; i++) {
            c.func(val);
        }
    }

    void check(int) {
        cout << "A's func will be called " << a.getA() << " times." << endl;
        cout << "B's func will be called " << b.getB() << " times." << endl;
        cout << "C's func will be called " << c.getC() << " times." << endl;
    }
};

int main() {
    int new_val;
    cin >> new_val;

    D d;
    d.update_val(new_val);
    d.check(new_val);

    return 0;
}
