

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *ptr;
}sll;

int main()
{
    sll *head=NULL,*temp;
    sll *new[5];

    for(int i=0;i<5;i++)
    {
        if(head==NULL)
        {
            new[i]=(sll *)malloc(sizeof(sll));
            printf("Enter the data:");
            scanf("%d",&new[i]->data);
            head = new[i];
            temp = new[i];
            new[i]->ptr=NULL;
        }
        else
        { 
            new[i]=(sll *)malloc(sizeof(sll));
            printf("Enter the data:");
            scanf("%d",&new[i]->data);
            temp->ptr=new[i];
            temp = new[i];
            new[i]->ptr = NULL;
        }
    }
    temp = head;
    int i=0;
    printf("The elements of the link:\n");
	while(temp != NULL)
	{
		printf("%d ",new[i]->data);
		temp = temp->ptr;
		i++;
	}
	printf("\n");
}