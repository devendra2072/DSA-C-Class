#include <iostream>
using namespace std;
template <typename cyb1,typename cyb2>
class MyClass {
    cyb1 data;
    cyb2 data2;
    public:MyClass(cyb1 a,cyb2 b)
    {
        data=a;
        data2=b;
        cout <<data+data2;
    }
};

int main() {
    MyClass< int,double> Obj(6,3.14);
}