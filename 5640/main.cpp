#include <iostream>
#include "BMI.h"
#include <iomanip>
using namespace std;

void swapByReference(BMI& bmi1, BMI& bmi2) {
    BMI temp=bmi1;
    bmi1 = bmi2;
    bmi2 = temp;
}

void swapByPointer(BMI* bmi1, BMI* bmi2) {
    BMI temp=*bmi1;
    *bmi1 = *bmi2;
    *bmi2 = temp;
}

int main() {
    double h1, w1, h2, w2;
    cin >> h1 >> w1 >> h2 >> w2;

    BMI bmi1(h1, w1);
    BMI bmi2(h2, w2);

    cout << fixed << setprecision(1) << "SwapByReference:" << bmi1.getBMI() << " " << bmi2.getBMI() << " to ";

    swapByReference(bmi1,bmi2);

    cout << bmi1.getBMI() << " " << bmi2.getBMI() << endl;

    cout << "SwapByPointer:" << bmi1.getBMI() << " " << bmi2.getBMI() << " to ";

    swapByPointer(&bmi1 ,&bmi2);

    cout << bmi1.getBMI() << " " << bmi2.getBMI() << endl;

    return 0;
}