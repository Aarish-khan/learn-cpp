#include <iostream>
#include "profile.hpp"
int main() {

  profile sam("Sam Drakkila", 30, "New York","USA", "he");
  
  
  sam.add_hobby("listining to audiobooks");
  sam.add_hobby("playing rec sports like bowling and kickball");
  sam.add_hobby("writing a speculative fiction novel");
  sam.add_hobby("reading advice coloum");
  
  std::cout << sam.view_profile()<<"\n";

}
