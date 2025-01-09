#include<iostream>
using namespace std;
#include<vector>
int main()
{
    // vector<int>p{1,2,3,4,5};

    // push_back() //function use dynamicly work   1st ke contant hi hota hai 

    vector<int>p;
    // p.push_back(12);
    // p.push_back(4);
    // p.push_back(33);   //isse bachne ke liye 
    // p.push_back(378);
    // p.push_back(400);

    // record insert karne ke liye 
    int n,w;
    cout<<"how many records to insert = ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter value = ";
        cin>>w;
        p.push_back(w);
    }
    for(auto j:p){
        cout<<j<<"\t";
    }
    

    cout<<"\n"<<p.size()<<"\n";        //
    cout<<p.capacity()<<"\n";   //  it is create double memory after complate 

}



// #include<iostream>
// using namespace std;
// #include<vector>
// int main ()
// {
//     vector<int>p(5,3);
//     // p[0]=45;
//     for (auto k:p)
//     {
//         cout<<k<<"\t";
//     }
// }