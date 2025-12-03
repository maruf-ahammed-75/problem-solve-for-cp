n=100
fact = 1
for i in range(1,n+1,1):
    fact = fact * i
print(fact)

fact2 = 1
for i in range(1,26,1):
    fact2 = fact2 * i
print(fact2)

fact3 = 1
for i in range(1,76,1):
    fact3 = fact3 * i
print(fact3)

print(((fact)//(fact2*fact3))%5)