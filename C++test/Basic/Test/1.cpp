//  show specified information

# include <iostream>

int main()

{
    using namespace std ;

    string first_name ;
    string last_name ;
    int age = 0 ;
    char grade ;                // initialization  variable

    cout << "What is your first name? " << endl ;
    cin >> first_name ;

    cout << "What is your last name?"  << endl ;
    cin >> last_name ;

    cout << "What letter grade do you deserve" << endl ;
    cin >> grade ;


    cout << "What is your age?"  << endl;
    cin >> age ;
    cout << age ;

    return 0 ;
}