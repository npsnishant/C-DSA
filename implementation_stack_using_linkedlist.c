#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *top;



void push ()
{
    int val;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("DO not push into the stack\n");
    }
    else
    {
        printf("Enter the value\n");
        scanf("%d",&val);
        newnode->data = val;
        newnode->next = top;
        top=newnode;
    }
}

void pop()
{
    int x;
    struct node *temp;
    if (top == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        temp = top;
        x = temp->data;
        top = top->next;
        free(temp);
        printf("Item is popped\n");

    }
}
void display()
{
    int i;
    struct node *temp;
    temp=top;
    if(temp == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
}

int main ()
{
    int x=0;
    while(x!=4)
    {
        printf("Enter \n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.CLEAR\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("clear\n");
                break;
            }
            default:
            {
                printf("Wrong choice\n");
            }
    };
}
return 0;
}

