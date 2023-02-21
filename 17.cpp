#include <bits/stdc++.h>
using namespace std;
 
void SlidingWindowMax(int a[], int n, int k)
{
    int j, max;
  
    for (int i = 0; i <= n - k; i++) 
    {
        max = a[i];
  
        for (j = 1; j < k; j++) 
        {
            if (a[i + j] > max)
                max = a[i + j];
        }
        cout << max << " ";
    }
}

int main()
{
    int a[20], n,i,k;
    cout<<"\n Ent,er size of array :\t";
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
    cout<<"\n Enter size of Window \t";
    cin>>k;
    SlidingWindowMax(a,n,k);
    return 0;
}