// 4. Write a program to accept marks for three subjects. Calculate the average and also display
// the class obtained. (Distinction – above 	Class I – above  %, class II –
// % to 	%, pass class – 	% to 	% and fail otherwise)

#include <stdio.h>
int main() {
    float marks1, marks2, marks3, average;
    printf("Enter marks for three subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);
    average = (marks1 + marks2 + marks3) / 3;

    if(average > 90) {
        printf("Average marks: %.2f\nClass obtained: Distinction\n", average);
    } else if(average > 80) {
        printf("Average marks: %.2f\nClass obtained: Class I\n", average);
    } else if(average > 70) {
        printf("Average marks: %.2f\nClass obtained: Class II\n", average);
    } else if(average > 60) {
        printf("Average marks: %.2f\nClass obtained: Pass Class\n", average);
    } else {
        printf("Average marks: %.2f\nClass obtained: Fail\n", average);
    }


    return 0;
}