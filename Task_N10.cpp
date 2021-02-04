#include <iostream>
using namespace std;

int main ()
{
    int min, x, count=1;
    int n;

    cout<<"input n: ";
    cin>>n;

    cout<<"input 1 number: ";
    cin>>min;

    for (int i=1; i<n; i++)
    {
        cout<<"input "<<i+1<<" number: ";
        cin>>x;

        if (x<min)
        {
            min=x;
            count=1;
        }
        else if (x==min)
        {
            count++;
        }
    }

    cout<<"min  : "<<min<<endl;
    cout<<"count: "<<count<<endl;
    return 0;
}