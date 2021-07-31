#include <iostream>
#include <cmath>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    double x = 78.14, hasil;

    int y = -20;

    hasil = copysign(x, y);
    cout << "copysign(" << x << "," << y << ") = " << hasil << endl;

    _getch();
    return 0;
}