#include <iostream>
#include <cmath>
#include <sstream>


class Wektor2D
{
public:
    Wektor2D(): x_{0}, y_{0} {}

    Wektor2D(double u, double v): x_{u}, y_{v} {}

    ~Wektor2D() {}

    void setX(double u) {x_=u;}
    double getX()       {return x_;}
    void setY(double v) {y_=v;}
    double getY()       {return y_;}

private:
    double      x_;
    double      y_;
};

Wektor2D operator+(Wektor2D& V1, Wektor2D& V2)
{
    double V1x = V1.getX();
    double V1y = V1.getY();

    double V2x = V2.getX();
    double V2y = V2.getY();

    double u = V1x + V2x;
    double v = V1y + V2y;

    return Wektor2D{u, v};
};

double operator*(Wektor2D& V1, Wektor2D& V2)
{
    double V1x = V1.getX();
    double V1y = V1.getY();

    double V2x = V2.getX();
    double V2y = V2.getY();

    double a = V1x * V2x;
    double b = V1y * V2y;

    return a + b;
};
