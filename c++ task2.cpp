// 2.2. Task 2: Arithmetic Operations with Different Data Types

// Create a program that:
// Declares two integers and two floating-point numbers.
// Performs addition, subtraction, multiplication, and division on them.
// Prints the results with proper formatting.

//Integer Variables: Do integer variables (int1 aur int2) ko declare aur initialize kiya.
//Floating-point Variables: Do floating-point numbers (float1 aur float2) ko bhi declare aur initialize kiya.
//Operations aur Formatting:
//Integers: Addition, subtraction, multiplication, aur division ko perform karke result print kiya.
//Floating-point: Floating-point numbers par operations perform karke result 2 decimal points tak format kiya (setprecision(2) se).

   #include <iostream>
using namespace std;

int main() {
    // Integer variables
    int int1 = 10;
    int int2 = 4;

    // Floating-point variables
    float float1 = 5.5;
    float float2 = 2.2;

    // Integer arithmetic operations
    cout << "Integer Operations:" << endl;
    cout << "Addition: " << int1 << " + " << int2 << " = " << (int1 + int2) << endl;
    cout << "Subtraction: " << int1 << " - " << int2 << " = " << (int1 - int2) << endl;
    cout << "Multiplication: " << int1 << " * " << int2 << " = " << (int1 * int2) << endl;
    cout << "Division: " << int1 << " / " << int2 << " = " << (int1 / int2) << endl;

    // Floating-point arithmetic operations
    cout << "\nFloating-point Operations:" << endl;
    cout << "Addition: " << float1 << " + " << float2 << " = " << (float1 + float2) << endl;
    cout << "Subtraction: " << float1 << " - " << float2 << " = " << (float1 - float2) << endl;
    cout << "Multiplication: " << float1 << " * " << float2 << " = " << (float1 * float2) << endl;
    cout << "Division: " << float1 << " / " << float2 << " = " << (float1 / float2) << endl;

    return 0;
}

