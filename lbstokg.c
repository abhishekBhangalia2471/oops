// 3.	Returning values from function.

#include <iostream>
using namespace std;

float lbs_to_kg(float lbs);

int main()
{
    float lbs;
    cout << "\nEnter weight in pounds : ";
    cin >> lbs;
    cout << lbs << " lbs = " << lbs_to_kg(lbs) << " kg\n\n";

    return 0;
}

float lbs_to_kg(float lbs)
{
    float kg = 0.433692 * lbs;
    return kg;
}