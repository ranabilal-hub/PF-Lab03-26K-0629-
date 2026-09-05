#include <stdio.h>
#include<stdbool.h>

int main(){
int age = 18;
float height = 5.8f;
double pi = 3.141592653;
char grade = 'A';
bool ispassed = true;

printf("int Value is : %d \t Size: %lu bytes\n", age, sizeof(age));
printf("float Value is : %f \t Size : %lu bytes\n", height, sizeof(height));
printf("double Value is : %lf \t Size : %lu bytes\n", pi, sizeof(pi));
printf("char Value is : %c \t Size: %lu bytes\n", 'A', sizeof('A'));
printf("Bool Value is : %d \t Size : %lu bytes\n", ispassed, sizeof(ispassed));

return 0;
}
