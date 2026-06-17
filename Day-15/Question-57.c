/*
problem:
write a progam to reverse arr
*/
#include<stdio.h>
int main(){
    int i,n,a[100];
    printf("Enter the number of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("===Reverse of array===\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
    return 0;
}
