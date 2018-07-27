#include  <stdio.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int f, i, len;
    double diff_t;
    time_t start_t, end_t;
    char str[100];
    long sum = 0;
    printf("Enter a number: ");
    gets( str );
    len = strlen(str);
    for(i=0; i<len; i++){
      f = f * 10 + ( str[i] - '0' );
    }
    time(&start_t);
    for ( int i = 0; i <= f; i = i + 1 )
    {
      if (i == f) {
        printf("i 值为 %d \n", i);
      }
      sum += i;
    }
    time(&end_t);
    diff_t = difftime(end_t, start_t) * 1000;
    printf("计算和为 %ld \n", sum);
    printf("总消耗时间为 %f ms \n", diff_t);
    return 0;
}
