#include <iostream>

class Shape
{
public:
    virtual double Area()
    {
        return 0;
    }
};

class Rectangle : public Shape
{
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double Area() override
    {
        return width * height;
    }
};

class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double Area() override
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Shape *shape1 = new Rectangle(8.0, 6.0);
    Shape *shape2 = new Triangle(7.0, 11.0);

    std::cout << "Rectangle Area: " << shape1->Area() << std::endl;
    std::cout << "Triangle Area: " << shape2->Area() << std::endl;

    delete shape1;
    delete shape2;

    return 0;
}
