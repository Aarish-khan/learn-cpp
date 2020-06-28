#include<iostream>
using namespace std;

class Animal{
public:
	//prepand virtual keyword 
	virtual void Talk() const = 0; //adding "=0" makes it pure virtual function. 
	//e.g any class inheriting fromAnimal must define Talk();
	//in case of virtual function inherited class have an option to define or not to define virtual function
	//but in case of pure virtual function we don't have any option but to define any pure virtual function
};

//human class inherited from animal class
class Human:public Animal{
public:
	void Talk() const{
		cout<<"Hello Human";
	}
};


int main()
{
	//can't creat an instance of animal because it contain virtual funcion
	//Animal animal;
	Human human;
	human.Talk();
}