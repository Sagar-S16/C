#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    // if(marks>30 && marks<=100){
    //     printf("PASS");
    // }
    // else{
    //     printf("FAIL");
    // }
    marks>=30?printf("pass"):printf("fail");
    return 0;
}