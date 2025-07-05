#include <stdio.h>

void myFunction(char name[]) {
  printf("Good Morning Mr %s\n",name);
 
}

int main() {
  myFunction("Sadeem");
  myFunction("Reehan");
  myFunction("Ayan");
  return 0;
}