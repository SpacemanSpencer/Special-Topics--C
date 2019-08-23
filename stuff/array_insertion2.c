#include <stdio.h>

void insertGrade(int array[], int *numGrades, int insertPoint, int gradeToInsert);

int main(){
	int array[10] = {78, 82, 45, 92, 85}, numGrades, insertPoint, gradeToInsert, n = 5;

	//prints starting array
	for(numGrades = 0; numGrades < 5; numGrades++){
		printf("%d ", array[numGrades]);
	}

	printf("\nPosition to insert : ");
	scanf("%d", &insertPoint);
	printf("\nGrade to be inserted : ");
	scanf("%d", &gradeToInsert);

	insertGrade(&array[0], &numGrades, insertPoint, gradeToInsert);

	//prints final array
	for(numGrades = 0; numGrades < 5 + 1; numGrades++){
		printf("%d ", array[numGrades]);
	}

	printf("done\n");
}

void insertGrade(int array[], int *numGrades, int insertPoint, int gradeToInsert){
	for(*numGrades = 5; *numGrades > insertPoint - 1; (*numGrades)--){
		array[*numGrades] = array[*numGrades - 1];
	}

	array[insertPoint] = gradeToInsert;

}