#include <iostream>
#include "LoLCha.h"

using namespace std;

int main() {
    LoL l1(5, 10, 2, 3, -5, 0.1, 10);
    LoL l2(7, 100, -3.5, 4, 100, 10, 15);

    l1.f0("alkali.dat");
    l1.f1();
    l1.f2();

    l2.f0("amumu.dat");
    l2.f1();
    l2.f2();

    return 10;
}
