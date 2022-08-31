#include <stdio.h>
int getMaxRepeatingElement(int array[], int n)
{
  int i, j, maxElement, count;
  int maxCount = 0;
  for (i = 0; i < n; i++) // For loop to hold each element
  {
    count = 1;
    for (j = i + 1; j < n; j++) // For loop to check for duplicate elements
    {
      if (array[j] == array[i])
      {
        count++;

        if (count > maxCount)
        {
          maxElement = array[j];
          maxCount=count;
        }
      }
    }
  }
  return maxElement;
}
// Driver Program
int main()
{
  int n; // Array Size Declaration
  printf("Enter the number of elements ");
  scanf("%d", &n);
  int array[n]; // Array Declaration
  printf("Enter the array elements");
  for (int i = 0; i < n; i++) // Initializing Array Elements
  {
    scanf("%d", &array[i]);
  }
  int maxElement = getMaxRepeatingElement(array, n);       // Function call
  printf("\n Maximum Repeating Element : %d", maxElement); // Prints the most occuring element
  return 0;
}