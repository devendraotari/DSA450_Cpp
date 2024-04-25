#include "allFunDefination.hxx"


//possible solutions are
//1. using std::stack
//2. using std::reverse
int reverse_c_array(int* f_array, const int f_size)
{
	int errCode = 0;
	int index = 0;
	while (index < (f_size/2))
	{
		int tempData = f_array[index];
		f_array[index] = f_array[ (f_size - 1) - index];
		f_array[(f_size - 1) - index] = tempData;
		index++;
	}
	return errCode;
}