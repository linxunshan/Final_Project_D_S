//
//  main.cpp
//  struct
//
//  Created by Jason Calle on 11/4/19.
//  Copyright © 2019 Jason Calle. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;

struct student
{
    string name;
    string email;
    int ID;
    
    void print();
};

void student::print()
{
    cout << "Print" << endl;
}
//
//int student::check_position()
//{
//
//}
//
//struct admin
//{
//    string name;
//    string email;
//    int ID;
//};
//
//void admin::cancel_print_order(int ID)
//{
//
//}
//
//void admin::add_paper()
//{
//
//}



int main(int argc, const char * argv[]) {
    // insert code here...
    
//    student CCNY_1; // we are initialzing/creating the object
//    string str1 = "jason";
//    string str2 =
    //    int z=
//    CCNY_1.name=str1;
//    CCNY_1.email=str2;
//    CCNY_1.ID=z;
//
//    cout << CCNY_1.name << endl ;
//    cout << CCNY_1.email << endl ;
//    cout << CCNY_1.ID << endl;
    
    string str;
    cout << "Student or Admin user?" << endl << endl ;
    getline(cin,str);
    cout << str;
    

    
    if(str== "student")
       {
           struct student one;
           cout << endl;
           
           cout << "Enter your Name" << "\t" << "Enter your Email" << "\t" << "Enter your student ID" << endl;
           cin >> one.name >> one.email >> one.ID ;
           cout << endl ;

           
           cout << "this is the information you said" << endl;
           cout << one.name << "\t" << one. email << "\t" << one. ID << endl;
           
           one.print();

       }
    
    
//    struct student first_one;
    
}
