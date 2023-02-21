#include <bits/stdc++.h>
using namespace std;

int main()
{
    char z[50]="aabababXbababaa";
    int l =strlen(z);
    bool t= true;
    for (int i=0;i<l/2;i++){
        if (z[i] != z[l-i-1]){
            t= false;
            break;
        }
    }
    if (t)
        cout<<"true";
    else
        cout<<"false";
    return 0;
}