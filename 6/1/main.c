//the 6
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char student_name[20];
    char student_family_name[20];
    int student_number;
    float midterm_grade ;
    float final_grade ;
    float homework_grade ;
} information ;
int main (void)
{
    information student1={"davood","rezaei",123454,17,18,20} , *student2;
    student2=(information *)malloc(sizeof(information));
    printf("enter the student name and family name : \n");
    scanf("%s%s",student2->student_name,student2->student_family_name);
    printf("enter the student number : \n");
    scanf("%d",&student2->student_number);
    printf("enter the midterm grade and the final grade and the  homework grade : \n");
    scanf("%f%f%f",&student2->midterm_grade,&student2->final_grade,&student2->homework_grade);
    printf("name = %s / family name = %s / student number = %d / midterm grade = %f / final grade = %f / homework grade = %f \n"
    ,student1.student_name,student1.student_family_name,student1.student_number,student1.midterm_grade,student1.final_grade,student1.homework_grade);
    printf("name = %s / family name = %s / student number = %d / midterm grade = %f / final grade = %f / homework grade = %f \n"
    ,student2->student_name,student2->student_family_name,student2->student_number,student2->midterm_grade,student2->final_grade,student2->homework_grade);
    return 0;
}




