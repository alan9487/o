#ifndef BMI_H
#define BMI_H

class BMI {
private:
    double height;
    double weight;

public:
    BMI(double, double);
    void setHeight(double h);
    double getHeight();
    void setWeight(double w);
    double getWeight();
    double getBMI();
};

#endif