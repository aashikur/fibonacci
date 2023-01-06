#include<stdio.h>

int main(){
    int m1 = 0, m2 = 1; int n=10; int m3,num;
    scanf("%d", &n);
    printf("fibonacci: ");

    for (int i = 1; i<=n; i++){
            num = m1;
            m3 = m1+m2;
            m1 = m2;
            m2 = m3;
            printf("%d ", num);
    }




return 0;}


