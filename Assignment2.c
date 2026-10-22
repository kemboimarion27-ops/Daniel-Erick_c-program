#include <stdio.h>
int main(){
    int number_of_students;
    double student_scores;
    double total =0.0;
    

    printf("Enter number of students: ");
    scanf("%d", &number_of_students);
    
    for(int student = 1;
        student<=number_of_students;
        student+=1){
            printf("Enter score for student %d:", student);
        scanf("%lf", &student_scores);
        total += student_scores;       
    }

    double average = total / number_of_students;

    printf("\n Average score is: %.2lf\n", average);
}
