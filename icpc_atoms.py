n = str(input()).split(" ")
num_atom = [int(x) for x in input().split()]
num_atom_og = num_atom
sum_max = 0
for _ in range(int(n[1])):
    num_new = [int(x) for x in input().split()]
    num_atom_og[num_new[0]-1] =num_new[0]
    for i in range(len(num_atom_og)):
        num_atom = num_atom_og.copy()
        num_atom[i] = num_atom[i]*-1
        sum = num_atom[i]
        k = 1
        for j in range(i+1,len(num_atom_og)):
            k+=1
            if k%2 != 0 :
                num_atom[j] = (-1)*int(num_atom[j])
            sum+=int(num_atom[j])
            if sum >sum_max:
                sum_max = sum
    print(sum_max)