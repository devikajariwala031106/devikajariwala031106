#include<stdio.h>

int main()
{
    float percentage;

    printf("Enter the percentage : ");
    scanf("%f",&percentage);

    if(percentage>=90)
    {
        printf("Grade A");
    }else if(percentage>=80)
        {
            printf("Grade B\n");
        }else if(percentage>=70)
            {
                printf("Grade C\n");
            }else if(percentage>=60)
                {
                    printf("Grade D\n");
                }else if(percentage>=40)
                    {
                        printf("Grade \n");
                    }else
                        {
                            printf("Grade Failed\n");
                        }
        
        return 0;
}
