stackarr

#include<stdio.h>
 #include<stdlib.h>
 int a[100];
 int i=-1;
 int b=-1;
 void push();
 void pop();
 void display();
 int main()
 {
 int ch;
 while(1)
 {
 }
 }
 void push()
 {
 b++;
 printf("\n\n 1.push \n2.pop\n3.display");
 printf("\nenter your choice : ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 push();
 break;
 }
 case 2:
 case 3:
 pop();
 break;
 display();
 break;
 default:
 exit(0);
 printf("Enter a number : ");
 scanf("%d",&a[b]);
}
 void pop()
 {
 if(b==-1)
 {
 }
 else{
 }
 void display()
 {
 int k=0;
 printf("deletion not possible");
 a[b]=0;
 b--;
 }
 while(k<=b &&k>=0)
 {
 printf(" %d ",a[k]);
 k++;
 }
 }

 stackarr


queuearr

#include<stdio.h>
 #include<stdlib.h>
 int a[100];
 int f=0;
 int b=-1;
 void push();
 void pop();
 void display();
 int main()
 {
 int ch;
 while(1)
 {
 }
 }
 void push()
 {
 b++;
 printf("\n\n 1.push \n2.pop\n3.display");
 printf("\nenter your choice : ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 push();
 break;
 }
 case 2:
 case 3:
 pop();
 break;
 display();
 break;
 default:
 exit(0);
 printf("Enter a number : ");
 scanf("%d",&a[b]);
}
 void pop()
 {
 if(f>b)
 {
 }
 else{
 }
 void display()
 {
 if(f>b)
 {
 }
 printf("deletion not possible");
 a[f]=0;
 f++;
 }
 printf("Queue is empty ");
 for(int i=f;i<=b;i++)
 {
 printf(" %d ",a[i]);

 querearr

 ll

#include<stdio.h>
 #include<stdlib.h>
 struct linkedlist
 {
 int num;
 struct linkedlist*next;
 };
 typedef struct linkedlist node;
 node*start=NULL;
 node*end=NULL;
 void create();
 void insert();
 void delete();
 void display();
 void insertbeg();
 void insertend();
 void deletebeg();
 void deleteend();
 int main()
 {
 int ch;
 while(1)
 {
 printf("\n\n1.Insertion\n2.Deletion\n3.Display\n");
 printf("Enter your choice : ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 printf("\n\n....Insertion....\n");
 insert();
 break;
 case 2:
printf("\n\n....Deletion....\n");
 delete();
 break;
 case 3:
 printf("\n\n....Display....\n");
 display();
 break;
 default:
 exit(0);
 }
 }
 }
 void insert()
 {
 if(start==NULL)
 {
 }
 else
 {
 printf("\n....List is empty....\n");
 create();
 display();
 int i,n,flag=1;
 while(flag)
 {
 printf("\n....Insertion....\n");
 printf("\n1.At begining\n2.At end\n3.At position\n");
 printf("Enter your choice : ");
 scanf("%d",&i);
 switch(i)
 {
 case 1:
 printf("\n....Insertion at begining....\n");
 insertbeg();
 display();
 break;
case 2:
 printf("\n....Insertion at end....\n");
 insertend();
 display();
 break;
 case 3:
 printf("\n....Insertion at given position....\n");
 printf("Enter position : ");
 scanf("%d",&n);
 insertpos(n);
 display();
 break;
 default:
 flag=0;
 }
 }
 }
 }
 void delete()
 {
 int i,n,flag=1;
 while(flag)
 {
 printf("\n....Deletion....\n");
 printf("\n1.At begining\n2.At end\n3.At position\n");
 printf("Enter your choice : ");
 scanf("%d",&i);
 switch(i)
 {
 case 1:
 case 2:
 printf("\n....Deletion at begining....\n");
 deletebeg();
 display();
 break;
 printf("\n....Deletion at end....\n");
 deleteend();
 display();
break;
 case 3:
 printf("\n....Deletion at given position....\n");
 printf("Enter position : ");
 scanf("%d",&n);
 deletepos(n);
 display();
 break;
 default:
 flag=0;
 }
 }
 }
 void create()
 {
 node*temp;
 temp=(node*)malloc(sizeof(node));
 printf("\n......................Creating\n");
 printf("Enter the number : ");
 scanf("%d",&temp->num);
 temp->next=NULL;
 start=temp;
 end=temp;
 }
 void insertbeg()
 {
 node*temp;
 temp=(node*)malloc(sizeof(node));
 printf("Enter the number : ");
 scanf("%d",&temp->num);
 temp->next=start;
 start=temp;
 }
 void insertend()
 {
node*temp;
 temp=(node*)malloc(sizeof(node));
 printf("Enter the number : ");
 scanf("%d",&temp->num);
 end->next=temp;
 temp->next=NULL;
 end=temp;
 }
 }
 void deletebeg()
 {
 node*temp;
 if(start=NULL)
 {
 }
 printf("\n....Deletion not possible....\n");
 else if(start==end)
 {
 free(start);
 start=NULL;
end=NULL;
 }
 else
 {
 }
 }
 temp=start;
 start=start->next;
 free(temp);
 void deleteend()
 {
 node*temp,*t;
 if(end=NULL)
 {
 printf("\n....Deletion not possible....\n");
 }
 else if(start==end)
 {
 free(start);
 start=NULL;
 end=NULL;
 }
 else
 {
 }
 }
 temp=start;
 t=end;
 while(temp->next!=end)
 {
 temp=temp->next;
 }
 temp->next=NULL;
 end=temp;
 free(t);
 }
 }
 void display()
 {
 while(i<n-1 && temp!= NULL)
 {
 temp=temp->next;
 i++;
 }
 p=temp->next;
 temp->next=p->next;
 free(p);
 node*temp;
 temp=start;
 while(temp!=NULL)
 {
 printf(" %d ",temp->num);
 if(temp->num)
 {
 printf("->");
 }
 temp=temp->next;