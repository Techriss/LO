import math

# string
print("hello, world")

# int
x = 2137
print(x)


# for
for i in range(9, 1000):
    print(math.sin(math.log2(i)))

# operations
a = 1
b = 2.25634563456345634563456

print(a + b)
print(a - b)
print(a * b)
print(a / b)
print(a % b)


# The Pythagorean formula for sines and cosines.
print("x: ")
y = math.sin(math.radians(45))*math.sin(math.radians(45)) + math.cos(math.radians(45)) * math.cos(math.radians(45))
print(y)

# type of variable
s = str(a)
print(type(s))