#include<stdio.h>

int an[7]={1,3,21,14,7,32,0};


int main(){
    
    for(int a=7;a>0;a--){
    for(int b=1;b<a;b++)
    {
    if(an[b]<=an[b-1])
    { int c= an[b];
    an[b]=an[b-1];
    an[b-1]=c;
      }
    }
    }
   
    for(int a=0;a<7;a++)
    printf("%d ",an[a]);
    return 0;
}