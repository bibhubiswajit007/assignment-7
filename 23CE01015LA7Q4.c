#include<stdio.h>
#include<limits.h>
int max (int arr[], int a,int b,int maxn){
    if (a>b) return maxn;
    if(arr[a]>maxn) maxn=arr[a];
    max(arr,a+1,b,maxn);
    }

int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("\nEnter %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("MAX NUMBER OF THE GIVEN INPUTS IS %d",max(arr,0,n-1,INT_MIN));
    return 0;
}