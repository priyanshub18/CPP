#include<iostream>
#include<vector>
                    
using namespace std;


class Student{
public:
     int rollno;
     float marks;
     string name;


    Student(string name , int rollno , float marks ){
        this->marks = marks;
        this->name = name;
        this->rollno = rollno;
     }
};        
void change(Student s){
    s.marks = 10;
}   
void change2(Student*s){
    s->marks = 10;
}                
int main(){
    Student s1("okay" , 34 , 99.5);
    //better way is to directly define the pointer 
    Student* s = new Student("i am okay" , 77 , 9.0);
    s = &s1;
    // objects are generally passed by value
    change(s1);
    cout<<s1.marks<<" ";
    //objects are passed by refernce in the following way
    change2(s);

    cout<<s1.marks<<" ";

    return 0;
}