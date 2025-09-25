/*CLASSES
OBJECT-ORENTED PROGRAMMING (OOP) IN C++
-OOP is about creating objects, which can hold data and functions that work on that dafa.

Advantages of OOP
- OOP provides a clear structure to programs.
-Makes code easier to maintain, reuse, and debug
-Helps you keep your code Dry (Don't Repeat Yourself)
- Makes it possible to create full reusable applications with less code and shorter development time

WHAT ARE CLASSES AND OBJECTS?
-Classes and objects are the two main aspects of OOP.
CLASS - a class defines what an object should look like.
OBJECT - an object is created based on that class.

For example:

Class          Object
Fruit         Apple, Banana,Mango
Car          Toyota, Honda, Ford


When you create an object from a class, it inherits all the variables and functions defined in the class.

Atrributes and methods are basically variables and functions that belong to a class.
For example: in real life, a car is an object.
Attributes: color, model, brand - BASICALLY VARIABLES
Methods: drive, brake, honk - BASICALLY FUNCTIONS

//----------------------------------------------------------
METHODS IN CLASSES
- Methods are functions that belong to a class.
- You access methods with the dot syntax (.)

CONSTRUCTORS
- A construictor is a special method that is automatically called when an object of a class is created.
----------CONSTRUCTOR RULES--------
-The constructor has the samme name as the class.
-It has no return type, not even void.
-It is usually declared public.
-It is automatically called when an object is created.

CONSTRUCTOR OVERLOADING
- You can have more than one consr=tructor in the same class. This is called constructor overloading.
- Each constructor must have a different number or type of parameters

WHY USE CONSTRUCTOR OVERLOADING?
-It gives you flexibility when creating objects.
-To set default or custom values
- To reduce repetitive code.


DIFFERENCE BETWEEN A METHOD AND A CONSTRUCTOR
Method: is a function defined inside a class that operates on the class's data (its member variables)>
Constructor: a special method that is automatically caleed when an object of a class is created. It has the same name as the class and no return type.

//----------------------------------------------------------------------------------------
ACCESS SPECIFIERS
-Access specifiers control how the members (attributes and methods) of a class can be accessed.

Using Access Specifiers
'Public' keyword is an access specifer.
    -which means that members (attributes and methods) can be accessed from outside the code

'Private' keyword is an access specifier
    -which means that members (attributes and methods) can only be accessed (or viewed)from outside the class.

'Protected' 
    - which means that members (attributes and methods) cannot be accessed from outside the class, however, they can be accessed in inherited classes.

//---------------------------------------------------------------------------------------------
ENCAPSULATION
- to make sure that "sensitive" data is hidden from users.
- To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
- If you want others to read or modify the value of private member, you can provide public get and set methods.

Real-Life Example
Think of an employee's salary:
    - The salary is private - the employee can't change it directly
    - Only their manager can update it or share it when appropriate.
Encapsulation works the same way. The data is hidden, and only trusted methods can access or modify it.

Why Encapsulation?
- It is considered good practice to declare your class attributes as private (as oftern as you can). 
    Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts.
- Increased security of data.

//-----------------------------------------------------------------------------------------------
FRIEND FUNCTIONS
Normally, private members (attributes and methods) of a class can only be accessed using methods like getters and setters.
But in some cases, you can use a special function called a friend function.

-A 'friend' function is not a member of the class, but it is allowed to access the class's private data

//---------------------------------------------------------------------------------------------------
INHERITANCE
Inheritance allows one class to reuse attributes and methods from another class.
It helps you write cleaner, more efficient code by avoiding duplication.

We group the "inheritance concept" into two categories:
    - derived class(child) - the class inherits from another class
    - base class(parent) - the class being inherited from

To inherit from a class, use the : symbol.
*/


#include <iostream>
#include <string>
using namespace std;



//CREATE A CLASS
class Car {
    public: //Access Specifiers: public, private, protected
        int speed(int maxSpeed); // method declaration
        string brand; // attribute
        string model;
        string year;

        //COnstructor Overloading
        Car () {
            brand = "Unknown";
            model = "Unknown";
        }

