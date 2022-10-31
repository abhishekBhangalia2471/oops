#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    int inch;
};

Distance operator+(Distance &d1, Distance &d2);
void display(Distance d);

int main()
{
    Distance d1,d2,d3;
    int factor;
    cout<<"\n.........Distance Addition Operator Overloading........";

    cout<<"\n\nDistance 1 : ";
    cout << "\nEnter feet: ";
    cin >> d1.feet;
    cout << "Enter inch: ";
    cin >> d1.inch;
    
    cout<<"\nDistance 2 : ";
    cout << "\nEnter feet: ";
    cin >> d2.feet;
    cout << "Enter inch: ";
    cin >> d2.inch;

    cout<<"\nDistance 1 :";
    display(d1);
    cout<<"\nDistance 2 :";
    display(d2);
    d3 = d1 + d2;
    cout<<"\nDistance 3 :";
    display(d3);
    return 0;
}

void display(Distance d){
    cout<<"\nFeet : "<<d.feet<<", Inches : "<<d.inch;
}

Distance operator+(Distance &d1, Distance &d2){
    Distance d3;
    d3.inch = d1.inch + d2.inch;
    d3.feet = d1.feet + d2.feet + (d3.inch / 12);
    d3.inch = d3.inch % 12;
    return d3;
}