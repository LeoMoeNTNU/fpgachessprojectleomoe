#include <stdlib.h>
#include <stdio.h>
#include "getmatrix.h"
#include "randomarray.h"
#include "eval.h"

#include "greedysearch.h"


void leostest(){
    list_t matrix=getmatrix("/home/moeth/optimization_metaheuristics/1_assigment/Instances/leo1.sop");
    int a[]={0,1,2,3};

    int my_dist=distance(a, matrix);
    printf("result of leos test: %d\n",my_dist);
}

int main(int argc, char ** argv){
    initialize_random();
    //printf("hi\n");
    //printf("%s\n", argv[1]);
    list_t matrix=getmatrix(argv[1]);
    /*
    int width=matrix.len;
    for(int i=0;i<width;i++){
        for(int j=0;j<width;j++){
            
        //printf("index %d: %d ", i*width+j, matrix.p[i*width+j]);
        printf("%d ", matrix.p[i*width+j]);
        
    }
    printf("\n");
}
*/
    //int random[20];
    //randomarray(random,20);
    /*
    for(int i=0;i<20;i++){
        printf("%d:%d\n",i,random[i]);
    }
    */


    //printf("is the array valid? %d\n",isvalidarray(random, 20));

    
    leostest();
    //int * greedysearch(int time, list_t matrix, int neighbours, int local_iterations,int perturbationsize);

    int * greedy= greedysearch(1, matrix, 5, 20,20);
    printf("distance of greedy:%d\n",distance(greedy,matrix));

    int * greedy2=greedysearch(5,matrix,5,20,20);
    printf("distance of second greedy:%d\n",distance(greedy2,matrix));

    int * greedy3=greedysearch(10,matrix,5,20,20);
    printf("distance of third greedy: %d\n",distance(greedy3,matrix));


    return 0;
}