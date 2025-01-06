// namspace collaction of identifires 
#include<iostream>
using namespace std;
namespace Boss
{
   class student{
    public:void study()
    {
        cout<<"\ncybrom\n";
    }
    public:void enjoy()
    {
        cout<<"\n holiday\n";
    }
   } faculty;
}
using namespace Boss;
int main()
{
    faculty.study();
    faculty.enjoy();
}
