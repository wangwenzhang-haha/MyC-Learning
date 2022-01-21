// 复习题
# include<iostream>
# include<vector>
# include<array>
# include<string>

int main()
{
    using namespace std ;

    int even = 0 ;
    char actor[30] ; // actor是由30个char组成的数组
    short batsie[100] ; // batsie是由100个short组成的数组
    float chuck[13]; // chuck是由13个float组成的数组
    long double dipsea [64] ;// dipsea是由64个longdouble组成的数组
    //   使用array而不是数组完成以上
    array<char,30> actor ;
    array<short ,100>  batsie ;
    array< float,13> chuck ;
    array< long double ,64 > dipsea ;
    //   声明一个包含5个元素的int数组，并将它初始化为前五个正基数
    int First_odd[5] ={2,3,5,7,11} ; 
    even = First_odd[0] +First_odd[4] ;
    //  声明一个string对象，并将其初始化为字符串“cheeseburger”
    string chesse = "cheeseburger" ;
    //  声明char，并将其初始化为字符串“cheeseburger”
    char cccc [] = "cheeseburger";
    struct fish         //  一个鱼的结构体
    {
        int count;
        string kind ;
        double length ;
    };
    enum Response {NO  ,Yes,Maybe} ;
    double ted ;
    double* pointer = & ted ;
    


    return  0 ;

}