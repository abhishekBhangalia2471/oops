// 8.	Swapping numbers.

#include <iostream>
using namespace std;

void swap(int * a, int * b);

int main()
{
    int n1,n2;
    cout<<"\nEnter number 1 : ";
    cin>>n1;
    cout<<"\nEnter number 2 : ";
    cin>>n2;

    cout << "\n........Before Swapping..........\n";
    cout << "Number 1 : " << n1 << " , Number 2 : " << n2;

    swap(n1, n2);


    cout << "\n............After Swapping..........\n";
    cout << "Number 1 : " << n1 << " , Number 2 : " << n2;
   
}

void swap(int *a, int *b)
{
  
        int temp = *a;
        *a = *b;
        *b = temp;
}