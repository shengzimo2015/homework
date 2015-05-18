#include "stdio.h"
#include <stdlib.h>
#include<string.h>

typedef struct Node
{   int data;
	struct Node*next;
}node;

node*creat_list(node*head,int num)
{  node*p,*q;
  p=(node*)malloc(sizeof(node));
  p->data=0;
  p->next=NULL;
  head=p;
  while(num>0)
  {   q=(node*)malloc(sizeof(node));
  	  printf("please read the value of the node:");
  	  scanf("%d",&q->data);
  	  p->next=q;
  	  q->next=NULL;
  	  p=q;
  	  num--;
  }
  return head;
}
void print_list(node*head)
{    node*p;
     p=head;
	 p=p->next;
	 while(p!=NULL)
	{    printf("%d\t",p->data);
		 p=p->next;
	}
	 printf("\n");

}

node*add_list(node*head,int n)
{   node*p,*q;

	if(head==NULL)
	{
	   return NULL;
	}
	p=head;
	while(p->next!=NULL)
	{    p=p->next;
	}

	while(n>0)
	{   q=(node*)malloc(sizeof(node));
		printf("please read the value of the node:");
		scanf("%d",&q->data);
		p->next=q;
		q->next=NULL;
		p=q;
		n--;
	}
	 return head;
}

int delete_list(node*head,int i)
{
	 node*p,*q;
	 int a;
	 p=head;
	 a=i-1;
	while(a>0)
	{  p=p->next;
	   a--;}
 	 q=p->next;
     p->next=q->next;
	  free(q);
     if(length(head)==0)
	 {
	  free(head);
	  return 2;
	 }
	  return 1;

}


int length(node*head)
{   node *p;
	int n=0;
	if(head==NULL)
	return 0;

	p=head;
	while(p->next!=NULL)
	{   p=p->next;
		n++;}
	return n;
}


void main()
{   int t,k,m,f,a,e,s,g,h,n,q;
	node *head=NULL;

	printf("------------order----------\n");
	printf("------------1 create---------\n");
	printf("------------2 add------------\n");
	printf("------------3 delete---------\n");
	printf("------------4 length---------\n");
	printf("------------5 show-----------\n");
	printf("------------0 exit-----------\n");
	lable:
	 t=0;
    scanf("%d",&t);
    switch(t)
	{     case 1:  printf("please read the length of the list:\n");
		           scanf("%d",&k);
		           head=creat_list(head,k);

		           break;
		  case 2:  printf("please read the number of the nodes:\n");
		           scanf("%d",&m);
		           head=add_list(head,m);
                   printf("OK!\n");
		          break;

		  case 3:  printf("please read the position of the node you want to delete\n");
		           scanf("%d",&f);
                   s=delete_list(head,f);
		           if(s==2)
				  {    head=NULL;
					   printf("OK!\n");
		               break;
				  }
				  else
					   printf("OK!\n");
		               break;



        case 4:     printf("the length is:%d \n",length(head));
                    break;
		case 5:     print_list(head);break;

		case 0:      exit(0);
		default: 1;
        }
        printf("continue please");
	    goto lable;

		}



