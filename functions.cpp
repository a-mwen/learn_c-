/*FUNCTIONS 
- A function is a block of code which only runs when it is called.
- You can pass data, known as parameters, into a function.

Create a Function
Syntax
void functionName() {
    // code to be executed
}
    functionName() is the name of the function.
    void means that this function does not have a return value.

Call a Function
Declred functions are not executed immediately. They are executed when they are called.
To call a function, use the function name followed by parenthesis:
functionName();

The function should be declared first, before it can be called. Usually, the function is declared before the main() function.

//----------------------------------------------------------------------------------------
FUNCTIONS WITH PARAMETERS
- Information can be passed to functions as parameters. Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma.

Syntax
void functionName(type parameter1, type parameter2) {
    // code to be executed
}

//----------------------------------------------------------------------------------------
FUNCTIONS WITH DEFAULT PARAMETERS
- C++ allows you to add default values for parameters, by using an equal sign (=).

//--------------------------------------------------------------------------------
FUNCTIONS WITH MULTIPLE PARAMETERS
- You can add as many parameters as you want, just separate them with a comma.

//`---------------------------------------------------------------------------------------
RETURNING VALUES FROM A FUNCTION
- To let a function return a value, you must use the return type instead of void.
- If you want the function to return a value, you can use a data type(such as int, string, etc) instead of void, and use the return keyword inside the function.

Syntax
type functionName() {
    // code to be executed
    return value;
}

//---------------------------------------------------------------------------------------
FUNCTIONS - PASS BY REFERENCE
-functions can also be passed by reference, which means that the function gets a reference to the original variable, instead of a copy of its value.
- To pass a variable by reference, use the & operator when you declare the function parameter:
void functionName(type &parameter) {
    // code to be executed
}

//---------------------------------------------------------------------------------------
PASS ARRAYS TO FUNCTIONS
- You can also pass an entire array to a function by specifying the name of the array followed by empty square brackets:
void functionName(type arrayName[]) {
    // code to be executed
}

//---------------------------------------------------------------------------------------
PASS STRUCTURES TO FUNCTIONS
- You can also pass structures to functions by specifying the name of the structure followed by empty square brackets:
void functionName(structureName structVar) {
    // code to be executed
}   

//---------------------------------------------------------------------------------------
FUNCTION OVERLOADING
- Function overloading is a feature in C++ where two or more functions can have the same

//---------------------------------------------------------------------------------------
VARIABLE SCOPE
- Variables declared inside a function (including the function parameters) have a local scope. This means that they can only be accessed within that function.
- Variables declared outside a function, in the main() function, have a global scope. This means that they can be accessed from any function in the program.
- It is considered good practice to keep variables as local as possible, to avoid confusion and errors.

//----------------------------------------------------------------------------------------
RECURSION
- Recursion is the process of a function calling itself.
- This technique provides a way to break complicated problems down into simple problems which are easier to solve.

//----------------------------------------------------------------------------------------
LAMBDA FUNCTIONS
- A lmbda function is a small, anonymous function you can write directly in your code. 
- It is useful when you need a quick function without naming it and defining it separately.
Syntax
[capture](parameters) -> return_type {
    // function body
};
*/

#include <iostream>
using namespace std;

//Create a function with no parameters
void myFunction() {
    cout << "Hello from a function \n";
}

//Function with a parameter
//The following fuunction has a function that takes a strinjg called fname as parameter. When the function is called, we pass along a first name, which is used inside the function to print the full name:
void greet(string fname) {
    cout << "Hey " <<  fname << "\n";
}

//Function with a parameter and a default parameter
void myCountries(string name="Zambia") { // default parameter
    cout << name << "\n";
}

//Function with multiple parameters
void myDetails(string name, int age) {
    cout << "My name is " << name << " and I am " << age << " years old.\n";
}

int sumFunction( int x, int y) {
    return x + y;
}

//Functions - Pass by Reference
void changeValue(int &num) {
  num = 50;
}

//Pass arrays to functions
void printArray(int myNumbers[5]) {
    for (int i = 0; i < 4; i++) {
        cout << myNumbers[i] << "\n";
    }
}

//Pass` structures to functions
struct Car {
    string brand;
    string model;
    string year;
};

void myCar(Car c) {
    cout << c.brand << " " << c.model << " " << c.year << "\n";
}