        // Constructor with paramaters
        Car(string x, string y, int z) {
        brand = x;
        model = y;
        year = z;
    }
};
//Method definition outside the class
int Car::speed(int maxSpeed) {
    return maxSpeed; //Would a constructor return a value? No
}
/*
//Cinstructor defined outside the class
Car::Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}
*/
class Book {
    public:
        string title;
        string author;
        int year;
};

class Dog{
    public:
        string bark(string sound);
};

string Dog::bark(string sound) {
    return sound;
}


//Acceess Specifiers Example
class Person {
    public:
        string name;
        int age;
        Person (string x, int y) {
            name = x;
            age = y;
        }
    private:
        string social;
};

//Access Private Members
//To access a private attribute, use public "get" and "set" methods:

class Employee {
    private:
        //Private attribute
        int salary;
    
    public:
    //WE CAN USE GET AND SET
        //Setter
        void setSalary(int s) {
            salary = s;
        }
        //Gettter
        int getSalary() {
            return salary;
        }
    //OR WE CAN USE A FRIEND FUNCTION
        /*
        Employee(int s) {
            salary = s;
        }
        // Declare friend function
        friend void displaySalary(Employee  emp);*/
};
/*
void displaySalary(Employee emp) {
    cout << "Salary: " << emp.salary;
}*/


/* Example Explained - GET AND SET
salary - is private - it cannot be accessed directly
setSalary() sets the value
getSalary() returns the value

Example Explained - FRIEND FUNCTION
-The friend function displaySalary() is declared inside the Employee class but defined outside of it.

*/


//INHERITANCE
//Base class
class Animal {
    public:
        string name;
        void makeSound() {
            cout << "Some animal sound" << endl;
        };
};

//derived class
class Cat : public Animal {
    public:
    void makeSound() {
        cout << "meow!";
    }
};

int main() {
    //Create an object of car
    //--------------------------------------------------------------------------------
    cout << "-----CREATE AN OBJECT OF A CLASS-----" << endl;
    Car carObj1("BMW", "X5", 1999); // Create an object of Car
    Car carObj2("Ford", "Mustang", 1969); // Create another object of Car
    Car carObj3;

    //Create an object of Book
    //--------------------------------------------------------------------------------
    Book bookObj1; // Create an object of Book
    //Access attributes and set values
    bookObj1.title = "The Great Gatsby";
    bookObj1.author = "F. Scott Fitzgerald";
    bookObj1.year = 1925;   
    //Create an object of Dog
    //--------------------------------------------------------------------------------
    Dog dogObj1; // Create an object of Dog

    //Access Specifers
    Person personObj1("Asha", 21);

    //Encapsulation
    Employee emObj;
    emObj.setSalary(66000); 

    /*FRIEND FUNCTION
    Employee myEmp(500000);
    displaySalary(myEmp);
    */

    //Inheritance
    Cat myCat;
    myCat.name = "Ruby";


    //Print values
    cout << "------------PRINT VALUES--------------------\n";\
    cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year << "\n"; // Default values from constructor
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";   
    cout << bookObj1.title << " by " << bookObj1.author << ", published in " << bookObj1.year << "\n";
    //Call the method
    cout << "------------CALL METHOD--------------------\n";
    cout << "Max speed of carObj1: " << carObj1.speed(200) << " km/h\n"; // Call the method
    cout << "Max speed of carObj2: " << carObj2.speed(370) << " km/h\n"; // Call the method
    cout << "Dog barks: " << dogObj1.bark("Woof Woof") << "\n"; // Call the method
    cout << "----------------ACCESS SPECIFER---------------------" << endl;
    cout << "A little about me: " <<personObj1.name <<  ", " << personObj1.age << endl;
    cout << "----------------ENCAPSULATION---------------------" << endl;
    cout << emObj.getSalary();
    cout << "----------------INHERITANCE---------------------" << endl;
    cout << "Cat\'s name: " << myCat.name << endl;
    myCat.makeSound();
    cout << endl;
    
    return 0;
}


