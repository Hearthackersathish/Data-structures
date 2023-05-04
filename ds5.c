#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    float mark, sum=0, avg;
    printf("Enter Marks obtained in 5 Subjects: ");
    for(i=0; i<5; i++)
    {
        scanf("%f", &mark);
        sum = sum+mark;
    }
    avg = sum/5;
    printf("\nGrade = ");
    if(avg>=91 && avg<=100)
        printf("S");
    else if(avg>=81 && avg<91)
        printf("A");
    else if(avg>=71 && avg<81)
        printf("B");
    else if(avg>=61 && avg<71)
        printf("C");
    else if(avg>=51 && avg<61)
        printf("D");
    
    else
        printf("FAIL");
    getch();
    return 0;
}
