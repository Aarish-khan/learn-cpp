#include<iostream>
#include<vector>
#include<cassert>
using namespace std;

class Matrix{
public:
	//constructor for Matrix
	Matrix(int row, int col):rows_(row),col_(col),value_(row*col){}
	//operator overload
	//this returns a reference to the location(in values vector) where we want to store the element
	int& operator()(int row, int col){
		return value_[row*col_ + col];
	}

	//operator overloading over
	int operator()(int row, int col) const{
		return value_[row*col_ + col];
	}

private:
	int rows_;
	int col_;
	vector<int> value_;
};



int main()
{
	Matrix matrix(2,3);
	//matrix(0,0) returns a reference to first memory location of vector "value_", and we store 2 at that location
	matrix(0,0) = 2;

	assert(matrix(0,0)==2);
	cout<<"success\n";
}