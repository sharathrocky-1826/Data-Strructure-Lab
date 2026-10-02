#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int i;
int stack[MAX];
int top = -1;

void push(int value) {
    if (top==MAX -1)
    {
        printf("Stack is full\n");

    }
    stack[++top] = value;
}

int pop() {
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    return stack[top--];
}



int display()
{

    if(top==-1)
    {
        printf("Stack is empty");
    }
    else{
        printf("elements from top to down\n");
            }
     for(i=top;i>=0;i--)
         {
             printf("%d\n",stack[i]);
         }
    return stack[i];

}

int main() {
    int ch;
    int num;
    while(1)
        {
                printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n\nENTER THE OPTION=");
            scanf("%d",&ch);


            switch(ch){

                case 1:{printf("YOU HAVE ENTERED THE 1.PUSH \nenter the number=");
                        scanf("%d",&num);
                        push(num);
                         break;}

                case 2:
                {
                    printf("YOU HAVE ENTERED THE 2.POP\nELEMENT IS POPED ");
                      pop();
                       break;
                }
                case 3:
                {
                    printf("YOU HAVE ENTERED THE 4.PRINT ENTIRE STACK \n");
                        display();
                        break;
                }
                case 4:
                   { printf("exit");
                   exit(0);
                    break;
                   }

                    default:{printf("Invalid option\n");
                break;}

            }

            }


    return 0;
}
