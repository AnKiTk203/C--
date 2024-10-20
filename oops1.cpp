#include <iostream>
#include <string>
using namespace std;

// // class Person
// // {
// // public:
// //     string name;
// //     int age;

// //     Person(string name, int age){
// //         this->name = name;
// //         this->age = age;
// //     }
// //     Person(){
// //         cout<<"Parent constructor..\n";
// //     }
// //     // ~Person(){
// //     //     cout<<"Parent destructor..\n";
// //     // }
// // };

// // class Student : public Person
// // {
// // public:
// //     int rollNo;

// //     Student(string name, int age, int rollNo) : Person(name, age){
// //         this->rollNo = rollNo;
// //     }

// //     // ~Student(){
// //     //     cout<<"Child destructor..\n";
// //     // }

// //     void getInfo(){
// //         cout<<"Name : "<<name<<endl;
// //         cout<<"Age : "<<age<<endl;
// //         cout<<"Roll No. : "<<rollNo<<endl;
// //     }
// // };

// // class GradStudent : public Student{
// //     public:
    
// //         string researchArea;

// //         GradStudent(string name, int age, int rollNo, string researchArea) : Student(name, age, rollNo){
// //             this->name = name;
// //             this->age = age;
// //             this->rollNo = rollNo;
// //             this->researchArea = researchArea;
// //         }

// // };

// // class Student{

// // public:
// //     string name;
// //     int rollNo;
// // };

// // class Teacher{
// //     public:
// //     string subject;
// //     double salary;
// // };

// // class TA : public Student, public Teacher{

// // };

// class Student{

// public:
//     string name;

//     Student(){
//         cout<<"non-parameterized\n";
//     }

//     Student(string name){

//         this->name = name;
//         cout<<"parametrized\n";
//     }

//     static void print(){
//         cout<<"Hello";
//     }

// };




// int main()
// {
//     // GradStudent s1("Tony Stark", 25, 10, "Quantum Physics");

//     // cout<<s1.name<<endl<<s1.researchArea;

//     // TA t1;
//     // t1.name = "Tony Stark";
//     // t1.subject = "Physics";
    
//     // cout<<t1.name;

//     Student s1("Tony");

//     s1.print();

//     return 0;
// }

// class Parent
// {
// public:
//     void getInfo(){
//         cout<<"parent class\n";
//     }

//     virtual void hello(){
//         cout<<"Hello from Parent\n";
//     }
// };

// class Child : public Parent
// {
// public:
//     void getInfo(){
//         cout<<"child class\n";
//     }

//     void hello(){
//           cout<<"Hello from Child\n";
//     }
// };


// int main(int argc, char const *argv[])
// {
    
//     Child c;
//     c.getInfo();
//     c.hello();
//     return 0;
// }

// class Shape{//abstract class automatically

//     virtual void draw() = 0;//pure virtual fxn

// };

// class Circle : public Shape{
//     public:
//         void draw(){
//             cout<<"Drawing a circle\n";
//         } 
// };

class Base{
public:
        void show(){
            cout<<"Base"<<endl;
        }
};

class Derived : public Base{
    public:
        void show(){
            cout<<"Derived"<<endl;
        }
};

int main(int argc, char const *argv[])
{
    // Circle c1;
    // c1.draw();
    // return 0;

    Base* b;
    Derived d;
    b = &d;
    b->show();
    return 0;
}


