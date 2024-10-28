// Object - They are entities
// Class - it is a bluprint of entities


//Encapsulation = it is wrapping up of data and member function in a single unit called class.


#include<bits/stdc++.h>
using namespace std;
class teacher{
    public:
    //Properties - Qualities that object should have
    string name;
    string dept;
    string subject;
    float salary;
    void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"dept: "<<dept<<endl;
        cout<<"subject: "<<subject<<endl;
        cout<<"salary: "<<salary<<endl;
    }
    //methods (member function)
    void changedept(string newDept){
        dept = newDept;
    }
    
    //Constructor (Non-Paramitarized)
    teacher(){
        cout<<"Constructor called"<<endl;
    }
// Here we have created two constructor in a same class, but only one constructor
// will be called depending upon the object creation. This will not throw any error
// It is called constructor overloading and it is an example of polymorphism.
    
    // Constructor (parameterized)
    teacher(string name, string dept, string subject, float salary){
       this -> name = name;//Here this->name specifies that this name is calling 
    this -> dept = dept;// Functions property.
       this -> subject = subject;
       this -> salary = salary;
    }

    // This - it is a special pointer in c++ that points to the current object.
    // This points to the address of the calling constructor

    
};

int main(){
    //Creation of object
    teacher T1("kshitij jain", "BDA", "Communication", 25000); 
// As soon as we create an object, automatically a function is called known as constructer.
 // Constructor is used to initialize an object.
 // Constructor has same name as of class
 // Constructor does not have return type
 // Constructor is only called once, at the time of object creation.

    /*T1.name = "kshitij jain";
    T1.dept = "BDA";*/
    T1.getinfo();

// Copy constructor is used to copy properties of one object into other
    teacher T2(T1);// Default Copy constructor invoked
    cout<<endl;
    cout<<endl;
    cout<<endl;
    T2.getinfo();
    return 0;
}