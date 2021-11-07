#include <stdio.h>
int main(){
 float x ;
 printf ("Enter the number to check: " "\n") ;
 scanf("%f" , &x) ;
 if (x>=0 && x<=25)  { 
  
    printf("%s" ,"Interval[0,25]") ;

 }
 
 else if ( x > 25 && x < 50)  { 
  
    printf("%s" ,"Interval(25,50)") ;

 }
  else if ( x >= 50 && x < 75)  { 
  
    printf("%s" ,"Interval[50,75)") ;

 }
 
  else if ( x >= 75 && x <100)  { 
  
    printf("%s" ,"Interval[75,100)") ;

 }
 else { 
  
    printf("%s" ,"Out of Intervals") ; }
	return 0;
}
