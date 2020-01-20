#include "PointerImplementation.h"

int main()
{
  node *head = NULL;
  push(&head, 10);
  push(&head, 20);
  push(&head, 30);
  display(head,0);
  push(&head, 40);
  push(&head, 50);
  push(&head, 60);
  printf("\n===================\n");
  display(head,0);
  pop(&head);
  printf("\n===================\n");
  display(head,0);
  pop(&head);
  printf("\n===================\n");
  printf("%d",pop(&head));
  printf("\n===================\n");
  display(head,1);
}
