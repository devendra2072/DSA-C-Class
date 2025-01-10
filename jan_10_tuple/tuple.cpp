// #include <iostream>
// using namespace std;
// #include <vector>
// #include <tuple>

// int main()
// {
//    tuple<int, string,int,int>tp{24,"devendra",21,786906} ;
//    cout<<"rollno="<<get<0>(tp)<<"\n";
//    cout<<"name="<<get<1>(tp)<<"\n";
//    cout<<"age="<<get<2>(tp)<<"\n";
//    cout<<"mobile="<<get<3>(tp)<<"\n";
//     tuple<int, string, int, int> tp;
//     int rollno, age, mobile;
//     string name;
//     cout << "Enter rollno= ";
//     cin >> rollno >> age >> mobile >> name;
//     tp = make_tuple(rollno, name, age, mobile);
//     cout << "rollno=" << get<0>(tp) << "\n";
//     cout << "name=" << get<1>(tp) << "\n";
//     cout << "age=" << get<2>(tp) << "\n";
//     cout << "mobile=" << get<3>(tp) << "\n";
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>

// // PAIR contains 2 varaibles
// // whether it can be String or int it can be similar or dissimilar
// //  Pair is used to store 2 values
// //  More than 2 will used tupple

// int main() {
//     pair<int,string>student{101,"Aaradhya"};  // Static way
//     int rollNo;
//     string name;
//     cout<<"enter roll number\n";
//     cin>>rollNo;
//     cout<<"\n enter name\n";
//     cin>>name;
//     student=make_pair(rollNo,name);
//     cout<<"roll no = "<<student.first<<"\n";
//     cout<<"Name = "<<student.second<<"\n";

//     return 0;
// }
// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// #include <vector>

// // PAIR contains 2 varaibles
// // whether it can be String or int it can be similar or dissimilar
// //  Pair is used to store 2 values
// //  More than 2 will used tupple

// int main() {
//     vector<pair<int,string>>student;  // Static way
//     int age;
//     string name;
//     int record;
//     cout<<"enter size\n";
//     cin>>record;
//     for(int i=1;i<=record;i++){
//         cout<<"Enter age\n";
//         cin>>age;
//         cout<<"enter name\n";
//         cin>>name;

//         student.push_back({age,name});
//     }
//      cout<<"\n sorted data\n";
//     for(int i=0;i<record;i++){
//        cout<< student[i].first<<","<<student[i].second<<"\n";
//     }

//     return 0;
// }

// TUPLE
// Its used to add Muiltiple values

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <vector>
#include<tuple>
int main()
{
    // Write C++ code here
    tuple<int, string, int> tp{101, "Aaradhya", 20};
    int rollNo;
    string name;
    int age;

    cout << "RollNo , Name , age\n";
    cin >> rollNo >> name >> age;
    tp = make_tuple(rollNo, name, age);
    cout << "RollNo = " << get<0>(tp) << "\n";
    cout << "Name = " << get<1>(tp) << "\n";
    cout << "age = " << get<2>(tp) << "\n";

    return 0;
}
