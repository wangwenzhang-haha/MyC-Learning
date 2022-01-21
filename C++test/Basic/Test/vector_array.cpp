# include <vector>
# include <iostream>
# include <array>

int main()
{
    using namespace std ; 
    vector <int> vi;       // create a zero-size array of int 
    int n ;
    cin >> n;
    vector <double> vd(n);  // create an array of n doubles

    array<int , 5 > ai ;
    array<double ,4 > ad  = { 1.2 , 2.1 , 3.43 , 4.3} ;
    
    return 0 ;
}