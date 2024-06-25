#include <stdio.h>

int ft_sum(int *arr)
{
	int	index;
	int	result;

	index = 0;
	result = 0;
	while (arr[index])
		result += arr[index++];
	return (result);
}

int *ft_get_int(int *arr)
{
	int	index;

	index = 0;
	while (arr[index])
		scanf("%d", &arr[index++]);
	return (arr);
}

// i.e.
// 7	7
// 8	8
// 10	10
// 13	13
// 15	19
// 19	20
// 20	23
// 23
// 25

int main(void)
{
	int remider;

	// set stop point in array
	int arr[10];
	arr[9] = 0;

	short index;

	index = 0;
	// set index loop
	short outside;
	short inside;

	outside = 0;
	inside = 0;

	// get input
	ft_get_int(arr);

	remider = ft_sum(arr) - 100;

	while (arr[outside] && arr[outside] + arr[inside] != remider)
	{
		while (arr[inside])
		{
			if (arr[outside] + arr[inside] == remider && outside != inside)
				break;
			else
				inside++;
		}
		if (arr[outside] + arr[inside] == remider)
				break;
		inside = 0;
		outside++;
	}

	while (arr[index])
	{
		if (index != outside && index != inside)
			printf("%d\n", arr[index++]);
		else
			index++;
	}
	
}

