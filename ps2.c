#include <stdio.h>
void multiplication(int n){
    if(n>0){
        for(int i=1;i<10;i++){
            printf("%d x %d = %d \n",n,i,n*i);
        }
    }else{
            puts("nombre incorrect");
        }
}
int main(){
    int n;
    puts("entre nombre");
    scanf("%d",&n);
    multiplication(n);
    return 0 ;
}

Question:

Write a C program that asks the user to enter
a positive integer. The program should display
the multiplication table (from 1 to 9) for
the entered number using a separate function.
If the input is not positive, the program should
display an error message.