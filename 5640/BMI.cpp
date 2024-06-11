#include "BMI.h"

BMI::BMI(double h, double w) : height(h), weight(w) {} // 建構子實作

void BMI::setHeight(double h) {
    height = h;
}

double BMI::getHeight() {
    return height;
}

void BMI::setWeight(double w) {
    weight = w;
}

double BMI::getWeight() {
    return weight;
}

double BMI::getBMI() {
    return weight / ((height / 100) * (height / 100));
}
