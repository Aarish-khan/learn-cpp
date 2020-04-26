#include <iostream>
using namespace std;


int a =5, b = 20;

void f(int *p, int *q);

int main()
{
	f(&a,&b);

	cout <<a <<" "<<b;
}

void f(int *p, int *q)
{
	p = q;
	*p = 2;
}
