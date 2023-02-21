#include <bits/stdc++.h>
using namespace std;
  
class Queue 
{
    stack<int> s1, s2;
public:  
    void enQueue(int x)
    {
        s1.push(x);
    }
  
    int deQueue()
    {
        // if first stack is empty
        if (s1.empty() && s2.empty()) 
        {
            cout << "Q is Empty";
            exit(0);
        }
        if (s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval=s2.top();
        s2.pop();
        return topval;
    }
    bool empty()
    {
        if(s1.empty() && s2.empty())
            return true;
        return false;
    }
};
  

int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
  
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
  
    return 0;
}