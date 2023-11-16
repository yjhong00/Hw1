#include "LoLCha.h"

using namespace std;

LoL::LoL(int n1, int n2, float a_val, float b_val, float x0_val, float dx_val, int m_val)
    : N1(n1), N2(n2), a(a_val), b(b_val), x0(x0_val), dx(dx_val), m(m_val) {}

LoL::~LoL() {}

void LoL::f0(string ss) {
    dd.open(ss, ios::binary | ios::out);
    dd.write(reinterpret_cast<char*>(&N1), sizeof(int));
    dd.write(reinterpret_cast<char*>(&N2), sizeof(int));
    dd.write(reinterpret_cast<char*>(&a), sizeof(float));
    dd.write(reinterpret_cast<char*>(&b), sizeof(float));
    dd.write(reinterpret_cast<char*>(&dx), sizeof(float));
    dd.write(reinterpret_cast<char*>(&m), sizeof(int));
}

void LoL::f1() {
    int* f1d = new int[N2 - N1 + 1];
    for (int i = N1; i <= N2; i++) {
        f1d[i - N1] = i * (i + 1) / 2;
    }
    dd.write(reinterpret_cast<char*>(f1d), sizeof(int) * (N2 - N1 + 1));
    delete[] f1d;
}

void LoL::f2() {
    float* f2d = new float[m];
    float x = x0;
    for (int i = 0; i < m; i++, x += dx) {
        f2d[i] = a * x + b;
    }
    dd.write(reinterpret_cast<char*>(f2d), sizeof(float) * m);
    delete[] f2d;
    dd.close();
}