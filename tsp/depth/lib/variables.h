int matrix[12][12] = {
      /*----------------------TO---------------------*/
      /* 0  , 1   , 2   , 3   , 4   , 5   , 6   , 7   , 8   , 9   , 10  , 11*/

  /*SINCE*/
  /*0*/  {0 , 0   , 0   , 0   , 0   , 0   , 0   , 0   , 0   , 0   , 0   , 0}   ,
  /*1*/  {0 , 0   , 0 , 180 , 200 , 330 , 200 , 200 , 180 , 345 , 200 , 200} ,
  /*2*/  {0 , 190 , 0   , 200 , 170 , 317 , 200 , 200 , 200 , 299 , 200 , 200} ,
  /*3*/  {0 , 180 , 200 , 0   , 200 , 230 , 275 , 198 , 314 , 200 , 200 , 200} ,
  /*4*/  {0 , 200 , 170 , 200 , 0   , 415 , 200 , 200 , 200 , 310 , 200 , 200} ,
  /*5*/  {0 , 330 , 317 , 230 , 415 , 0   , 300 , 200 , 200 , 200 , 200 , 200} ,
  /*6*/  {0 , 200 , 200 , 275 , 200 , 300 , 0   , 225 , 200 , 200 , 200 , 450} ,
  /*7*/  {0 , 200 , 200 , 198 , 200 , 200 , 225 , 0   , 267 , 200 , 200 , 280} ,
  /*8*/  {0 , 180 , 200 , 314 , 200 , 200 , 200 , 200 , 0   , 450 , 230 , 255} ,
  /*9*/  {0 , 345 , 299 , 200 , 310 , 200 , 200 , 200 , 450 , 0   , 250 , 200} ,
  /*10*/ {0 , 200 , 200 , 200 , 200 , 200 , 200 , 200 , 230 , 250 , 0   , 312} ,
  /*11*/ {0 , 200 , 200 , 200 , 200 , 200 , 450 , 280 , 255 , 200 , 312 , 0}
};

int NODES = 12; // NODES = cities + 1, because you travel back to start node
