#include<stdio.h>

int an[7]={1,3,21,14,7,32,0};


int main(){
    
    for(int a=0;a<7;a++){
        int min=an[a];
        int c=a;
    for(int b=a;b<7;b++)
    {   
        if(an[b]<=min)
       { min=an[b];
         c=b;
    }
    }
    int b= an[a];
    an[a]=min;
    an[c]=b;
    }
    for(int a=0;a<7;a++)
    printf("%d ",an[a]);
    return 0;
}