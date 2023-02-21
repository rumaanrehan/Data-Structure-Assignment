#include<bits/stdc++.h>
using namespace std;

void allpairs(int a[], int n)
{
    int i,j,S;
    cout<<"Enter the sum required by the pair\t";
    cin>>S;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j] == S)
            {
                cout<<"["<<a[i]<<","<<a[j]<<"]";
            }
        }
    }
}
int main()
{
    int a[20], n,i;
    cout<<"\n Enter size of array :\t";
    cin>>n;
    cout<<"\n Enter elements in array \n";
    for (i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"\n Elements of array : \n";
    for (i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
    allpairs(a,n);
    return 0;
}