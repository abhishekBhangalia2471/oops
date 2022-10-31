// 7.	Passing Structure as a Reference: Scaling Distance.

#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    int inch;
};

void scale(Distance &d1, float s);

int main()
{
    Distance d1;
    int factor;
    cout << "Enter feet: ";
    cin >> d1.feet;
    cout << "Enter inch: ";
    cin >> d1.inch;
    cout << "Enter scaling factor: ";
    cin >> factor;

    scale(d1, factor);
    cout << endl
         << "After Scaling: "
         << d1.feet << "'" << d1.inch << "\"";
}

void scale(Distance &d1, float s)
{
    float ans = (d1.feet * 12 + d1.inch) * s;
    d1.feet = (int)(ans / 12);
    d1.inch = ans - d1.feet * 12;
}