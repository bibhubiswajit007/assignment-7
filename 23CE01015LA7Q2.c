#include<stdio.h>
#include<string.h>
int main(){
    char instr[50];
    printf("ENTER THE STRING :");
    gets(instr);
    int i=0;
    while(i<strlen(instr))
    {
        int k=(((instr[i]<=90)&&(instr[i]>=65))||((instr[i]>=97&&instr[i]<=122)));
        if(!k) instr[i]='@';
        i++;
    }
    int j=0,swas=0,r=strlen(instr);
    while(swas==0){
        for (int i=0;i<r;i++){
            if(instr[i]=='@') {
                for (int p=i;p<r;p++){
                instr[p]=instr[p+1];
            }
            r=r-1;
            swas=1;
            break;
            }
        }
    for (int p=0;p<r;p++){
        int k=((instr[p]<=90)&&(instr[p]>=65))||((instr[p]>=97&&instr[p]<=122));
        if(!k) {
            swas=0;
            break;
        }
    }
    }
    puts(instr);
    return 0;
}
