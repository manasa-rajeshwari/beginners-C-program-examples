#include<stdio.h>
#include<math.h>

void amstfun(int lnum, int unum){
    int num, i, am, numi, numf, rem, k;	
    num = lnum;
    for(num = lnum; num < unum; num ++){
       numi = num;
       numf = num;
       am = 0;
       i = 0;
       while (numi != 0){
          i = i + 1;
          numi = numi / 10;
       }
   //    printf("Value of i %d \n", i);
       for (k = 1; k <= i; k++){
          rem = numf % 10;
          am = am + pow(rem, i);
        //  printf("am = %d \n", am);
          numf = numf /10;
       }
 //      printf("The value of am %d \n", am);
       if(am == num){
          printf("The amstrong number is :");
          printf("%d\n", num);
       }
    }


}
int main(){
    int unum, lnum;
    printf("Enter lower limit of the range:");
    scanf("%d", &lnum);
    printf("Enter upper limit of the range:");
    scanf("%d", &unum);

    amstfun(lnum, unum);
 /*   
    num = lnum;
    for(num = lnum; num < unum; num ++){
       numi = num;
       numf = num;
       am = 0;
       i = 0;
       while (numi != 0){
          i = i + 1;
          numi = numi / 10;
       }
   //    printf("Value of i %d \n", i);
       for (k = 1; k <= i; k++){
          rem = numf % 10;
          am = am + pow(rem, i);
        //  printf("am = %d \n", am);
          numf = numf /10;
       }
 //      printf("The value of am %d \n", am);
       if(am == num){
          printf("The amstrong number is %d\n", num);
       }
    }*/
}
