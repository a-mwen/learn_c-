//SYNTAX 
#include <iostream> // a header library that lets us work with input and output ojects, such as cout and cin. Header files add functionality to C++ programs.
#include <string> // a header file that lets us work with strings, which are sequences of characters (text)
#include <cmath> // a header file that lets us work with common mathematical functions
using namespace std; //means that we can use names for objects and variables from the standard library.

int main() { //This is a function. Any code inside this function will be executed.
    //SYNTAX
    std::cout << "Hello World! \n"; //cout is an object used to output/print text to the console. The << operator is used to send the text to cout.
    cout << "have a good day!" << "\n"; // prints the text "have a good day!" followed by a newline character (\n)
    cout << 3 << endl; // prints the number 3
    cout << 2 +2 << "\n"; // prints the result of 2 + 2, which is 4

    //----------------------------------------------------------------------------------------
    //VARIBLES
    //Create a varible that should store a number
    cout << "--------VARIABLES--------" << endl;
    int myNum = 5; // integer (whole number)
    myNum = 10; //Now myNum is 10
    cout << myNum << endl;
    //combine both text and a varaible
    int myAge = 21;
    cout << "I am " << myAge << " years old." << endl;
    //Combine different data types
    string name = "John";
    int age = 21;
    double height = 5.7;
    cout << "My name is " << name << ". I am " << age << " , height is " << height << endl;
    //Declare Many Variales
    int x = 5, y = 6, z = 50;
    cout << x + y + z << endl; 

    //VARIABLES- Constants 
    //const int myNum = 15; // myNum will always be 15
    //conNum = 10; //ERROR: assignment of read-only variable 'myNum'
    
    //VARIABLES - Real-Life examples
    //Calculate the area of a rectangle
    int length = 4;
    int width = 6;

    int area = length * width;

    //Print the variables
    cout << "Length is: " << length << "\n";
    cout << "Width is: " << width << "\n";
    cout << "Area of the rectangle is: " << area << "\n";
    
    //----------------------------------------------------------------------------------------
    //USER INPUT
    // We have already learned that cout is used to output/print values.
    // 'cin' is used to get user input.
    //Simple Calculator
    cout << "-----SIMPLE CALCULATOR------" << endl;
    int first, last;
    int sum;
    cout << "Type a number: ";
    cin >> first;
    cout << "Type another number: ";
    cin >> last;
    sum = first+ last;
    cout << "The sum of the numbers is " << sum << endl;
    //User Input Strings
    cout << "-----User Input Strings------" << endl;
    string fullname;
    cout << "Enter your full name: " << endl;
    getline(cin, fullname); // use getline() function to get full name with spaces
    cout << "Your name is: " << fullname << endl;

    //----------------------------------------------------------------------------------------
    //DATA TYPES
    //Boolean Types
    cout << "----BOOLEAN TYPES------" << endl;
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl; // Outputs 1 (true)
    cout << isFishTasty << endl; // Outputs 0 (false)
    //Strings
    cout << "------Strings------" << endl;
    string greating = "Hello";
    cout << greating << endl; // Outputs Hello
    //The auto Keyword
    cout << "T-----he auto Keyword------" << endl;
    auto var1 = 5; // int
    cout << var1 << endl;

    //----------------------------------------------------------------------------------------
    //Operators
    cout << "-----Logical Operators-------" << endl;
    int test = 4;
    cout << (test < 5 || test > 2) << endl; 
    
    //String Concatenation
    cout << "-----STRING CONCATENATION-------" << endl;
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;// using + operator
    string fullName2 = firstName.append(lastName);// using append() method
    cout << fullName; // Outputs John Doe
    //String Length
    cout << "------String Length------" << endl;
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length(); // Outputs 26
    //Change String Characters
    cout << "-----Change String Characters------" << endl;
    string myString = "Hello";
    cout << myString << endl;
    myString[0] = 'J';
    cout << myString;
    // Strings- at() function- included in the <string> library to make it easy to access characters in a string
    cout << "------at()function-----" << endl;
    string myStr = "Hello";
    cout << myStr << endl;
    cout << myStr.at(0) << endl; // Outputs H
    cout << myStr.at(1) << endl; // Outputs e
    cout << myStr.at(myStr.length() - 1) << endl; // Outputs o
    //Strings - Special Characters
    cout << "-----Special Characters------" << endl; 
    string txt2 = "We are the \"King\" of the jungle."; // Use \" to insert double quotes in a string
    cout << txt2 << endl;
    string txt3 = "It\'s alright."; // Use \' to insert single quote in a string
    cout << txt3 << endl;

    //----------------------------------------------------------------------------------------
    //MATH
    cout << "-----MATH-------" << endl;
    cout << "Max: " << max(5, 10) << endl; // Outputs 10
    cout << "Min: " << min(5, 10) << endl;
    cout << "Square root of 64 is: " << sqrt(64) << endl; // Outputs 8
    cout << "The natural logarithm of e is: " << log(2.718281828459045) << endl; // Outputs 1

    //---------------------------------------------------------------------------------------
    //IF-ELSE STATEMENT
    cout << "-----IF-ELSE STATEMENT, ELSE-IF AND TERNARY-------" << endl;
    int time = 20;
    if (time < 18) {
        cout << "Sorry, you are late!!" << endl;
    } else {
        cout << "Welcome!!" << endl;
    }
    //Else if
    int hour = 20;
    if (hour < 18) {
        cout << "Good day.";
    } else if (hour == 20) {
        cout << "Good evening." << endl;
    } else {
        cout << "Good night." << endl;
    }
    //Ternary Operator
    string color = "Orange";
    string result = (color != "Black") ? "You are bright" : "You are boring"; 
    cout << result << endl;

    //-----------------------------------------------------------------------------------------------
    //SWITCH STATEMENTS
    cout << "-------SWITCH STATEMENTS------------" << endl;
    int day = 4;
    cout << "Enter day number (1-7): ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "Monday" << "\n";
            break;
        case 2:
            cout << "Tuesday" << "\n";
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << "\n";
            break;
        case 7:
            cout << "Sunday" << "\n";
            break;
        default:
            cout << "well, I guess its a regular day!!" << endl;
    }


    //----------------------------------------------------------------------------------------------
    //WHILE LOOPS
    //In the example below, the code in the loop will run, over and over again, as long as a variable (i) is less than 5:
   cout << "------------WHILE LOOP, DO/WHILE LOOP-----------" << endl;
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }
    cout << "--decrement while loop---" << endl;
    int countdown = 3;
    while (countdown > 0) {
        cout << countdown << "\n";
        countdown--;
    }
    //Do while
    cout << "--Do while loop---" << endl;
    int k = 0;
    do {
        cout << k << "\n";
        k++;
    }
    while (k < 5);
    //This example keeps asking the user to enter a positive number. The loop stops when the user enters 0 or a negative number:
    int number;
    do {
        cout << "Enter a positive number: " << endl;
        cin >> number;
    } while (number > 0);

    //----------------------------------------------------------------------------------------------
    //FOR LOOPS
    cout << "------------FOR LOOP-----------" << endl;
    for (int j = 0; j < 10; j++) {
        cout << j << "\n";
    }
    //sum of numbers
    cout << "--sum of number---" << endl;
    int total = 0;
    for (int o = 1;o <= 5; o++) {
        total = total + o;
    }
    cout << "Sum is " << sum << endl;

    //Nested Loops
    cout << "-----Nested Loops-----" << endl;
    for (int p = 1; p <= 3; p++) {
        for (int h= 1; h <= 3; h++) {
            cout << p * h << "";
        }
        cout << endl;
    }

    //----------------------------------------------------------------------------------------------
    //BREAK AND CONTINUE
    cout << "-----BREAK AND CONTINUE-----" << endl;
    //Break
    for (int b = 0; b < 10; b++) {
        if (b == 4) {
            break; // exit the loop when i is 4
        }
        cout << b << endl; // Outputs 0 1 2 3
    }
    //Continue
    cout << "-----Continue-----" << endl;
    for ( int l = 0; l < 10; l++) {
        if (l == 4) {
            continue; // skip the iteration when i is 4
        }
        cout << l << endl; // Outputs 0 1 2 3 5 6 7 8 9
    }

    //----------------------------------------------------------------------------------------------`
    //ARRAYS
    cout << "-----ARRAYS-----" << endl;
    //Declare an array
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Toyota"};
    //Access an array element
    cout << cars[0] << endl; // Outputs Volvo
    //Change an array element
    cars[0] = "Opel";
    cout << cars[0] << endl; // Outputs Opel

    //Loop through an array
    for (int n = 0; n < 5; n++) {
        cout << cars[n] << endl; // print value
        cout << n << "=" << cars[n] << endl; // print index and value
    }
    // cars[n] is the value, n is the index
    //Size of an Array
    int mySize[5] = {25, 50, 75, 100, 125};
    cout << "Size of the array is: " << sizeof(mySize) << endl;  // Outputs 20 (5 elements x 4 bytes each)
    //an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
    int myNumbers[] = {25, 50, 75, 100};
    int arraySize = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << "Size of the array is: " << arraySize << endl;  // Outputs 4

    //----------------------------------------------------------------------------------------------
    //STRUCTURES
    cout << "-----STRUCTURES-----" << endl;
    struct  car { // Structure declaration, This structure is now named 'car'
        string brand;
        string model;
        int year;
    } myCar1, myCar2; // Structure variables

    //Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999; 
    //Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    //Print members of myCar1
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    //Print members of myCar2
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    //----------------------------------------------------------------------------------------------
    //ENUMERATIONS
    cout << "-----ENUMERATIONS-----" << endl;
    enum level { // Create an enum called 'level'
        low,
        medium,
        high
    };      
    level myVar = medium; // Create a variable of the enum type
    cout << myVar << endl; // Outputs 1 (medium is the second item in the enum, so it is represented by 1)

    //----------------------------------------------------------------------------------------------
    //REFERENCES
    cout << "-----REFERENCES-----" << endl;
    string food = "Pizza"; // food variable
    string &meal = food;   // reference to food

    meal = "Burger"; // changes both meal and food

    cout << food << "\n"; // Outputs Burger
    cout << meal << "\n"; // Outputs Burger

    //----------------------------------------------------------------------------------------------
    //MEMORY MANAGEMENT
    cout << "-----MEMORY MANAGEMENT-----" << endl;

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    cout << sizeof(myInt) << "\n";     // 4 bytes (typically)
    cout << sizeof(myFloat) << "\n";   // 4 bytes
    cout << sizeof(myDouble) << "\n";  // 8 bytes
    cout << sizeof(myChar) << "\n";    // 1 byte

    return 0; // ends the main function
}

