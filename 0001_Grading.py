a = int(input())
b = int(input())
c = int(input())
r = a + b + c

if (r > 79):
    print("A")
elif (r > 74):
    print("B+")
elif (r > 69):
    print("B")
elif (r > 64):
    print("C+")
elif (r > 59):
    print("C")
elif (r > 54):
    print("D+")
elif (r > 49):
    print("D")
else:
    print("F")