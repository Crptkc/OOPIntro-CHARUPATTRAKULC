#include <iostream>
using namespace std;

class student{
private:
  long id;
  string name;
  int age;

public:
   void set_name(string="Yme");
    void print_name();
    void set_age(int=2);
    void print_age();
    int get_age();
    void print_Jname();
 
};

void student::set_name(string n){
  name=n;
  
}

void student::set_age(int m){
  age=m;
  
}

void student::print_name(){
  cout<<"Name:"<<name<<endl;
}

void student::print_age(){
  cout<<"Age:"<<age<<endl;
}

int student::get_age(){
  return age;
}

void student::print_Jname(){
  cout <<" "<< name;
}
//lol


