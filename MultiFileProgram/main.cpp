#include<iostream>
#include<vector>
#include "increament_and_sum.hpp"
using std::vector;
using std::cout;

int main()
{
	vector<int> v{1,2,3};
	int total = increament_and_sum(v);
	cout<<"total sum = "<<total;

	return 0;

}