#include <iostream>
#include<vector>
#include "profile.hpp"

profile::profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns)
{
  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
}

void profile::add_hobby(std::string new_hobby)
{
  hobbies.push_back(new_hobby);
}


std::string profile::view_profile()
{
  for(auto x:hobbies)
    std::cout<< x<<"\n";
  return name;
}
