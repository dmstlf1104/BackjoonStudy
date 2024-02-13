#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    if(a == b) return a;
    for(int i = a>b?b:a;i<=(a>b?a:b);i++) {
        answer+=i;
    }
    return answer;
}