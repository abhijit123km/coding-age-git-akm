#include<stdio.h>
int main(){
    int math;
    printf("enter your number math \n");
    scanf("%d",&math);
    int physics;
    printf("enter your number physics\n");
    scanf("%d",&physics);
    int english;
    printf("enter your number english \n");
    scanf("%d",&english);
    int tm,sum,avg,tn, per;
    sum=math+physics+english;
    tm=300;
    tn=3;
    avg=sum/tn;
    per= (sum*100)/tm;
    printf("percentage is %d\n % ",per);
    printf("avg is %d",avg);
    return 0;
    }
