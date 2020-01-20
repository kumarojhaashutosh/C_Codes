#include <stdio.h>
#include <stdlib.h>
#include "double_linked_list.h"

int main()
{
  node *head = NULL;
  int i;
  for(i=1;i<=10;i++)
  {
    append(&head, i);
  }
  display(head,0);
  printf("\n====================\n");
  display(head,1);

  delete(&head, 5);
  delete(&head, 1);
  printf("\n====================\n");
  display(head,0);
  printf("\n====================\n");
  display(head,1);

  append(&head,5);
  append(&head,1);
  printf("\n====================\n");
  display(head,0);
  printf("\n====================\n");
  display(head,1);

  return 0;
}
