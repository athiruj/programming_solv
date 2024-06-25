val = []
n = int(input())

while (n):
    val.append(int(input()))
    n -= 1

val.sort()
print(val[0])
print(val[-1])