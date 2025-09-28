#include <iostream>
using namespace std;
int main()
{
    double i=20 ; // adress i = 2020
    double *ptr ; 

    ptr = &i ; // ptr =20 
     cout << sizeof(double) << "   " << sizeof(*ptr) << ; // 8     8
     cout << endl ;
     cout << sizeof(ptr) ;       // 8
     return 0;
 }