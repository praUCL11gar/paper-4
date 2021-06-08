#include <bits/stdc++.h>
using namespace std;

//Find duplicates in O(n) time and O(1) extra space.
//prasanna garole
using namespace std;


void fn(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        int idx=a[i]%n;//calc remainder
        a[idx]=a[idx]+n;
    }

    for (int i=0;i<n;i++)
    {
        if ((a[i]/n)>= 2)
        {
            cout << i << " ";//printing duplicate values
        }

    }
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

    cout<<endl<<"\nDuplicates:\n";
    fn(a,n);

    return 0;
}
