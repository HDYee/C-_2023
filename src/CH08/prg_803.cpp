#include <iostream>

using namespace std;

struct Circle
{
    double radius, diameter, area;
};

Circle getInfo();

int main(int argc, char *argv[])
{
    Circle c;

    c = getInfo();

    cout << "Diameter : " << c.diameter << endl;
    cout << "Radius : " << c.radius << endl;

    c.area = 3.14 * c.radius * c.radius;
    cout << "Area : " << c.area << endl;

    return 0;
}

Circle getInfo()
{
    Circle tempCircle;

    cout << "Enter the diameter of a circle : ";
    cin >> tempCircle.diameter;
    tempCircle.radius = tempCircle.diameter / 2;

    return tempCircle;
}
