/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

float calculateMean(int scores[], int n);
int findHighest(int scores[], int n);
int findLowest(int scores[], int n);

int main()
{
	int n;

	printf("Enter the number of students: ");    // 1. Ask user for number of students
	scanf("%d", &n);

	if (n <= 0)
	{
		printf("Invalid number of students.\n");
		return 1;
	}

	int scores[n];  // 2. Create an array to store scores


	printf("Enter %d student scores (integer values):\n", n);   // 3. Input scores
	for (int i = 0; i < n; i++)
	{
		printf("Score %d: ", i + 1);
		scanf("%d", &scores[i]);
	}

	float mean = calculateMean(scores, n);     // 4. Analysis using functions
	int highest = findHighest(scores, n);
	int lowest = findLowest(scores, n);


	printf("\n---- Class Report ----\n");     // 5. Output summary report
	printf("Class Average: %.2f\n", mean);
	printf("Highest Score: %d\n", highest);
	printf("Lowest Score: %d\n", lowest);

	return 0;
}


float calculateMean(int scores[], int n)   // Function to calculate mean (average)
{
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += scores[i];
	}
	return (float)sum / n;
}

int findHighest(int scores[], int n) // Function to find highest score
{
	int max = scores[0];
	for (int i = 1; i < n; i++) {
		if (scores[i] > max) {
			max = scores[i];
		}
	}
	return max;
}


int findLowest(int scores[], int n) // Function to find lowest score
{
	int min = scores[0];
	for (int i = 1; i < n; i++) {
		if (scores[i] < min) {
			min = scores[i];
		}
	}
	return min;
}
