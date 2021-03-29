#include <iostream>
#include <tuple>

template<class... Args1>
auto f(Args1... args){
   std::cout << sizeof...(args) << std::endl;
   return []{};
}
template<class... Args2>
//by copy
  auto q1(Args2... args){
    return [args...]()->decltype(auto){
        return f(args...);
     };
  }
template<class... Args3>
//by move
  auto q2(Args3... args){
    return [tup=std::make_tuple(std::move(args)...)]()->decltype(auto){
       return std::apply([](auto const&... args)->decltype(auto){
        return f(args...);
     } , tup);
  };
}
template<class... Args4>
//pack expansion
  auto q3(Args4... args){
     return [...args=std::move(args)]()->decltype(auto) {

     return f(args...);

  };
 }
int main()
{
  
  
  q1(1,1);
  
  q2(1,1);
  
  q3(1,1);
  
}
