#include<stdio.h>
#include<stdlib.h>

#define LIST_SIZE 5

struct node
{
		int data;
		struct node *link;
		struct node *head;
};

void print_list(struct node *ptr )
{
		while(ptr != NULL)
		{
				printf("%d ", ptr->data);
				ptr = ptr->link;
		}
		printf("\n");
}

void swap(struct node *ptr1, struct node *ptr2)
{
		int temp = ptr1->data;
		ptr1->data = ptr2->data;
		ptr2->data = temp;
}

void bubble_sort(struct node *head)
{
		struct node *ptr1 = NULL;
		struct node *ptr2 = NULL;
		int s_num;

		do
		{
				s_num = 0;
				ptr1 = head;

				while (ptr1->link != ptr2)
				{
						if (ptr1->data < ptr1->link->data)
						{ 
								swap(ptr1, ptr1->link);
								s_num = 1;
						}
						ptr1 = ptr1->link;
				}
				ptr2 = ptr1;
		}
		while (s_num);
}

int main()
{
		struct node *head = NULL;
		int arr[5] = {7, 8, 3, 1, 9};
		for(int i=0; i<LIST_SIZE; i++) 
		{
				struct node *ptr = NULL;
				ptr = malloc(sizeof(struct node));
				ptr->data = arr[i];
				ptr->link = head;
				head = ptr;
		}
		printf("Linked list before bubble sorting : ");
		print_list(head);
		bubble_sort(head);
		printf("Linked list after bubble sorting : ");
		print_list(head);
}

