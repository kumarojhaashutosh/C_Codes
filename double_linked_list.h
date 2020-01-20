#include <stdio.h>
#include <stdlib.h>

typedef struct my_node
{
  int data;
  struct my_node *next, *prev;
}node;

void display(node *head, int reverse)
{
  node *temp;
  temp = head;
  if(reverse==1)
  {
    while(temp->next!=NULL) //traverse to the last node
    {
      temp = temp->next;
    }
    while(temp!=NULL)
    {
      printf("%d ",temp->data); //print from end to beginning
      temp = temp->prev;
    }
    return;
  }

  while(temp!=NULL) //print data from beginning to end
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
  return;
}

void append(node **head, int data)
{
  node *temp, *new_node;
  new_node = (node *)malloc(sizeof(node));
  new_node->data = data;
  new_node->next = NULL;
  new_node->prev = NULL;

  if(*head == NULL)
  {
    *head = new_node;
    return;
  }

  temp = *head;
  while(temp->next!=NULL)
  {
    temp = temp->next;
  }
  temp->next = new_node;
  new_node->prev = temp;
}

void delete(node **head, int key)
{
  node *temp = *head;
  while(temp->data!=key && temp!=NULL)
  {
    temp = temp->next;
  }
  if(temp)
  {
    if(temp==*head)
    {
      *head = temp->next;
      temp->next->prev = NULL;
    }
    else
    {
      temp->prev->next = temp->next;
      temp->next->prev = temp->prev;
    }
    free(temp);
  }
  else
  {
    printf("The key does not exist.\n");
  }
}
