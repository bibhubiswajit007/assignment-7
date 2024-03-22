#include<stdio.h>
#include<string.h>
void reverse(char arr[],int a,int b){
    if (a>=b) return ;
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    reverse(arr,a+1,b-1);
}
int main(){
    char a[50];
    printf("Enter Input String:");
    gets(a);
    int k=strlen(a);
    reverse(a,0,k-1);
    puts(a);
    return 0;
}
