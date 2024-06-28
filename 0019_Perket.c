#include <stdio.h>
#include <stdlib.h>

int i = -1;
int is = 1;
int ib = 0;
int size = 0;
int **arr;
int result = 1000000000;

int get_s_b(int **array, int size);
int ft_abs(int nb);
int ft_perket(int i, int s,int b);

int main ()
{
	scanf("%d", &size);

	arr = (int **)malloc(sizeof(int *) * 3);
	arr[2] = 0;

	arr[0] = (int *)malloc(sizeof(int) * (size + 1));
	arr[1] = (int *)malloc(sizeof(int) * (size + 1));

	get_s_b(arr, size);

	if(size != 1)
		ft_perket(i, is, ib);
	else
		result = ft_abs(arr[0][0] - arr[1][0]);

	printf("%d\n", result);
	free(arr);
}

int get_s_b(int **array, int size)
{
	array[0][size] = 0;
	array[1][size] = 0;
	int i = 0;
	
	while (i < size)
	{
		scanf("%d %d", &array[0][i], &array[1][i]);
		i++;
	}

	return (0);
}

int ft_abs(int nb)
{
	return (nb < 0 ? nb *= -1 : nb);
}

int ft_perket(int i, int s,int b)
{
	if (ft_abs(s - b) < result && s != 1 && b != 0)
		result = ft_abs(s - b);
	if (i == size - 1)
		return (result);

	ft_perket(i + 1, s, b);
	ft_perket(i + 1, s * arr[0][i + 1], b + arr[1][i + 1]);
	return(0);
}