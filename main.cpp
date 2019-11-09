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
};

void student::print()
{

}

int student::check_position()
{

}

struct admin
{
    string name;
    string email;
    int ID;
};

void admin::cancel_print_order(int ID)
{

}

void admin::add_paper()
{

}



int main(int argc, const char * argv[]) {
    // insert code here...
    
//    student CCNY_1; // we are initialzing/creating the object
//    string str1 = "jason";
//    string str2 = "jcalle000@citymail.cuny.edu";
//    int z= 23285415;
//
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
           student one;
           
           cout << "Enter your Name" << endl;
           getline(cin,one.name);
           
           cout << "Enter your Email" << endl;
           getline(cin,one.email);
           
           
           cout << "Enter your student ID" << endl;
           cin >> one.ID;
           
           cout << "this is the information you said";
           cout << one.name << endl;
           cout << one. email << endl;
           cout << one. ID << endl;

       }
    
    
//    struct student first_one;
    
}
