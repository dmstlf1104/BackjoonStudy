#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int temp = 0; 
    int value = 0;
    int sum = 0;
    value = x;
    
    while(1){
        temp = x % 10;
        sum = sum + temp;
        x = x / 10;
        if(x == 0){
            break;
        }
    }
    
    if(value % sum != 0){
        answer = false;
    }
    
    return answer;
}