#include "allFunDefination.hxx"


//possible solutions are
//1. using std::stack
//2. using std::reverse
int sum_of_min_max(int* f_array, const int f_size)
{
	int errCode = 0;
	int index = 0;
	int maxItem = f_array[0];
	int minItem = f_array[0];
	for (int index = 1; index < ( f_size ) ; index++)
	{
		if (f_array[index] > maxItem)
		{
			maxItem = f_array[index];
		}
		if (f_array[index] < minItem)
		{
			minItem = f_array[index];
		}
	}
	return maxItem + minItem;
}