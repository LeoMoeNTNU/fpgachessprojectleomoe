#ifndef EVAL_H
#define EVAL_H
#include "list_types.h"


int distance(int* ip, list_t matrix);

int localdistance(int x, int y,list_t matrix);

int distance3nodes(int first, int second, int third, list_t matrix);

int distance4nodes(int first, int second, int third, int fourth, list_t matrix);
#endif