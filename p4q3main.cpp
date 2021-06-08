#include <iostream>

using namespace std;

//Q3. Find the minimum distance between two numbers.
//we calc first idx of x and first idx of y & then calc absolute value as ans
//prasannagarole

void fn(int a[],int n,int x,int y)
{
    int xidx=0;
    int yidx=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            xidx=i;
            break;
        }

    }

    for(int i=0;i<n;i++)
    {
        if(a[i]==y)
        {
            yidx=i;
            break;
        }
    }


    cout<<abs(xidx-yidx);

}


int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;

    int a[n]={0};

    cout<<"Enter elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int x,y;
    cout<<"\nEnter x & y:";
    cin>>x>>y;

    cout<<"Dist:";
    fn(a,n,x,y);

    return 0;
}
