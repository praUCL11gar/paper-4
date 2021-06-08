#include <bits/stdc++.h>

using namespace std;

//Q1. Two elements whose sum is closest to zero.
//prasanna garole

bool compare(int z1, int z2) //compare fn as arg.
{
    return abs(z1) < abs(z2);
}

void fn(int a[], int n)
{
    sort(a,a+n, compare); //quicksort direct implementation using stl where we define compare condition to return absolute +ve value

    int min = INT_MAX;
    int z1,z2;

    for (int i=1;i<n;i++)
    {
        if (abs(a[i-1] + a[i]) <= min)
        {
            min = abs(a[i-1]+ a[i]); //abs fn return only positive value(-*-)
            z1=i-1;
            z2=i;
        }
    }

    cout << "["<< a[z1] << "," << a[z2]<<"]";
}


int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;

    int a[n]={0};

    cout<<"Enter array elements:\n";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    fn(a,n);
return 0;

}
