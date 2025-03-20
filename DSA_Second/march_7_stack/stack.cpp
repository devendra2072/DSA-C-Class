// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {

//     stack<int> s;
//     s.push(20);
//     s.push(45);
//     s.push(39);
//     s.push(7);
//     s.push(20);
//     s.push(45);
//     s.push(39);
//     s.push(7);
//     while (s.empty())   //empty is always true (boolean value )return karta hai
//     {
//         cout << s.top() << "\t ";
//         s.pop();
//     }
    
//     // cout << "Top element is: " << s.top() << endl;
//     // s.pop();
//     // cout << "Top element after popping is: " << s.top() << endl;
//     return 0;
// }







// smallest value return  

#include<iostream>
#include<stack>
#include<climits>  
using namespace std;

int main()
{
    stack<int> s;
    s.push(20);
    s.push(45);
    s.push(39);
    s.push(7);
    s.push(20);
    s.push(45);
    s.push(39);
    s.push(7);
      
    int min_value = INT_MAX;  
    stack<int> temp = s;
    
    while (!temp.empty())
    {
        int current = temp.top();
        if (current < min_value) {
            min_value = current;
        }
        temp.pop();
    }
    
    cout << "Smallest value in the stack is  " << min_value<<"\t";
    
    return 0;
}