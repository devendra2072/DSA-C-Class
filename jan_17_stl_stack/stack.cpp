// #include<iostream>
// using namespace std;
// #include<stack>
// int main()
// {
// stack<int> s;
// s.push(10);
// s.push(12);
// s.push(1);
// s.push(3);
// s.push(15);
// s.pop();
// cout<<s.top()<<"\n";

// while(!s.empty())
// {
//     cout<<s.top()<<"\n";
//     s.pop();
// }
// cout<<s.top()<<endl; // output: 3
// s.pop();
// cout<<s.top()<<endl; // output: 2
// return 0;

// }

#include <iostream>
using namespace std;
#define n 5
class stacks
{
public:
    int *arr, top;
    stacks()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int a)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = a;
    }

    void pop()
    {
        if (top == n - 1)
        {
            cout << "Stack Un-overflow\n";
            return;
        }
        top--;
    }
    int tops()
    {
        return arr[top];
    }
};

int main()
{
    stacks st;
    st.push(15);
    st.push(2);
    st.push(4);
    st.push(10);
    st.push(19);
    cout << st.tops() << "\n";
    st.pop();
    cout << st.tops() << "\n";
}