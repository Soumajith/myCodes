#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
};

int main() {
    int i,n;
    printf("Enter the number of the students: ");
    scanf("%d",&n);
    struct student s[n];
    printf("Enter information of students:\n");
    // storing information
    for (i = 0; i < n; ++i) {
        s[i].roll = i + 1;
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter the roll number: ");
        scanf("%d",&s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < n; ++i) {
        if(s[i].marks > 40){
        printf("First name: ");
        puts(s[i].firstName);
        printf("Roll no.: %d\n",s[i].roll);
        printf("Marks: %f", s[i].marks);
        printf("\n");
        }
    }
    
}
