// 18-December,2017;

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

 struct tree{
    int N;
    struct tree *next;
 };
 typedef struct tree Tree;

 int print(Tree *head)
 {
     printf("\n\n Element of your List :\n\n");
     while(head!=NULL)
     {
         printf("  %d ->",head->N);
         head=head->next;
     }
     printf("NULL\n\n");
     return 0;
 }

 int main()
{
    Tree *head=NULL,*temp,*curr;
    int choice=1;
    while(choice)
        {
            curr=(Tree*) malloc(sizeof(Tree));
            printf("Enter a value of list\n");
            scanf("%d",&curr->N);
            curr->next=NULL;
            if(head!=NULL)
            {
                temp->next=curr;
                temp=curr;
            }
            else
            {
               head=temp=curr;
            }
            printf("Do you want to enter again[0/1]\n");
            scanf("%d",&choice);
        }

        print(head);

        return 0;
}
