#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
		int data;
		struct node *link;
}queeue;

void enqueue(int data, queeue **front_arg, queeue **rear_arg)
{
		queeue *new = malloc(sizeof(queeue));
		if(new == NULL)
		{
				printf("Memory is not allocated\n");
		}
		else
		{
				new->data = data;
		        new->link = NULL;
				if(*front_arg == NULL && *rear_arg == NULL)
				{
						*front_arg = new;
						*rear_arg = new;
				}
				else
				{
						(*rear_arg)->link = new;
						*rear_arg = new;
				}
				printf("Enqueeued element is %d\n", (*rear_arg)->data);
		}
}

void dequeue(queeue **front)
{
		if(*front == NULL)
		{
				printf("QUEEUE IS EMPTY\n");
		}
		else
		{
				queeue *temp = *front;
		        *front = temp->link;
		        printf("Dequeed element is %d\n", temp->data);
				free(temp);
		}
}

void display(queeue **front)
{
		if(*front == NULL)
		{
				printf("QUEEUE IS EMPTY\n");
		}
		else
		{
				printf("Queeue is : ");
				queeue *temp = *front;
				while(temp != NULL)
				{
					printf("%d ", temp->data);
					temp = temp->link;
				}
		}
		printf("\n");
}

int main()
{
		queeue *rear = NULL, *front = NULL;
		enqueue(10, &front, &rear);
		enqueue(20, &front, &rear);
		enqueue(30, &front, &rear);
		display(&front);
		dequeue(&front);
		dequeue(&front);
		dequeue(&front);
		display(&front);
}
