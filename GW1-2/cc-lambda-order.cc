#include <iostream>
int main()
{
  int i = 0;
  auto z = [&](auto t){return 1;};
  auto x = [&](auto y){
     y(z);
     std::cout << "i: " << i << std::endl;
     return i++;
  };
  auto q1 = [=](auto x){
     return 1;
  };
  q1(x(x));
}
