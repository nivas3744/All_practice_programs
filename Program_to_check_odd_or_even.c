#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number==0)
    {
        printf("%d is Neither odd Nor even",number);
    }
    else if(number>0)
    {
        if(number%2==0)
        {
            printf("%d is a Positive Even Number",number);
        }

        else
        {
            printf("%d is a Positive Odd Number",number);

        }
    }

    else
    {
        if(number%2==0)
        {
           printf("%d is a Negative Even Number",number); 
        }

        else
        {
             printf("%d is a Negative Odd Number",number);
        }
 
    }

    return 0;
}