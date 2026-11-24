//------LAB5A------//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char str1[20], str2[20];
int ch, i, j;
do{
printf("Welcome to the Menu\n");
printf("------------------------------\n");
printf("1. Find length of the String\n");
printf("2. Concatenate Strings\n");
printf("3. Copy one String to another\n");
printf("4. Compare two Strings\n");
printf("5. Exit the program\n");
printf("------------------------------\n");
printf("Enter your Choice : ");
scanf("%d", &ch);
switch (ch) {
case 1:

printf("Enter the words/numbers for the string : ");
scanf("%s", str1);
i = strlen(str1);
printf("The length of the String you entered is : %d\n\n",i);
break;
case 2:
printf("Enter the words/numbers to concatenate/attach for the first
string : ");
scanf("%s", str1);
printf("Enter the words/numbers to concatenate/attach for the
second string : ");
scanf("%s", str2);
strcat(str1, str2);
printf("The joint string is : %s\n\n",str1);
break;
case 3:
printf("Enter the words/numbers for the string you want to copy : ");
scanf("%s", str1);
printf("Enter the words/numbers for the string you want to paste : ");
scanf("%s", str2);
strcpy(str2, str1);
printf("Your initial first string is : %s\n",str1);
printf("Your initial second string is : %s\n",str2);
printf("String after copying the second string to the first :
%s\n\n",str1);
break;
case 4:

printf("Enter the words/numbers for the string you want for the first
string : \n");
scanf("%s", str1);
printf("Enter the words/numbers for the string you want for the
second string : \n");
scanf("%s", str2);
j = strcmp(str1, str2);
if (j == 0){
printf("Both the strings are same\n");
}
else{
printf("Strings are not same\n");
}
break;
case 5:
exit(0);
break;
default:
printf("Invalid input. Please enter the correct choice number!!!\n\n");
}
}
while (ch!=5);
return 0;
}



//------LAB5B------//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char str1[20], str2[20];
int ch, j;
printf("Enter the model number of the first machine : \n");
scanf("%s", str1);
printf("Enter the model number of the second machine : \n");
scanf("%s", str2);
j = strcmp(str1, str2);
if (j == 0){
printf("Both the models are same\n");
}
else{
printf("Models are not same\n");
}

return 0;
}
