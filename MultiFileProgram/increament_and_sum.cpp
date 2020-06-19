#include<vector>
#include "vec_add_one.hpp"
//#include "increament_and_sum.hpp"
using std::vector;
int increament_and_sum(vector<int> v)
{
	int total = 0;
	vec_add_one(v);

	for(int &i:v)
		total += i;

	return total;

}