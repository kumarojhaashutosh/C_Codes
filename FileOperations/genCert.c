#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This is to certify that this file is generated using code written by ABC of XYZ
at the age of PQ. */

typedef struct my_node
{
  char name[50], add[150], age[4];
}about;

about getData()
{
  about new_entry;
  char new_entry_name[50], new_entry_add[150], new_entry_age[4];
  printf("Enter your full name: ");
  fgets(new_entry_name, sizeof(new_entry_name), stdin);
  printf("Enter your address: ");
  fgets(new_entry_add, sizeof(new_entry_add), stdin);
  printf("Enter your age: ");
  fgets(new_entry_age, sizeof(new_entry_age), stdin);
  strcpy(new_entry.name, new_entry_name);
  strcpy(new_entry.add, new_entry_add);
  strcpy(new_entry.age, new_entry_age);
  return new_entry;
}

void genCert(about data)
{
  FILE *fob = fopen("Certificate.txt","w");
  char cert[500] = "This is to certify that this file is generated\n using code\
  written by ";
  strcat(cert,data.name);
  strcat(cert," of ");
  strcat(cert,data.add);
  strcat(cert," at the age of ");
  strcat(cert,data.age);
  strcat(cert," years.");
  printf("%s",cert);
  fputs(cert,fob);
  fclose(fob);
}

int main()
{
  about data = getData();
  genCert(data);
}
