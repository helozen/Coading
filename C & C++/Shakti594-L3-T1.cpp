#include<bits/stdc++.h>
using namespace std;

class rectangle{
public:
    double height;
    double width;
    double length;

    void area()
    {  
        double area = (length * width);
        cout << "area : " <<area << endl;
    }
    void volume()
    {
        double volume = (height * width * length);
        cout << "volume : " << volume << endl << endl;
    }

    void user()
    {
        cout << "Enter 3 Float Number : ";
        cin >> height >> width >> length ;
        cout << "\nOutput from user: " << endl;
    }

    rectangle()
    {
        height =6.4;
        width =4.2;
        length =5.6;
    }

    rectangle(double h, double w, double l)
    {
        height = h;
        width = w;
        length = l;
    }
};

int main()
{
    rectangle r1;
    rectangle r2;
    rectangle r3(2.0,6.0,4.0);

    //User Out
    r1.user();
    r1.area();
    r1.volume();

    //Default Constructor
    cout << "Default Constructor:" << endl;
    r2.area();
    r2.volume();

    //Parameterised Constructor
    cout << "Parameterised Constructor:" << endl;
    r3.area();
    r3.volume();
}