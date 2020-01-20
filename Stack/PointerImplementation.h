#include <stdio.h>
#include <stdlib.h>
#include "../double_linked_list.h"

void push(node **head,int data)
{
  append(head, data);
}

int pop(node **head)
{
  int popped;
  node *temp = *head;
  *head = temp->next;
  temp->next->prev = NULL;
  popped = temp->data;
  free(temp);
  return popped;
}
