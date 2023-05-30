#include <iostream>
using namespace std;

#include "student.h"
#define N 4
int main(int argc, char* argv[]) {
  student s1,s2;
  student a[N]; //set age and set name for the first two ppl
  int i,age;
  string name;
  


  for(i=0;i<N;i++){
    cout<<"What is your name?";
    cin>>name;
  a[i].set_name(name);
    cout<<"What is your age?";
    cin>>age;
  a[i].set_age(age);
  }

  for(i=0;i<N;i++){
    cout<<"Student "<<i+1<<endl;
    a[i].print_name();
    a[i].print_age();  
  }

  int young = a[0].get_age(); 
         
    for (int i=0;i<N;i++) {

      if ( young > a[i].get_age() ) {
          young = a[i].get_age(); 
      }
    }

  cout<<"Youngest People ("<<young<<"):";

    for (int i =0;i<N;i++) {

      if (young == a[i].get_age()) {
        a[i].print_Jname();
        
      }
        
      
    }

    
  


  
  
  

  /*
  
  // s1.name="PUN";  // ERROR, it is in private
  //  s1.set_name(); //make a default value to your name
  //  s1.set_age(20); 
	//	s2.set_name("Joe");
		
    s1.print_name();
    s2.print_name(); 
   
*/
    
  }
  
  


