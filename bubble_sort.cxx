#include "allFunDefination.hxx"

int bubbleSort(int* f_array, const int& f_size)
{
	for (int index = 0; index < f_size; index++)
	{
		for (int iteration = 0; iteration < f_size - 1; iteration++)
		{
			if (f_array[iteration] > f_array[iteration + 1])
			{
				int temp = f_array[iteration + 1];
				f_array[iteration + 1] = f_array[iteration];
				f_array[iteration] = temp;
			}
			else
			{
				//nothing
			}
		}
	}
	return 0;
}