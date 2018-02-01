//Authors: Jingwen Ling
#include <iostream>
#include <string>

int main()
{
      std::string adjective;
      double number;
      std::string noun;
      char character;

      std::cout<<"What is the adjective?";
      std::cin>>adjective;
      
      std::cout<<"What is the number?";
      std::cin>>number;
      
      std::cout<<"What is the noun?";
      std::cin>>noun;

      std::cout<<"What is the punctuation";
      std::cin>>character;

      std::cout<<"He found" << adjective << "cats on the street yesterday." <<std::endl;
      std::cout<<"There were" << number << "cats." <<std::endl;
      std::cout<<"They did not eat any" << noun << "." <<std::endl;
      std::cout<<"He gave them some food" << character << "." <<std::endl;


  return 0;
}
