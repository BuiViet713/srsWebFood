#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main () {
    srand((unsigned) time(NULL));
    int money,round;
    scanf("%d",&money);
    if (money<2000)
    {
        printf("nap them di anh zai");
    }
    
    while (money>=2000)
    {
    int n;
    scanf("%d",&n);
    int a = rand() %6 +1;
    int b = rand() %6 +1;
    int c = rand() %6 +1;
    int s=a+b+c;
    if (n== 0){
        printf("tam biet\n");
        printf("%d $",money);
        break;
    }
    round++;
    printf("%d %d %d -> kqua = %d\n",a,b,c,s);
    if (s == n){
       money+=5000;
       printf("ROUND %d :%d -> Winner +5000$ = %d $\n",round,s,money);
    }
    else {
       money-=2000;
       printf("ROUND %d :%d -> Loser -2000$ = %d $\n",round,s,money);
       }
     if (money <2000){
         printf("Vay tien khong \n");
         char c;
         scanf(" %c",&c);
         if (c=='co' || c=='Co' || c=='CO'){
             while ( money <2000)
             {
                int nap;
                printf("Vay bao nhieu =  ");
                scanf("%d",&nap);
                money+=nap;
             }
             
         }
     }  
    printf("co ban linh day !!\n");
  }
  return 0;
}
