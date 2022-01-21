// choices.cpp -- array variations

# include <iostream>
# include <vector>
# include <array>

int main()
{
    using namespace std ;
// C,oringinal C++
    double a1[4] = {1.2 , 2.4 ,3.6 ,4.8} ;
// C++ 98 STL
    vector<double> a2(4) ; // create vector with 4 elements
// no simple way to initialize in C98
    array<double,4> a3 = {3.14 ,2.72 ,1.62 ,1.41} ;
    array<double,4> a4 ;
    a4 = a3 ;       // valid for array objects of same size
// use array notation
    cout << "a1[2]" << a1[2] << " at " << &a1[2] << endl ;
    cout << "a2[2]" << a2[2] << " at " << &a2[2] << endl ;
    cout << "a3[2]" << a3[2] << " at " << &a3[2] << endl ;
    cout << "a4[2]" << a4[2] << " at " << &a4[2] << endl ;
// misdeed
    a1 [-2] = 20.2 ;
    cout << " a1[-2]: "  << a1[-2] << " at " << &a1[-2] << endl ;
    cout << " a3[-2]: "  << a3[-2] << " at " << &a3[-2] << endl ;
    cout << " a4[-2]: "  << a4[-2] << " at " << &a4[-2] << endl ;


    return 0;
}