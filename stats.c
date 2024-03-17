/******************************************
****** Name   : Ahmed Abdulla Mourad ******
****** Subject: Coursear Course      ******
****** Task   : Assignement          ******
****** File   : stats.c              ******
******************************************/

#include<stdio.h>
#include"stats.h"
int i=0;
int j=0;
int error_state=1;
main (void)
{

void  print_statistics(int * pointer)
{   printf("**************statistics**************\n ")
    print_array();
    find_median();
    find_mean();
    find_maximum();
    find_minimum();
    
}
unsigned char print_array     (int * pointer,int index)
{
    printf("array = : ")
    for(int i=0 ; i<index ; i++)
    {
            printf("%i ,",*pointer [i]);
    }
    printf("\n");
          
    return error_state      
}
unsigned char find_median     (int * pointer,int index)
{
    float median= 0.00;
    for(i=0;i<index;i++)
    {
       median= median+(array[i]);
    }
    median=median/index
    printf("median = %f \n ",median);
}
unsigned char find_mean       (int * pointer,int index)
{
    float median= 0.00;
    for(i=0;i<index;i++)
    {
       mean= mean+(array[i]);
    }
    mean=mean/index
    printf("mean = %f \n ",median);
   
}
unsigned char find_maximum    (int * pointer,int index)
{
   int  max=0;
    for(i=0;i<index;i++)
    {
     if(array[i]>array[i+1]&&array[i]>max)
        {
            max=array[i];
        }
    }
    printf("maximum  = %i \n ",max);
    return max ;
}
unsigned char find_minimum    (int * pointer,int index)
{
   int  min=10000;
    for(i=0;i<index;i++)
    {
     if(array[i]<array[i+1]&&min>=array[i])
        {
            min=array[i];
        }
    }
    printf("minimum  = %i \n ",min);
    return min ;
}
void sort_array    (int * pointer)
{

}




    return 0;
}