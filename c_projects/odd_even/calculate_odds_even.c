#include <stdio.h>

int odd_even(int n) {
  if (n % 2 == 0  ){
    return 1;
  }
  else {
  return 0;
}
  /* code */
}
 int main() {
   char opt;
   int t=1;
   int odd=0;
   int even =0;
   printf("Give the maximum number:\n" );
   int num;
    scanf("%d",&num );
  /* code */
  while (t<= num){
  if (odd_even(t) != 1){
  /*odd*/
  printf("odd -->%d\n",t );
  odd +=1;
  }
  else {
    printf("even -->%d\n",t );
  /*even*/
  even +=1;
}
t+=1;

}
printf("The odds are:%d and evens are:%d\n",odd,even );
return 0;
}
