result_matrix = []
matrix = []
n = str(input()).split(" ")

for _ in range(int(n[0]) * 2):
    matrix.append(str(input()).split(" "))

for c in range(int(n[0])):
    row = []
    for r in range(int(n[1])):
        row.append(int(matrix[c][r]) + int(matrix[c+int(n[0])][r]))
    result_matrix.append(row)
for i in result_matrix:
    print(" ".join(map(str ,i)))
# print(n)
# print(matrix)
# print(result_matrix)