# OOP_Function_n_Operators
Experiment 13
# Function and Operator Overloading
Experiment 13
## Aim 
To study Function and Operator Overloading

## Theory
### Definition
#### Function Overloading
- Function overloading is a feature in C++ that allows you to define multiple functions with the same name but with different parameters.
- The compiler differentiates these functions based on the number and/or type of their parameters.
> For example:
```cpp
#include <iostream>
using namespace std;

void print(int num) {
    cout << "Integer: " << num << endl;
}

void print(double num) {
    cout << "Double: " << num << endl;
}

void print(const string& str) {
    cout << "String: " << str << endl;
}

int main() {
    print(5); 
    print(3.14);
    print("Hello, World!");

    return 0;
}

```
#### Operator Overloading
- Operator overloading is a feature in C++ that allows developers to redefine the way operators work for user-defined types (such as classes).
- This enables you to use operators like `+`, `-`, `*`, and others with objects of your classes in a way that is intuitive and similar to built-in types.
> For example:
```cpp
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

    Point operator+(const Point& other) {
        return Point(x + other.x, y + other.y);
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(1, 2);
    Point p2(3, 4);
    Point p3 = p1 + p2;

    cout << "Point 1: ";
    p1.display();
    cout << "Point 2: ";
    p2.display();
    cout << "Point 3 (Point 1 + Point 2): ";
    p3.display();

    return 0;
}

```

## Algorithms
### Addition using Function Overloading

1. **Start**

2. **Class Definition
   - **Define a class named `Addition`.**

3. **Method Definitions**
   - **Define the following methods within the class:**
     - **Method 1: `int sum(int a, int b)`**
       - **Takes two integer parameters and returns their sum.**
     - **Method 2: `int sum(int a, int b, int c)`**
       - **Takes three integer parameters and returns their sum.**
     - **Method 3: `double sum(double d, double e)`**
       - **Takes two double parameters and returns their sum.**

4. **Main Function**
   - **Create an instance of the `Addition` class named `obj`.**
   - **Call `obj.sum(20, 15)`:**
     - **This calls the first `sum` method (two integers).**
     - **Output the result.**
   - **Call `obj.sum(81, 100, 10)`:**
     - **This calls the second `sum` method (three integers).**
     - **Output the result.**
   - **Call `obj.sum(20.5, 30.5)`:**
     - **This calls the third `sum` method (two doubles).**
     - **Output the result.**
    
5. **End**


### Sum and Difference using Operator Overloading

1. **Start**

2. **Class Definition**
   - **Define a class named `Complex`.**
   - **Declare private member variables:**
     - **`int real` (to store the real part)**
     = **`int imag` (to store the imaginary part)**

3. **Constructor**
   - **Implement a constructor `Complex(int r = 0, int i = 0)`:**
     - **Initialize `real` with `r` and `imag` with `i`.**

4. **Operator Overloading for Addition**
   - **Define a member function `Complex operator+(Complex const& obj)`:**
     - **Create a new `Complex` object `res`.**
     - **Set `res.real` to the sum of the `real` parts of the current object and `obj`.**
     - **Set `res.imag` to the sum of the `imag` parts of the current object and `obj`.**
     - **Return `res`.**

5. **Operator Overloading for Subtraction**
   - **Define a member function `Complex operator-(Complex const& obj)`:**
     - **Create a new `Complex` object `res`.**
     - **Set `res.real` to the difference of the `real` parts of the current object and 
     `obj`.**
     - **Set `res.imag` to the difference of the `imag` parts of the current object and 
     `obj`.**
     - **Return `res`.**

6. **Print Method**
   - **Define a method `void print()`:**
     - **Output the complex number in the format "real + i imag".**

7. ****Main Function****
   - **Create two `Complex` objects `c1(10, 5)` and `c2(2, 4)`.**
   - **Create a new `Complex` object `c3` and assign it the result of `c1 + c2`.**
   - **Create another `Complex` object `c4` and assign it the result of `c1 - c2`.**
   - **Output the sum by calling `c3.print()`.**
   - **Output the difference by calling `c4.print()`.**
  
8. **End**
