//------LAB4A------//
#include<stdio.h>
int main(){
int rows, columns;
printf("Welcome to addition of matrix\n");
printf("Enter the number of rows : ");
scanf("%d",&rows);
printf("Enter the number of columns : ");
scanf("%d", &columns);
int mat1[rows][columns], mat2[rows][columns], mat3[rows][columns];
printf("Enter the elements for the first matrix according to the given
order\n");
for(int i = 0; i < rows; i++){
for(int j = 0; j < columns; j++){
printf("Element [%d][%d]: ",i, j);
scanf("%d", &mat1[i][j]);
}
}
printf("Enter the elements for the second matrix according to the given
order\n");
for(int i = 0; i < rows; i++){
for(int j = 0;j < columns; j++){
printf("Element [%d][%d]: ",i, j);

scanf("%d", &mat2[i][j]);
}
}

for(int i = 0; i < rows; i++){
for(int j = 0; j< columns; j++){
mat3[i][j] = mat1[i][j] + mat2[i][j];
}
}
printf("The resultant matrix is : \n");
for(int i = 0; i < rows; i++){
for(int j = 0; j < columns; j++){
printf("%d\t", mat3[i][j]);
}
printf("\n");
}
return 0;
}



//------LAB4B------//

#include<stdio.h>
int main(){
int A[2][2], B[2][2], C[2][2];
int i, j;
printf("Enter the measurement data for Machine Component 1\n");
for( i = 0; i < 2; i++){
for( j = 0; j < 2; j++){
printf("Element [%d][%d]: ",i, j);
scanf("%d", &A[i][j]);
}
}
printf("Enter the measurement data for Machine Component 2\n");
for( i = 0; i < 2; i++){
for( j = 0;j < 2; j++){
printf("Element [%d][%d]: ",i, j);
scanf("%d", &B[i][j]);
}
}

for( i = 0; i < 2; i++){
for( j = 0; j< 2; j++){
C[i][j] = A[i][j] + B[i][j];
}
}
printf("The resultant matrix is : \n");
for( i = 0; i < 2; i++){
for( j = 0; j < 2; j++){
printf("%d\t", C[i][j]);
}
printf("\n");
}
return 0;
}
