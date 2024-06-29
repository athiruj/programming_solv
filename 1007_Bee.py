# Q =>  W++     =>  Q
# S =>  W++     =>  S--
# W =>  W++ S++ =>  w--

#				Queen   Soldier   	Worker			total
#	[0]	mature    1			0			1				2
#	[1]	mature    1			1  (1W)		2  (Q W)		4	
#	[2]	mature    1			2  (2W)		4  (Q S2 W)		7
#	[3]	mature    1			4  (4W)		7  (Q 2S 4W)	12
#	[4]	mature    1			7  (7W)		12 (Q 4S 7W)	20
#	[5]	mature    1			12 (12W)	20 (Q 7S 12W)	33
#	[n]	mature    1			W  (n - 1)	total (n - 1)	Q + W (n - 1) + total (n - 1)

# Year						[0]	 [1]   [2]	 [3]   [4]   [5]   [6]	 [7]   [8]		[n]
# Queen						  1	   1	 1	   1	 1	   1	 1	   1	 1		  1	
# Soldier					  0	   1	 2	   4	 7	  12	20	  33    51			
# fibonacci sequence[n+1]	 +1   +1	+2	  +3    +5	  +8   +13   +21   +34
# Woker						  1	   2	 4	   7	12	  20	33    54	88
# fibonacci sequence[n+2]	 +1	  +2	+3	  +5	+8	 +13   +21	 +34   +55

def fibo(i):
	if (i <= 1):
		return (i)
	return (fibo(i - 1) + fibo(i - 2))  

arr = input().split(" ")
i = 0
while (i < len(arr) and int(arr[i]) != -1):
	queen = 1
	soldier = 0
	woker = 1
	total = 0
	for j in range(int(arr[i])):
		woker += fibo(j+2)
		soldier += fibo(j+1)
		total = queen + woker + soldier
	i += 1
	print(f"{woker} {total}")