#include "list_types.h"
#include <stdbool.h>
#include "eval.h"

#include <stdlib.h>
#include <stdio.h>


bool isvalidinsertion(list_t matrix, int i, bool* allowed){
    bool ret =true;
    if(!allowed[i]){

        if(i==0){//printf("rejected because index wasn't valid!\n");
            }


        return false;
    }
    for(int j=0;j<matrix.len;j++){
        int d=localdistance2(i,j,matrix);
        if(d==-1){
            if(i==0){
                //printf("got rejected on (%d,%d) with the value %d\n",i,j,d);
            }
            ret=false;
            break;
            
        }

    }

    return ret;

}

int valid_insertion(list_t matrix,bool* allowed){
    for(int i=0;i<matrix.len;i++){
        bool valid=isvalidinsertion(matrix,i,allowed);
        //printf("investigating %d and getting %d\n",i,valid);
        if(valid){
            return i;
        }
        //now we are investigating i. 
        //if(isvalidinsertion(matrix,i,allowed)){return i;}
    }
    return -1;
}

void insert(list_t matrix, int valuetoput, int wheretoput, int* arraytoputin, bool* allowed){
    allowed[valuetoput]=false;
    for(int i=0;i<matrix.len;i++){
        setdistance(i,valuetoput,0,matrix);
    }
    arraytoputin[wheretoput]=valuetoput;
    return ;
}
/* RESPONSIBILITIES: 
    1. TAKE AWAY THE -1's IN THE MATRIX. 
    2. MODIFY THE ALLOWED ARRAY. 
    3. PUT IN THE ARRAYTOPUTIN


*/

int * basic_valid(list_t matrix){
    list_t othermatrix=(list_t){matrix.len,0,0};
    int * othermatrixints=malloc(matrix.len*matrix.len*sizeof(int));
    for(int i=0;i<matrix.len*matrix.len;i++){
        othermatrixints[i]=matrix.p[i];
    }
    othermatrix.p=othermatrixints;

    bool allowed[matrix.len];
    for(int i=0;i<matrix.len;i++){
        allowed[i]=true;
    }


    int * final=malloc(sizeof(int)*matrix.len);
    for(int i=0;i<matrix.len;i++){
        int toinsert=valid_insertion(othermatrix,allowed);
        if(toinsert==-1){printf("something wrong!\n");}
        insert(othermatrix,toinsert,i,final,allowed);

        //insert();
        //this isnt done at all!
    }
    return final;
    
}



