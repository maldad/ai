#include <stdbool.h>
#include "lib/array.h"

int matriz[12][12] = {
      /* 0  , 1   , 2   , 3   , 4   , 5   , 6   , 7   , 8   , 9   , 10  , 11*/

  /*0*/  {0  , 0   , 0   , 0   , 0   , 0   , 0   , 0   , 0   , 0   , 0   , 0}   ,
  /*1*/  {0  , 0   , 190 , 180 , 0   , 330 , 0   , 0   , 180 , 345 , 0   , 0}   ,
  /*2*/  {0  , 190 , 0   , 0   , 170 , 317 , 0   , 0   , 0   , 299 , 0   , 0}   ,
  /*3*/  {0  , 180 , 0   , 0   , 0   , 230 , 275 , 198 , 314 , 0   , 0   , 0}   ,
  /*4*/  {0  , 0   , 170 , 0   , 0   , 415 , 0   , 0   , 0   , 310 , 0   , 0}   ,
  /*5*/  {0  , 330 , 317 , 230 , 415 , 0   , 300 , 0   , 0   , 0   , 0   , 0}   ,
  /*6*/  {0  , 0   , 0   , 275 , 0   , 300 , 0   , 225 , 0   , 0   , 0   , 450} ,
  /*7*/  {0  , 0   , 0   , 198 , 0   , 0   , 225 , 0   , 267 , 0   , 0   , 280} ,
  /*8*/  {0  , 180 , 0   , 314 , 0   , 0   , 0   , 0   , 0   , 450 , 230 , 255} ,
  /*9*/  {0  , 345 , 299 , 0   , 310 , 0   , 0   , 0   , 450 , 0   , 250 , 0}   ,
  /*10*/ {0 , 0   , 0   , 0   , 0   , 0   , 0   , 0   , 230 , 250 , 0   , 312} ,
  /*11*/ {0 , 0   , 0   , 0   , 0   , 0   , 450 , 280 , 255 , 0   , 312 , 0}
};

bool f(){
  return true;
}
