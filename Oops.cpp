#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:

    string name;
    string dept;
    string subject;
    double salary;
public:
    //non-parameterized
    Teacher(){
        name = "Ankit";
        dept = "CSE";
        subject = "OOPS";
        salary = 25000;
    }

    //parametrized
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    //copy constructor
    Teacher(Teacher &orgObj){

        cout<<"I am Custom Copy Constructor\n";

        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Dept : "<<dept<<endl;
        cout<<"Subject : "<<subject<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

int main()
{
    Teacher obj("Rudra", "EIE", "Control System", 25000);
    // obj.getInfo();

    Teacher obj1(obj);

    obj1.getInfo();

    int x =5;

    int* p = &x;

    int** q = &p;

    int*** r = &q;

    cout<<r<<"\n"<<p<<"\n"<<q;
    
    return 0;
}

