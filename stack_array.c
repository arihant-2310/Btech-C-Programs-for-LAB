#include<stdio.h>
int top=-1;
int size=100;
int push(int a[],int item)
{
	if(top>size-1)
		printf("stack overflow");
	else
	{	top++;
		a[top]=item;
	}
}

void pop()
{
	if(top>=0) top--;
	else	printf("empty stack");
}
void print(int a[])
{	int n=0,temp;
	temp=top;
	if(n<=top)
	{ printf("stack fromtop to bottom");
	while(n<=temp)
	{		
		printf("\n %d",a[temp]);
		temp--;
	}
	}
	else printf("empty stack");
}
	

int main()
{
	int n,ch,a[100],item;
	while(1)
	{
	printf("\nenter choice\n1.push  2.pop  3.print  4.break\n");
	
	scanf("%d",&ch);
	if(ch==4) break;
	switch(ch)
	{
		case 1:
			{printf("enter item  ");
			 scanf("%d",&item);
		       	push(a,item); break;}
		case 2:
			{ pop(); break; }
		case 3: {print(a);break;}
	}
	}	
}