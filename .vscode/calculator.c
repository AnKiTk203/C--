#include <stdio.h>
int main()
    {
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        int a;
        float n1,n2;
        printf("Enter Your Choice :\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
            {
                printf("Enter Two nos :\n");
                scanf("%f%f",&n1,&n2);
                printf("Sum is %f", n1+n2);
                break;
            }
            case 2:
            {
                printf("Enter Two nos :\n");
                scanf("%f%f",&n1,&n2);
                printf("Difference is %f", n1-n2);
                break;
            }
            case 3:
            {
                printf("Enter Two nos :\n");
                scanf("%f%f",&n1,&n2);
                printf("Product is %f", n1*n2);
                break;
            }
            case 4:
            {
                
                printf("Enter Two nos :\n");
                scanf("%f%f",&n1,&n2);
                printf("Division is %f", n1/n2);
                break;
            }
            default:
            printf("Bad Choice");
            break;
        }
            return 0;
    }

        














    