#include <stdio.h>

int main(){
 char name[20];
 printf("Type your name:");
 fgets(name, 20, stdin);
 
 printf("Your name:");
 puts(name);
  return 0;  
}
