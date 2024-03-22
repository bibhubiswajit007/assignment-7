#include<stdio.h>
#include<string.h>
int main(){
    char bibhu[50],a;
    printf("Enter the string :");
    gets(bibhu);
    printf("Enter alphabet :");
    scanf("%c",&a);
    int count=0;
    for (int i=0;i<strlen(bibhu);i++){
        if (a==bibhu[i]) count++;
    }
    printf("Frequency of %c :%d",a,count);
    return 0;
}
