#include "probelib.h"
#include <cstdio>
// #include <iostream>

int n;

main()
{
    int n = probe_init();
    int first = 0, last = n-1;
    while(first<last){
        if(probe_check(first, (first+last)/2)){
            last = (first+last)/2;
        }
        else{
            first = (first+last)/2+1;
        }
        // printf("%d %d\n", first, last);
    }
    probe_answer(first);
}