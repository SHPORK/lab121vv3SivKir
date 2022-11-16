#include "stdlib.h"
#include "time.h"
#include "malloc.h"
#include <stdio.h>
#include "string.h"
#pragma warning(disable : 4996)
struct {

	char Name[10];
	char Surname[10];
	char faculty[10];
	int id;


}stud[3], search;


int main()
{

	for (int i = 0; i < 3; i++) {

		printf("Enter student's name:");
		scanf("%s", stud[i].Name);
		printf("Enter student's surname:");
		scanf("%s", stud[i].Surname);
		printf("Enter student's faculty:");
		scanf("%s", stud[i].faculty);
		stud[i].id = i;
	}

	printf("Enter what you need to find:");
	scanf("%s", search.Name);


	short found = 0;
	for (int i = 0; i < 3; i++) {
		if (strcmp(stud[i].Name, search.Name) == 0 || strcmp(stud[i].Surname, search.Name) == 0 || strcmp(stud[i].faculty, search.Name) == 0) {

			found = 1;
			printf("Found! This person's id: %d\n", stud[i].id);
		}


	}
	if (found == 0) {

		printf("No matches.");
	}
	getchar();
	getchar();
	return 0;
}
