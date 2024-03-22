#include<stdio.h>
#include<string.h>
int main(){
    char arr[50],brr[50];
    printf("Enter a string:");
    gets(arr);
    printf("Enter a substring to be searched:");
    gets(brr);
    int lenstr = strlen(arr);
    int lensubstr = strlen(brr);

    for (int i=0;i<=lenstr-lensubstr;i++) {
        int j;
        for (j=0; j<lensubstr;j++)
            if (arr[i+j]!=brr[j]) break;

        if (j==lensubstr) {
            printf("Substring is present");
            return 0;
    }

    
}
    printf("Substring is not present");

    return 0;
}