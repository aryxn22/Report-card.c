#include<stdio.h>

int english;
int maths;
int science;
int score;
int total;
float percentage;

int main()
{

    int maths=99;
    int english=99;
    int science=99;

    printf("Maths = %d\n",maths);
    printf("Science = %d\n",science);
    printf("English = %d\n",english);

    int score= maths+english+science;

    printf("total is %d out of 300\n",score);

    int total= 300;
    float percentage= (float)score / total *100;

    printf("The total percentage is %.2f%\n", percentage);

    {
        if ( percentage < 0 || percentage > 100){
            printf("Error");
        }

        else if( percentage < 32 && percentage > 0 ){
            printf("Grade = F\n");
            printf("Work harder\n");
        }

        else if( percentage < 50 && percentage > 32){
            printf("Grade = D\n");

        }

        else if( percentage < 70 && percentage > 50){
            printf("Grade = C\n");

        }

        else if( percentage < 90 && percentage > 70){
            printf("Grade = B\n");
        }

        else if( percentage < 98 && percentage > 90){
            printf("Grade = A\n");
        }

        else if( percentage < 100 && percentage > 98){
            printf("Grade = A+\n");
        }
        

        return (0);


    }


    


}