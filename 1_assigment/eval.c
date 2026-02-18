#include "list_types.h"
#include <stdio.h>
int localdistance(int x, int y,list_t matrix){
    return matrix.p[matrix.len*x+y];
}

int distance3nodes(int first, int second, int third, list_t matrix){
    return localdistance(first, second,matrix)+localdistance(second,third,matrix);
}

int distance4nodes(int first, int second, int third, int fourth, list_t matrix){
    return localdistance(first,second,matrix)+localdistance(second,third,matrix)+localdistance(third,fourth,matrix);
}



//assumes that the first
int distance(int* ip, list_t matrix){
    int currentnode=0;
    int distanceTravelled=0;
    for(int i=1;i<matrix.len;i++){
        distanceTravelled+=localdistance(currentnode,ip[i],matrix);
        currentnode=ip[i];
    }
    distanceTravelled+=localdistance(ip[matrix.len-1],ip[0],matrix);
    //printf("distance found: %d\n",distanceTravelled);
    return distanceTravelled;
}


