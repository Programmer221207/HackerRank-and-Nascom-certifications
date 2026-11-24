#include<stdio.h>
int main(){
int choice;
float n1, n2, add, sub, mul, div;
printf("Welcome to the Calculator\n\n");
printf("========MENU========\n\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n\n");
printf("5. Exit the Calculator\n\n\n");
printf("Enter your choice number : ");
scanf("%d", &choice);
if(choice>=1 && choice<=4){
switch(choice){
case 1:
printf("Enter the two numbers you want to add : ");
scanf("%f %f",&n1, &n2);
add = n1 + n2;
printf("The sum of the Two numbers is : %.2f\n",add);

break;
case 2:
printf("Enter the two numbers you want to subtract : ");
scanf("%f %f",&n1, &n2);
sub = n1 - n2;
printf("The difference of the Two numbers is : %.2f\n",sub);
break;
case 3:
printf("Enter the two numbers you want to Multiply : ");
scanf("%f %f",&n1, &n2);
mul = n1 * n2;
printf("The product of the Two numbers is : %.2f\n",mul);
break;
case 4:
printf("Enter the two numbers you want to divide : ");
scanf("%f %f",&n1, &n2);
if(n2!=0){
div = n1 / n2;
printf("The quotient of the Two numbers is : %.2f\n",div);
}
else{
printf("We cannot divide by 0\n");
}
break;
}

}
else if(choice==5){
printf("you have exited the calculator!!!\n");
}
else{
printf("Enter a valid option\n");
}
return 0;
}
