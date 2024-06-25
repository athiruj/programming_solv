list_n=[]
for i in range(9):
    list_n.append(int(input()))
sum = 0
for i in list_n:
    sum+=i
sum -=100
print(sum,"sum")
list_n_copy = list_n
if sum>0:
    for i in range(len(list_n)):
        if list_n[i] >sum:
            list_n_copy.pop(list_n_copy.index(i))
    for i in  list_n_copy:
        for j in list_n_copy:
            if i +j == sum:
                print(list_n_copy)
                print(i,j,"dont dwaft")
                break
for j in list_n_copy:
    print(j)