#include<stdio.h>

int main(){
  int num, i = 0, m = 0, dig, r = 0, div = 0;
  printf("Enter number: ");
  scanf("%d", &num);
  printf("Jumping numbers are:\n");
  for (i = 0; i < num; i++){
    if  (i < 10)
      printf("%d\n", i);
    else{
      dig = i;
      r = dig % 10;
      div = (dig / 10)%10;
      if (i < 100 && (r - div == 1 || r - div == -1))
        printf("%d\n", i);
      m = (dig / 100)% 10;
      if (i < 1000 && (r - div == 1 || r - div == -1) && (m - div == 1 || m - div == -1) )
        printf("%d\n", i);
    }
  /*  else if (i >= 10 && i < 100){
      p = (i % 10) - (i /10);
      if (p == 1 || p == -1)
        printf("%d\n", i);
    }*/
  }

}
