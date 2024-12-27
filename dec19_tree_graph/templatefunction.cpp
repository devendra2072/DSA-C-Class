// 27/12/2024 template function
// result=50
// #include <iostream>
// using namespace std;
// void sum(int x, int y)
// {
//     cout << "result=" << x + y;
// }
// int main ()
// {
//     sum (20,30);   //sum(20.7,30.9)  output 51
// }



// templatefunction.cpp:28:19: error: call of overloaded 'sum(double, double)' is ambiguous
    //  sum (20.9,30.6);                    // sum(20,30) output error //sum(20.7,30.9) output    ye error hai ambiguous

// float sum(float x, float y ) float lene per error sum (20.9,30.6); decimal value ke liye     
// same main sum (20,30); ye value lene per output 50
//int use kare float ki jagah 
// sum(20,30) output error
// #include <iostream>
// using namespace std;
// void sum(int x, int y)
// {
//     cout << "result=" << x + y;
// }
// void sum(float x, float y)
// {
//     cout << "result=" << x + y;
// }
// int main ()
// {                                     
//     sum (20,30);                
// }


// doble ka use 
// output  result=51.2    is parameter ka use karne per  sum (20.6,30.6);    
// #include <iostream>
// using namespace std;
// void sum(int x, int y)
// {
//     cout << "result=" << x + y;
// }
// void sum(double x, double y)
// {
//     cout << "result=" << x + y;
// }
// int main ()
// {                                     
//     sum (20.6,30.6);                
// }


// template 2 type ke hote hai 
// template fuction 
// template class


// output  19
#include <iostream>
using namespace std;
template <typename data1 , typename data2>
data1 sum (data1 a, data2 b)
{
    return a+b;
} 
int main()
{
    // <<sum('!' , '@');  //33+64
    cout << sum(12 , 7.1)<<"\n";
    // cout << char(45)<<"\n";
    // cout << char(52);
}