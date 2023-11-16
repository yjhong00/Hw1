#include <iostream>
#include "LoLCha.h"

using namespace std;

int main() {
    LoL l1(5, 100, 2, 3, -5, 0.1, 10, "alkali.dat");
    LoL l2(7, 100, -3.5, 4, 100, 10, 15, "amumu.dat");

    l1.f1();
    l1.f2();

    l2.f1();
    l2.f2();

    return 10;
}
