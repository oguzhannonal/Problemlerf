 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 #define SIZE 10
void printArray(int array[], int low, int high);
int main(void){
	int array[SIZE];
	int loop;
	srand(time(NULL));
	for ( loop = 0; loop < SIZE; loop++)
	{
		array[loop] = 1 + rand() % 500;

	}
	printArray(array, SIZE-1, 0);
	printf("\n");


	system("PAUSE");
	return 0;
}
void printArray(int array[], int high, int low)
 {
	 
		 printf("%d ", array[high]);
	
		 
		 if (low == high) {
		 return;
		
	} 
	 else { 
		 printArray(array, high-1, low);} 
	
} 
