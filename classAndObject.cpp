#include <iostream>
#include <string>

using namespace std;

class car
{
	public:
		string name;
		int model;
		string colour;
		
		void display_car_features()
		{
			cout<<"name: "<<name<<endl;
			cout<<"model: "<<model<<endl;
			cout<<"colour: "<<colour<<endl;
		}
		
		void get_data()
		{
			cout<<"enter car name without space in between: ";
			cin>>name;
			cout<<"enter model: e.g 2018 or 2019 or 2020: ";
			cin>>model;
			cout<<"enter colour : e.g blue, silver etc: ";
			cin>>colour;
		}
		
		void start_car()
		{
			cout<<"car is starting.....";
		}
		
};

int main()
{
	char decision;
	car bmw;
	bmw.get_data();
	bmw.display_car_features();
	
	cout<<"do you wanna start car (y/n) : ";
	cin>>decision;
	switch(decision)
		{
			case 'y':
				{
					bmw.start_car();
					break;
				}
			case 'n':
				{
					cout<<"you chose not to stat car";
					break;
				}
			default:
				{
					cout<<"please select correct input!";
					break;
				}
		}
	
	
}
