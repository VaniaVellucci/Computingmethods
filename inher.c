#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
class Person{
 public:
  Person(const string& name){
    name_=name;
          cout << "Person(" << name  
           << ") called" << endl; 
  }

  ~Person() { 
      cout << "~Person() called for "  
           << name_ << endl; 
     } 

  string name() const {return name_;}
  
  void print(){
    cout<<"I'm a person, my name is"<<name_<<endl;
  }

 private:
  string name_;
};

class Student :public Person {
 Student(const string& name, int id):Person(name){
    id_=id;
      cout << "Student(" << name  
           << ", " << id << ") called"  
           << endl;   }
  ~Student(){
    cout << "~Student() called for "
	 <<name_<<endl;
  }

  int id() const { return id_;}

  void print(){
    cout<<"I'm a Student, my name is"<<name_<<"my id is "<<id_<<endl;
  }
  
 private:
  int id_;
}
