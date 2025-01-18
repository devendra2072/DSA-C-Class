#include<iostream>
using namespace std;
#define n 5
class stacks
{
    public:int *arr, top;
    stacks()
    {
        arr=new int[n];
        top=-1;    //only stack main -1 liya jata hai 
    }
    void push(int a)
    {
        if (top==n-1)
        {
            cout<<"overfloww\n";
            return;
        }
        top++;
        arr[top]=a;
        
    }
    void pop()
    {
        if (top==-1)
        {
        cout<<"Underflow\n";
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
cout<<st.tops()<<"\n";
st.pop();
cout<<st.tops();
}