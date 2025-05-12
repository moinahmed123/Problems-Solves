
#include <stdio.h>

int main()
{
    long long int num,temp,last_n=1,lastpart=0,first_n=1;
    scanf("%lld",&num);
    int n=0;
    temp=num;
    while(temp!=0){
        n++;
        temp=temp/10;
    }
    int t=n;
    temp=num*num;
    while(t){
        t--;
        last_n=last_n*10;
    }
        lastpart=temp%last_n;
        temp=temp/last_n;
        first_n=temp%last_n;
    if(first_n+lastpart==num && (lastpart)!=0 || first_n*10+lastpart==num && (lastpart)!=0 ) printf("YES");
    
  
    return 0;
}