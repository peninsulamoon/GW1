def f(x):                    
  return lambda y: y + x  

print("f(2)(3) =",f(2)(3))


g = lambda x: lambda y: x+y
print("g(2)(3) =",g(2)(3))

h = lambda x,y : x+y
print("h(2,3) =",h(2,3))

j = lambda x=1: x
print("j(3) =",j(3))

print("[1,2]+[3,4] =",list(map(lambda x,y: x+y, [1,2],[3,4])))
