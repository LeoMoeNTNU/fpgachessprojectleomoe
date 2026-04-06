#include <verilated.h>
#include "Vcounter.h"
//#include <iostream>
#include "stdio.h"


int main(int args, char** argp){
    Vcounter* counter= new Vcounter;
    counter->clk=0;
    counter->rst=1;
    counter->enable=0;
    
    counter->eval();
    counter->rst=0;
    for(int i=0;i<10;i++){
        counter->clk=!counter->clk;
        counter->enable=1;
        counter->eval();
        printf("cycle: %d, count:%d\n",i, (int)counter->count);
        //std::cout << "cycle " << i
          //        << " count = " << (int)counter->count << std::endl;

    }

    delete counter;
    return 0;


}