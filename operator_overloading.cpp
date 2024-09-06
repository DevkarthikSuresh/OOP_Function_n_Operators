#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:

    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

 
    Complex operator+(Complex const& obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }


    Complex operator-(Complex const& obj) {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }


    void print() const {
        cout << real << " + i " << imag << '\n';
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);


    Complex c3 = c1 + c2;
    cout << "Sum: ";
    c3.print();


    Complex c4 = c1 - c2;
    cout << "Difference: ";
    c4.print();

    return 0;
}
/* output
Sum: 12 + i 9
Difference: 8 + i 1
*/
