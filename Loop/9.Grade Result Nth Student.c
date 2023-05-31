#include<stdio.h>

int main()
{


    int inputt=0;
    int i=0;
    int studentNumber=0;

    printf("How many number of Students Grade you want: ");
    scanf("%d",&inputt);
    studentNumber=inputt;
    for(i=0; i<inputt; i++)
    {
        int attendance,assignments,classTests,midterm,finalterm ;
        int sum=0;
        int mt=0,tf=0;
        // if((attendance>0&& attendance<=5)&&(assignments>0&& assignments<=5)&&(classTests>0&& classTests<=15)&&(mt>0&& mt<=50)&& (tf>0&& tf<=100)){
        printf("Attendence \( 5 Marks\): ");
        scanf("%d",&attendance);
        printf("Assignments\( 10 Marks\): ");
        scanf("%d",&assignments);
        printf("ClassTests\( 15 Marks\): ");
        scanf("%d",&classTests);
        printf("Midterm\( 50 Marks\): ");
        scanf("%d",&mt);
        printf("Final\( 100 Marks\): ");
        scanf("%d",&tf);
//   }else {
//
//   printf("Please try Again");
//   }

        midterm=(mt*30)/50;
        finalterm=(tf*40)/100;


        sum=attendance+assignments+classTests+midterm+finalterm;

        if (sum >= 90 && sum <= 100)
        {
            printf("Student %d Grade:  A",studentNumber);
        }
        else if (sum >= 86 && sum <= 89)
        {
            printf("Student %d Grade:  A-",studentNumber);
        }
        else if (sum >= 82 && sum <= 85)
        {
            printf("Student %d Grade:  A",studentNumber);
        }
        else if (sum>= 78 && sum <= 81)
        {
            printf("Student %d Grade:  B+",studentNumber);
        }
        else if (sum >= 74 && sum<=71)
        {
            printf("Student %d Grade:  B",studentNumber);
        }

        else if (sum >= 70 && sum <= 73)
        {
            printf("Student %d Grade:  C+",studentNumber);
        }
        else if (sum >= 66 && sum <= 69)
        {
            printf("Student %d Grade:  C",studentNumber);
        }
        else if (sum >= 62 && sum <= 65)
        {
            printf("Student %d Grade:  C-",studentNumber);
        }
        else if (sum >= 58 && sum <= 61)
        {
            printf("Student %d Grade:  D+",studentNumber);
        }
        else if (sum>= 55 && sum <= 57)
        {
            printf("Student %d Grade:  D",studentNumber);
        }
        else if (sum >= 0 && sum < 55||sum<0)
        {
            printf("Student %d Grade:  F",studentNumber);
        }


        studentNumber++;

        printf("\n\n");



    }
}







