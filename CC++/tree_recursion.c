#include<stdio.h>

void fun(int n){
   /*if(n>0)
    {
        fun(n-1);
        printf("%d", n);
        
    }*/ 
   int i = 1 ;
   while(i<=n){
    
    printf("%d", i);
    i++;
   }

}
int main()
{

    fun(5);
    return 0;
}