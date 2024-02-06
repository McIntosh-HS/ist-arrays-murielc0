#include <stdio.h>

int main()
{
	// You can create an array and set all values using curly braces
	// The c compiler will automatically determine how large the array is by the number of elements in the braces
	int arr[] = {3, 6, 9, 12, 14};


	printf("%i %i %i %i %i\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	// write a new printf statement that finds the remainder of each element when divided by 3
	// Hint: use the . command to repeat an insert of % 3 after each array element

	return 0;
}
