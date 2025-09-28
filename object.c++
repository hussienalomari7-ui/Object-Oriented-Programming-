#include <iostream>
using namespace std;
int main()
{
	int v = 20;
	int* ptr;

	ptr = &v;

	cout << ptr << endl; // adress v = 2020
	cout << &v << endl; // adress v = 2020


	cout << *ptr << endl; // v= 20
	cout << v << endl; // v= 20

	*ptr = 25;

	cout << ptr << endl; // adress v = 2020 
	cout << *ptr << endl; // = 25 
	cout << v << endl;  // = 25 
		 

   cout << "Hello World!\n";
}