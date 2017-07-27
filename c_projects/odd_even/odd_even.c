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
   int t= 1;
   printf("Give a number:\n" );
   int num;
    scanf("%d",&num );
  /* code */
  while (t==1){
  if (odd_even(num) != 1){
    printf("ODD\n" );
  }
  else {
  printf("EVEN\n" );
}

printf("Do you want to continue?[y/n]:");
scanf( " %c",&opt );
if (opt=='n'){
  break;
}
else {
  printf("Give a number:" );
  scanf(" %d",&num );

}
}
printf("Exit" );
return 0;
}
