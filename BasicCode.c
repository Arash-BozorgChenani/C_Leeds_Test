#include <stdio.h>
#include <math.h> // to use the math library you need to link the compiler with mth library using gcc Code.c -lm

int main(){
float radius, Area;
const float Pi=3.14;
printf("Please Enter the Radius...\n");
scanf("%f", &radius);
Area=Pi*pow(radius,2);
printf("The area of the circle is: %.2f\n", Area);

//printf("Size of int: %zu bytes\n", sizeof(int) );
//printf("Size of float: %zu bytes\n", sizeof(float) );
//printf("Size of double: %zu bytes\n", sizeof(double) );
//printf("Size of char: %zu bytes\n", sizeof(char) );
//printf("Size of size_t: %zu bytes\n", sizeof(size_t) );

//int a, b , Sum;
//printf("Enter two values for 'a' and 'b': ");
//scanf("%d %d", &a,&b);
//Sum=a+b;
//printf("\nThe sum is: %d and the first variable is: %d\n\n",Sum,a);
return 0;
}
