#include <stdio.h>

int main() {
    int m;
    char g='N';
    int grade;
    printf("Enter the student's marks: ");
    scanf("%d",&m);
    if (m>= 90) 
	{
        grade = 1;
    } 
	else if (m>= 80) 
	{
        grade = 2; 
    } 
	else if (m>= 70) 
	{
        grade = 3; 
    } 
	else if (m>= 60) 
	{
        grade = 4;
    } 
	else 
	{
        grade = 5;
    }

    switch (grade)
	{
        case 1:
            g = 'A';
            break;
        case 2:
            g = 'B';
            break;
        case 3:
            g = 'C';
            break;
        case 4:
            g = 'D';
            break;
        case 5:
            g = 'F';
            break;
    }
    printf("The grade is: %c",g);

    return 0;
}
