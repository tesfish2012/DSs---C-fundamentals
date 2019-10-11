#include<stdio.h>   
 void fibonaci(int n) ;
int main()    
{    
 int fn ,i;    
 printf("Enter the number of elements:");    
 scanf("%d",&fn);    
 fibonaci(fn);
 
}

void fibonaci(int n) { 
int c[n];
 int i; 
c[0]=0;
c[1]=1;
printf("%d%d",c[0],c[1]);
 for(i=2;i<n;++i)  
 { 
  
c[i]=c[i-1]+c[i-2];
printf("%d",c[i]);

 }  
 } 
 

  
