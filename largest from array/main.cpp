#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float A[100];

    cout << "Enter number of elements: ";
    cin >> n;
    cout<<"Enter numbers:";
    cout<<endl;
    for(i = 0; i < n; ++i)
    {
       cin >> A[i];
    }

    for(i = 1;i < n; ++i)
    {
       if(A[0] < A[i])
       {
           A[0] = A[i];
       }
    }
    cout << "Largest element = " << A[0];

    return 0;
}
