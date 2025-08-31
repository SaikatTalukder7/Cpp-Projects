#include <iostream>
#include <cmath>
using namespace std;

void Circle()
{
    double r;
    cout << "Enter the radius of the Circle: ";
    cin >> r;
    double area = M_PI * r * r;
    cout << "Circle Area: " << area << endl;
}
void Square()
{
    double a;
    cout << "Enter the side of the Square: ";
    cin >> a;
    double area = a * a;
    cout << "Square Area: " << area << endl;
}
void Rectangle()
{
    double l, w;
    cout << "Enter the length of the Rectangle: ";
    cin >> l;
    cout << "Enter the width of the Rectangle: ";
    cin >> w;
    double area = w * l;
    cout << "Rectangle Area: " << area << endl;
}

// Added Triangle function
void Triangle()
{
    double b, h;
    cout << "Enter the base of the Triangle: ";
    cin >> b;
    cout << "Enter the height of the Triangle: ";
    cin >> h;
    double area = 0.5 * b * h;
    cout << "Triangle Area: " << area << endl;
}

int main()
{
    int choice;

    cout << "Select one form these:\n";
    cout << "1. Circle\n";
    cout << "2. Square\n";
    cout << "3. Rectangle\n";
    cout << "4. Triangle\n"; 

    cout << "Enter choice:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        Circle();
        break;
    case 2:
        Square();
        break;
    case 3:
        Rectangle();
        break;
    case 4:
        Triangle();
        break;
    default:
        cout << "Invalid choice!";
    }
    return 0;
}
