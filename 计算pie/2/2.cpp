#include <stdio.h>
#include <math.h>
int main(){
    float pi=1;
    float n=1;
    int j;
    for(j=1;j<=100;j++,n++){
        if(j%2==0){
            pi*=(n/(n+1));
        }else{
            pi*=((n+1)/n);
        }
    }
    pi=2*pi;
    printf("piµÄÖµÎª£º%.7f\n",pi);
    return 0;
}