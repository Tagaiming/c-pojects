#include <stdio.h>
#include <string.h>

int main()
{

  char name[20];
  char father_name[20];
  char mother_name[20];
  int class;
  // input username
  printf("Enter yout name :");
  scanf("%s", name);
  // input username Fathername
  printf("Enter yout Father_name :");
  scanf("%s", father_name);
  // input username Mothername
  printf("Enter yout mothername :");
  scanf("%s", mother_name);
  // input username class
  printf("Enter your class :");
  scanf("%d", &class);

  printf("My dog name is %s\n my dog father name is %s\n my dog study on class %d\n my dog mother name is %s\n thank you for make my dog",name,father_name,class,mother_name);

  return 0;
}