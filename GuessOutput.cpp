#include <iostream>
using namespace std;

int main()
{
	int a =10; //integer variable
	int *b = &a; //b is a pointer of type int e.g b holds address of int type variable

	//print a
	cout << a <<endl;
	//accessing the content at the address stored in b pointer
	cout << *b <<endl;

	//pointer to a pointer e.g double pointer

	int **c = &b;

	//guess output
	cout << **c <<endl;

	//guess output
	cout <<a**b <<endl;

	//guess output
	cout << a***c <<endl;
}
