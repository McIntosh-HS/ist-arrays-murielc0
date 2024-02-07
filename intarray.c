#include <stdio.h>

int main()
{
	int arr[5];  // This creates an empy array with 5 elements
    printf("Enter the first number: ");
    scanf("%i", &arr[0]);
    printf("Enter second number: ");
    scanf("%i", &arr[1]);
    printf("Enter the third number: ");
    scanf("%i", &arr[2]);
    printf("Enter the fourth number: ");
    scanf("%i", &arr[3]);
    printf("Enter the fifth number: ");
    scanf("%i", &arr[4]);
    
	printf("%i %i %i %i %i\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	printf("%i %i %i %i %i\n", arr[0] + 1, arr[1] + 1, arr[2] + 1, arr[3] + 1, arr[4] + 1);
	// write a new printf statement that adds 1 to each array element
	// Hint: use the . command to repeat an insert of + 1 after each array element

	return 0;
}
