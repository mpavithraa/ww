# ww
#include <stdio.h>
struct TIME{
  int seconds;
  int minutes;
  int hours;
};
void Difference(struct TIME t1, struct TIME t2, struct TIME *diff);
int main(){
    struct TIME t1,t2,diff;
    printf("Enter start time: \n");
    printf("Enter  minutes  ");
    scanf("%d",&t1.minutes);
    printf("Enter stop time: \n");
    printf("Enter minutes");
    scanf("%d",&t2.minutes);
    Difference(t1,t2,&diff);
    printf("\nTIME DIFFERENCE: %d - ",t1.minutes);
    printf("%d ",t2.minutes);
    printf("= %d\n",diff.minutes);
    return 0;
}
void Difference(struct TIME t1, struct TIME t2, struct TIME *differ){

    if(t2.minutes>t1.minutes){
        --t1.hours;
        t1.minutes+=60;
    }
    differ->minutes=t1.minutes-t2.minutes;
    
