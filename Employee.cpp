//#include "Employee.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee{
    public:
        Employee() = default;
        Employee(string &n, double s, int year, int month, int day);
        string getName();
        double getSalary();
        string getHireDayYear();
        string getHireDayMonth();
        string getHireDayDay();
        void raiseSalary(double byPercent);
    private:
        string name;
        double salary;
        string HireDay;
        string HireMonth;
        string HireYear;
};

Employee::Employee(string &n, double s, int year, int month, int day){
    this -> name = n;
    this -> salary = s;
    this -> HireYear = (to_string(year));
    this -> HireMonth = (to_string(month));
    this -> HireDay = (to_string(day));
}
string Employee::getName(){
    return this -> name;
}
double Employee::getSalary(){
    return this -> salary;
}
string Employee::getHireDayYear(){
    return this->HireDay;
}
string Employee::getHireDayMonth(){
    return this->HireMonth;
}
string Employee::getHireDayDay(){
    return this->HireYear;
}
void Employee::raiseSalary(double byPercent){
    double raise = salary * byPercent / 100;
    salary += raise;
}

int main(){
    int cantStaff = 3;
    Employee *staff = new Employee[cantStaff];
    string trab1 = "Carl Cracker", trab2 = "Harry Hacker", trab3 = "Gopichill";
    staff[0] = Employee(trab1,50000.0,1987,12,15);
    staff[1] = Employee(trab2,20000.0,1989,10,1);
    staff[2] = Employee(trab3,10.0,1990,1,15);

    int i;
    for (i=0; i < cantStaff; i++){
        staff[i].raiseSalary(10);
    }
    for(i=0; i < cantStaff;i++){
        Employee e = staff[i];
        vector <string> fecha{e.getHireDayYear(),e.getHireDayMonth(),e.getHireDayDay()};
        cout << "name= " << e.getName();
        cout << ",salary= " << e.getSalary();
        cout << ",hireDay= " << fecha[0];
        cout << "-" << fecha[1];
        cout << "-" << fecha[2] << endl;
    }
    delete [] staff;
    return 0;
    }