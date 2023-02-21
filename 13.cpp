#include <bits/stdc++.h>
using namespace std;
  
class twoStacks {
    int* arr;
    int size;
    int top1, top2;
  
public:
    twoStacks(int n)
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }
  
    void push1(int x)
    {
        if(top1>= top2)
            cout<<"Overflow";
        else{        
            top1++;
            arr[top1] = x;
        }
    }
  
    
    void push2(int x)
    {
        if(top2<=top1)
            cout<<"Overflow";
        else{
            top2--;
            arr[top2] = x;
        }
    }
  
    void pop1()
    {
        if (top1==-1)
            cout<<"Underflow in 1 \n";
        else 
        {
            cout<<"Popped element from stack1 is "
         <<arr[top1]<<"\n";
            top1--;  
        }
    }

    void pop2()
    {
        if (top2 == size) 
            cout<<"Underflow in 2 \n";
        else {
            cout<<"Popped element from stack2 is "
         <<arr[top2]<<"\n";
            top2++;
        }
    }
};
  
int main()
{
    twoStacks ts(8);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
    ts.push2(40);
    ts.pop2();
    ts.pop2();
    ts.push1(88);
    ts.push1(49);
    ts.push1(99);
    ts.push1(99);
    ts.push1(99);
    ts.pop2();
    ts.pop2();
    ts.pop2();
    ts.pop1();
    ts.pop1();
    ts.pop1();
    ts.pop1();
    ts.pop1();
    ts.pop1();
    ts.pop1();
    ts.pop1();
    return 0;
}