#include<iostream>
using namespace std;

class Shape{
public:
    double width;
    double length;
};

class Rectangle : public Shape
    {
        public:

        void Area()
        {
            double area = (length * width);
            cout << "Area is : " << area ;
        }

    };

int main(){
    Rectangle R1;

    R1.length = 4.5;
    R1.width = 3.2;

    R1.Area();
}