//----------------------------------------------------------------------------------------
/* SYNTAX
NOTES: 
- so if you add 'using namespace std'; 
    'std::' is not necessary before cout and endl
- Semicolon (;) is used to terminate statements in C++. Each statement must end with a semicolon.
- numbers don't need string quotes
- \n is insert a new line 
- Two \n\n will create a blank line between the two lines of text.
'endl' is used to insert a newline character and flush the output buffer.

Tip: Both cin and cout belongs to the <iostream> library, which is short for standard input / output 



//-----------------------------------------------------------------------------------------
 VARIABLES
NOTES:
- Variables are containers for storing data values.
- In C++, each variable must be declared with a specific data type, which determines the type of data it can hold.
- Common data types include:
    - int: for integers (whole numbers) such as 1, -5, 42
    - double: for floating-point numbers (numbers with decimal points) such as 3.14
    -char: for single characters such as 'a', 'B'
    - string: for sequences of characters (text) such as "Hello, World!"
    - bool: for boolean values (true or false)
- Variables must be declared before they are used.

Sytax Example:
 type variableName = value;


-Changing variable values: If you assign a new value to an existing variable, it will overwrite the previous value:

Display varibles
- The cout object is used together with the << operator to display variables.
- To combine both text and a varaible, separate them with the << operator.
    
Declare Many Variables
- To declare more than one variable of the same type, use a comma-separeted list
- You can also assign the sma e value to multiple variables in one line.
    //int x, y , z;
    //x = y = z = 50;
    //cout << x + y + z;

- Use unique names to be easy to identify

Constants 
- WHen you do not want others to change existing varibal values, use the const keyword
- This will declare the variable as "constant", which means unchangeable and read-only
- You should always declare the variable as constant when you have values that are unlikely to change:
    EX: const int minutesPerHour = 60;

Example in function


//----------------------------------------------------------------------------------------
  
USER INPUT
- We have already learned that cout is used to output/print values.
'cin' is used to get user input.
Example:
    int x;
    count << "Type a number: ";
    cin >> x; //Get user input from the keyboard
    cout << "You typed: " << x; // print the value of x which the user typed

User Input Strings
-It is possible to use the extraction operator >> on cin to store a string entered by a user
-getline() function is used to get a string with spaces
    string fullname;
    cout << "Enter your full name: ";
    getline(cin, fullname); // use getline() function to get full name with spaces
    cout << "Your name is: " << fullname;


//----------------------------------------------------------------------------------------
DATA TYPES
-The data type specifies the size and type of information the variable will store.
Data Type 	Size 	Description
-------------------------------
boolean 1 byte 	Stores true or false values
char 	1 byte 	Stores a single character/letter/number, or ASCII values
int 	2 or 4 bytes 	Stores whole numbers, without decimals
float 	4 bytes 	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double 	8 bytes 	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits


Boolean Types
-data type is declared with the bool keyword and can only take the values true or false
-When the value is returned, true = 1 and false = 0

Character Types
- char data type is used to store a single character/letter/number, or ASCII values
- Char values are surrounded by single quotes, like 'A' or 'c'

Strinf Types
- string data type is used to store a sequence of characters (text)
- To use strings, you must include the string header file in your program:
    #include <string>

The auto Keyword
-automatically detects the type of variable based on the value assigned to it.
For example: Insted of writing int x = 5;
    auto x = 5; // x will be of type int


//----------------------------------------------------------------------------------------
 OPERATORS
-Operators are used to perform operations on variables and values

Operator 	Name 	Description 	Example
+ 	Addition 	Adds together two values 	x + y 	
- 	Subtraction 	Subtracts one value from another 	x - y 	
* 	Multiplication 	Multiplies two values 	x * y 	
/ 	Division 	Divides one value by another 	x / y 	
% 	Modulus 	Returns the division remainder 	x % y 	
++ 	Increment 	Increases the value of a variable by 1 	++x 	
-- 	Decrement 	Decreases the value of a variable by 1 	--x
== 	Equal to 	x == y 	
!= 	Not equal 	x != y 	
> 	Greater than 	x > y 	
< 	Less than 	x < y 	
>= 	Greater than or equal to 	x >= y 	
<= 	Less than or equal to 	x <= y

Logical Operators
-Logical Operators are used to determine the logic between variables or vales
&& logical and - Returns true if both statements are true
|| logical or - Returns true if one of the statements is true
! logical not - Reverse the result, returns false if result is true



//----------------------------------------------------------------------------------------
STRING CONCATENATION
- The + operator can be used between strings to combine them. This is called concatenation.
- The .append() method can also be used to concatenate two strings.

String Length 
- The .length() method returns the length of a string (number of characters)
-The size() method does the same.

Access Strings
-You can acess the characters in a string by referring to its index number inside square brackets [].
- This example prints the first character in myString

Change String Characters
-To change the value of a specific character in a string, refer to the index number, and use single quotes:

The at() function
-The <string> library also has an at() function tht can be used to access characters in a string:



//----------------------------------------------------------------------------------------
MATH
_C++ has many functions that allows you to perform mathematical tasks on numbers.
Max and MIn
- The max() function can be used to find the highest value of two numbers
- The min() function can be used to find the lowest value of two numbers
Example:
    cout << max(5, 10); // Outputs 10
    cout << min(5, 10); // Outputs 5

C++ <cmath> Library
- The <cmath> library has many useful functions for performing mathematical tasks on numbers.



//----------------------------------------------------------------------------------------
 IF-ELSE STATEMENT
- The if statement is used to test a condition. If the condition is true, the block of code inside the if statement is executed.
- If the condition is false, the block of code inside the if statement is skipped.
- The else statement can be used to execute a block of code if the condition is false.
- The else if statement can be used to specify a new condition to test, if the first condition is false.

//Else if
-Use the else if statement to specify a new condition if the first condition is false.

SHORT HAND If...Else (Ternary Operator)
- It can be used to replace multiple lines of code with a single line, and it is often used to replace simple if selse statements
EX:
    varible = (condition) ? expressionTrue : expressionFalse;


//----------------------------------------------------------------------------------------
SWITCH STATEMENTS
-Use the switch statement to select one of many code blocks to be executed
SYNTAX
    switch(expression) {
    case x:
        //code block
        break;
    case y:
        //code block
        break;
    default:
        //code block;
        
    }

This is how it works
    - The switch expression is evaluated once
    - The valuue of the expression is compared with the value of each case
    - If there is a match, the associated block of code is executed
    - The break and default keywords are optional....
The 'break' keyword breaks out of the switch block



//----------------------------------------------------------------------------------------
WHILE LOOPS
-Loops can execute a block of code as long as a specified condition is reached
-Loops are handy because they save time, reduce errors, and they make code more readable

Do/While Loop
- The do/while loop is a variant of the while loop. This loop willexecute the code block once, 
checking if the condition is true. Then it will repeat the loop as long as the condition is true.

Syntax
do {
    //cod block to be executed
}
while (condition); 
The ; semicolon after the while condition is required!

//----------------------------------------------------------------------------------------
FOR LOOPS
- WHen you exactly how many time you want to loop through a block of code, use th for loop
instead of a while loop:

Syntax 
for (statement 1; statement 2; statement 3) {
    // code block to be executed
}
- Statement 1 is executed (one time) before the execution of the code block.
- Statement 2 defines the condition for executing the code block. If it is true, the code block is executed. If it is false, the loop ends.     
- Statement 3 is executed (every time) after the code block has been executed.

Nested Loops
- A loop inside a loop is called a nested loop.
- The "inner loop" will be executed one time for each iteration of the "outer loop".



//----------------------------------------------------------------------------------------
 BREAK AND CONTINUE
//Break
- We have used the break statement in the switch statement to terminate a case.
-The break statement can also be used to jump out of a loop.

//Break
- The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.


//----------------------------------------------------------------------------------------
ARRAYS
-Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

- To declare an array, define the variable type with square brackets:
    type arrayName [arraySize];
-Add values to an array after it has been declared, using the array index number to specify the position of the value in the array.
    arrayName[index] = value;

Omit Array Size
- If you do not know how many elements an array will have, you can define an array without specifying the size of the array. 

Size of an Array
- The size of an array can be reterieved using the sizeof() operator:
    int myNumbers[] = {25, 50, 75, 100};
    int arraySize = sizeof(myNumbers) / sizeof(myNumbers[0]);


//----------------------------------------------------------------------------------------
STRUCTURES
-Structures (also called structs) are a way to group several related variables into one place.
- Each variable in the structure is known as a member of the structure. 

struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable 

// Accessing Structure Members
- To access members of a structure, use the dot syntax (.)
    myStructure.myNum = 1;
    myStructure.myString = "Hello World";

//Print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString;  


//----------------------------------------------------------------------------------------
ENUMERATIONS
-An enum is a special type that represents a group of constants (unchangeable variables).
-To create an enum, use the enum keyword, followed by the name of the enum, and separate the enum items with a comma:
enum level {
  low,
  medium,
  high
};

To access the enum items, you must create a variable of the enum type:
enum level myVar = MEDIUM;



//----------------------------------------------------------------------------------------
REFERENCES
-A reference variable is a "nickname" for another variable.
-To create a reference variable, use the & operator in the declaration:
    string food = "Pizza";   // food variable
    string &meal = food;     // meal is a reference to food

Memory Address
- Every variable has a memory address. The address is the location of the variable in the computer's memory.
- The address of a variable is retrieved with the & operator:
    int myVar = 25;
    cout << &myVar; // Outputs 0x6dfed4


//----------------------------------------------------------------------------------------
MEMORY MANAGEMENT
- The process of controlling how much memory your program uses- and how it is used. 
    -This includes creating, using, and releasing memory when it is no longer needed.


Memory in C++:
- WHen you create a variable in c++, the compiler allocates a certain amount of memory to store the variable.

Get Memory Size
- The sizeof() operator returns the size of a variable (in bytes)
int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;

  cout << sizeof(myInt) << "\n";     // 4 bytes (typically)
  cout << sizeof(myFloat) << "\n";   // 4 bytes
  cout << sizeof(myDouble) << "\n";  // 8 bytes
  cout << sizeof(myChar) << "\n";    // 1 byte
  return 0;
}

The new Keyword
- The new keyword lets you manage memory yourself.

*/
