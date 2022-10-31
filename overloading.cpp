#include <iostream>
using namespace std;

int sum(int a, int b);
int sum(int a, int b, int c);

int main()
{
    int ans;
    cout << "\nSum of two nums = " << sum(4, 5);
    cout << "\nSum of three nums = " << sum(3, 5, 8) << "\n";
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}