//PRACTICAL EXAMPLE
//Fahrenheit to Celsius Converter
float toCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

//Recursion Example
int sum(int k) {
    if (k > 0) {
        return k + sum(k -1);
    } else {
        return 0;
    }
}

//Recursion - Factorial Example
int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    }
    else {
        return 1;
    }
}

int main() {

    //CALL REGULAR FUNCTION
    cout << "-----REGULAR FUNCTION-----" << endl;
    myFunction(); // call the function
    myFunction(); // call the function

    //----------------------------------------------------------------------------------------
    //FUNCTIONS WITH NO PARAMETERS
    cout << "-----FUNCTION WITH PARAMETERS-----" << endl;
    //Call the function
    greet("Robert");
    greet("Asha");
    greet("Grace");

    //----------------------------------------------------------------------------------------
    //FUNCTIONS WITH PARAMETERS WITH DEFAULT
    cout << "-----FUNCTIONS WITH PARAMETERS AND DEFAULT-----" << endl;
    myCountries("Sweden");
    myCountries("India");
    myCountries(); // will use the default value of "Zambia"

    //----------------------------------------------------------------------------------------
    //FUNCTIONS WITH MULTIPLE PARAMETERS
    cout << "-----FUNCTIONS WITH MULTIPLE PARAMETERS-----" << endl;
    myDetails("John", 25);
    myDetails("Sarah", 30); 
    myDetails("Mike", 22);

    //----------------------------------------------------------------------------------------
    //RETURNING VALUES FROM A FUNCTION
    cout << "-----RETURNING VALUES FROM A FUNCTION-----" << endl;
    int result = sumFunction(5, 10); // call the function and store the return value in 'result'
    cout << "The sum is: " << result << "\n";
    cout << "The sum is: " << sumFunction(15, 25) << endl; // call the function directly in cout

    //----------------------------------------------------------------------------------------
    //FUNCTIONS - PASS BY REFERENCE
    cout << "-----FUNCTIONS - PASS BY REFERENCE-----" << endl;
    int myNum = 10;
    cout << "Before changeValue, myNum = " << myNum << "\n";
    changeValue(myNum); // pass myNum by reference
    cout << "After changeValue, myNum = " << myNum << "\n";

    //----------------------------------------------------------------------------------------
    //PASS ARRAYS TO FUNCTIONS
    cout << "-----PASS ARRAYS TO FUNCTIONS-----" << endl;
    int myNumbers[5] = {10, 20, 30, 40, 50};
    printArray(myNumbers); // pass the array to the function

    //----------------------------------------------------------------------------------------
    //PASS STRUCTURES TO FUNCTIONS
    cout << "-----PASS STRUCTURES TO FUNCTIONS-----" << endl;
    Car myCar1; // Create a Car structure variable
    myCar1.brand = "Toyota";
    myCar1.model = "Corolla";
    myCar1.year = "2020";
    myCar(myCar1); // pass the structure to the function
    //OR
    Car myCar2 = {"Honda", "Civic", "2019"};
    myCar(myCar2); // pass the structure to the function
    
    //----------------------------------------------------------------------------------------
    //PRACTICAL EXAMPLE
    cout << "-----PRACTICAL EXAMPLE-----" << endl;
    float f_value = 80.0;
    float resultVal = toCelsius(f_value);
    cout << "Fahrenheit to Celsius Converter\n";
    cout << "Fahrenheit Value: " << f_value << "\n";
    cout << f_value << " Fahrenheit is " << resultVal << " Celsius.\n";

    //----------------------------------------------------------------------------------------
    //RECURSION
    cout << "-----RECURSION-----" << endl;
    int number = 15;
    int resultRec = sum(number);
    cout << "The sum of numbers from 1 to " << number << " is " << resultRec << "\n";

    //Recursion - Factorial Example
    int factNum = 6;
    int factResult = factorial(factNum);
    cout << "The factorial of " << factNum << " is " << factResult << "\n";

    //----------------------------------------------------------------------------------------
    //LAMBDA FUNCTIONS
    cout << "-----LAMBDA FUNCTIONS-----" << endl;
    //Example 1: A simple lambda function that adds two numbers
    auto add = [](int a, int b) -> int {
        return a + b;
    };
    return 0; // ends the main function
}

