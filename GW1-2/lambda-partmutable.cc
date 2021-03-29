#include <iostream>

int main()
{
   int x = 2, y = 3;
   auto a = [x,mutable y](){
    y++;
    std::cout << "y: " << y << std::endl;
   };
   a();
   std::cout << "y: " << y << std::endl;
}

//Partially Mutable Lambda Captures: P2034R0
