arr = []
n = int(input()) + 1

while (n := n - 1):
    arr.append(int(input()))

result = 0
re = 0
p1 = 0
p2 = 0

while (len(arr) > 1):
    for ii in range(len(arr) - 1):
        if (abs(arr[ii] - arr[ii + 1]) > re):
            p1 = ii
            p2 = ii + 1
            re = abs(arr[ii] - arr[ii + 1])
        elif (arr[ii] - arr[ii + 1] > re and arr[ii] < arr[p1]):
            p1 = ii
            p2 = ii + 1
    result += abs(arr[p1] - arr[p2])
    re = 0
    arr.pop(p1)
    arr.pop(p1)
                
print(result)