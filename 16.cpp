#include <bits/stdc++.h>
using namespace std;
 

bool pairWiseConsecutive(stack<int> s)
{
    stack<int> a;
    while (!s.empty()) {
        a.push(s.top());
        s.pop();
    }
 
    bool result = true;
    while (a.size() > 1) 
    {
        int x = a.top();
        a.pop();
        int y = a.top();
        a.pop();
        if (abs(x - y) != 1)
          result = false;
 
        s.push(x);
        s.push(y);
    }
 
    if (a.size() == 1)
        s.push(a.top());
 
    return result;
}
 
// Driver program
int main()
{
    stack<int> s;
    s.push(4);
    s.push(5);
    s.push(-2);
    s.push(-3);
    s.push(11);
    s.push(10);
    s.push(5);
    s.push(6);
    s.push(20);
 
    if (pairWiseConsecutive(s))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
 
    cout << "Stack content (from top)"
          " after function call\n";
    while (s.empty() == false)
    {
       cout << s.top() << " ";
       s.pop();
    }
 
    return 0;
}