#include <stdio.h>

int deleteGrade(int array[], int *numGrades, int deletionPoint);

int main(){
	int array[10] = {78, 82, 45, 92, 85}, numGrades, deletionPoint;

	//prints starting array
	for(numGrades = 0; numGrades < 5; numGrades++){
		printf("%d ", array[numGrades]);
	}

	printf("\nPosition to delete : ");
	scanf("%d", &deletionPoint);

	for(numGrades = 0; numGrades < 4; numGrades++){
		array[numGrades] = deleteGrade(&array[0], &numGrades, deletionPoint);
	}

	//prints final array
	for(numGrades = 0; numGrades < 4; numGrades++){
		printf("%d ", array[numGrades]);
	}
printf("\n%d ", array[0]);printf("%d ", array[1]);printf("%d ", array[2]);printf("%d ", array[3]);
	printf("done\n");
}

int deleteGrade(int array[], int *numGrades, int deletionPoint){
	for(*numGrades = deletionPoint; *numGrades < 4; numGrades++){
		array[*numGrades] = array[*numGrades + 1];
	}
	array[*numGrades] = 0;
	for(*numGrades = 0; *numGrades < 4; numGrades++){
		return array[*numGrades];
	}
}
