#include<stdio.h>
int main()
{
    int num, total;
    scanf("%d %d", &num, &total);
    int* answer = (int*)malloc(num);
    int a= (num+1)*num/2;
    int b=(total-a)/num;
    for(int i=0;i<num;i++)
    {
            answer[i]=1+b+i;
            printf("%d ",answer[i]);
    }
    free(answer);
    
    return 0;
}