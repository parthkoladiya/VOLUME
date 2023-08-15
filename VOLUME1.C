#include <stdio.h>
#include <conio.h>
#include <string.h>

union Marks {
    struct {
	int chem_marks;
	int maths_marks;
	int phy_marks;
    } subjects;

    int marks[3];
};

struct Student {
    int roll_no;
    char name[100];
    union Marks marks;
};

void main() {
    struct Student students[5];
     int i;
     clrscr();
    for ( i = 0; i < 5; i++)
    {
	printf("Enter details for student %d:\n", i + 1);
	printf("Roll No: ");
	scanf("%d", &students[i].roll_no);
	printf("Name: \n",students[i].name);

	fgets(students[i].name, sizeof(students[i].name), stdin);
	students[i].name[strcspn(students[i].name, "\n")] = '\0';
	printf("Chemistry Marks: ");
	scanf("%d", &students[i].marks.subjects.chem_marks);
	printf("Mathematics Marks: ");
	scanf("%d", &students[i].marks.subjects.maths_marks);
	printf("Physics Marks: ");
	scanf("%d", &students[i].marks.subjects.phy_marks);
    }

    printf("\nStudent Details and Percentages:\n");
    for ( i = 0; i < 5; ++i)
    {
	float total_marks = students[i].marks.subjects.chem_marks + students[i].marks.subjects.maths_marks + students[i].marks.subjects.phy_marks;
	float percentage = (total_marks / 300) * 100;

	printf("Roll No: %d\n", students[i].roll_no);
	printf("Name: %s\n", students[i].name);
	printf("Chemistry Marks: %d\n", students[i].marks.subjects.chem_marks);
	printf("Mathematics Marks: %d\n", students[i].marks.subjects.maths_marks);
	printf("Physics Marks: %d\n", students[i].marks.subjects.phy_marks);
	printf("Percentage: %.2f%%\n\n", percentage);
    }

    getch();
}
