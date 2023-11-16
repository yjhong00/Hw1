#pragma once
#include <fstream>
#include <string>

using namespace std;

class LoL {
public:
    LoL(int n1, int n2, float a_val, float b_val, float x0_val, float dx_val, int m_val);
    ~LoL();

    void f0(string ss);
    void f1();
    void f2();

private:
    int N1, N2, m;
    float a, b, x0, dx;
    ofstream dd;
};
