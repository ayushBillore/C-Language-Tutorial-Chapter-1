
//1. First Program
#include<stdio.h>
int main() {
  printf("Hello World");
  return 0;
}

//2. Variables & Data Types + Constants & Keywords
#include<stdio.h>
int main() {
  int number;
  int age;
  int price;
  return 0;
}

#include<stdio.h>
int main() {
  int age = 22;
  float pi = 3.14;
  char percentage = '%';
  return 0;
}

//3. Comments
#include<stdio.h>
//This program prints Hello World
int main() {
  printf("Hello World");
  return 0;
}

//4. Output
#include<stdio.h>
int main() {
  int age = 22;
  float pi = 3.14;
  char percentage = '%';
  
  printf("age is %d", age);
  printf("age is %f", pi);
  printf("age is %c", percentage);
  return 0;
}

//5. Input (Sum of 2 numbers)
#include<stdio.h>
int main() {
  int a, b;
  printf("enter a \n");
  scanf("%d", &a);
  printf("enter b \n");
  
  scanf("%d", &b);
  printf("sum of a & b is : %d \n", a+b);
  return 0;
}

//6. Practice Qs 1 (Area of Square)
#include<stdio.h>
//area of square
int main() {
  int side;
  scanf("%d", &side);
  printf("%d", side * side);
  return 0;
}

//7. Practice Qs 2 (Area of Circle)
#include<stdio.h>
//area of square
int main() {
  float radius;
  scanf("%f", &radius);
  printf("%f", 3.14 * radius * radius);
  return 0;
}