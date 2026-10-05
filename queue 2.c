#include <stdio.h>
#include <stdlib.h>

#define size 5

int queue[size];
int front = -1, rear = -1;

int isEmpty()
{
    return (front == -1 || front > rear);
}

int is_Full()
{
    return (rear == size - 1);
}

void enqueue(int data)
{
    if (is_Full())
    {
        printf("\nQueue is Full\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
    }

    rear++;
    queue[rear] = data;

    printf("\nInserted element is = %d\n", data);
}

int dequeue()
{
    if (isEmpty())
    {
        printf("\nQueue is Empty\n");
        return -1;
    }

    int removed = queue[front];

    front++;

    if (front > rear)
    {
        front = -1;
        rear = -1;
    }

    return removed;
}

void display()
{
    if (isEmpty())
    {
        printf("\nQueue is Empty\n");
        return;
    }

    printf("\nQueue: ");

    for (int i = front; i <= rear; i++)
    {
        printf("| %d ", queue[i]);
    }

    printf("|\n");
}

int main()
{
    int ch, element, removed;

    while (1)
    {
        printf("\n1. ENQUEUE");
        printf("\n2. DEQUEUE");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");
        printf("\nENTER THE CHOICE = ");

        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("\nENTER THE ELEMENT = ");
                scanf("%d", &element);
                enqueue(element);
                break;

            case 2:
                removed = dequeue();

                if (removed != -1)
                {
                    printf("Removed element = %d\n", removed);
                }
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exit\n");
                exit(0);

            default:
                printf("Invalid input!\n");
        }
    }

    return 0;
}
