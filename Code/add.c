#include <stdio.h>

double add(double x,double y){
      return x+y;
}
int main(){
  double a,b;
  printf("Enter the numbers:");
  scanf("%lf %lf",&a,&b);
  printf("Sum of 2 numbers is %lf",add(a,b));
  return 0;
}
  
  
  
