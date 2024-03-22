#include<stdio.h>
#include<string.h>
int main(){
    char swas[50],a;
    printf("Enter the string :");
    gets(swas);
    printf("Enter alphabet :");
    scanf("%c",&a);
    int count=0;
    for (int i=0;i<strlen(swas);i++){
        if (a==swas[i]) count++;
    }
    printf("Frequency of %c :%d",a,count);
    return 0;
}