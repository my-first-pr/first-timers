#include<stdio.h>
#include<stdlib.h>

int root=1;
int size=0;
int heap[1000];

void swap(int *p,int *q)
{
  int temp=*p;
  *p=*q;
  *q=temp;
}

void heapify()
{
  int i=size;
  int parent=i/2;

  while(i>=1 && parent >=1 && heap[i]<heap[parent] )
  {
    swap(&heap[i],&heap[parent]);
    i=parent;
    parent=i/2;
  }
}

void insert(int val)
{
  size=size+1;
  heap[size]=val;
  heapify();
}

void display()
{
  for(int i=1;i<=size;i++)
  {
    printf("heap[%d] = %d ",i,heap[i]);
  }
  printf("\n");
}

int main()
{
  int q;
  scanf("%d",&q);

  while(q--)
  {
    char s;
    scanf("%c",&s);

    if(s=='i')
    {
      int x;
      scanf("%d",&x);
      insert(x);
      display();
      printf("\n");
    }


  }
}
