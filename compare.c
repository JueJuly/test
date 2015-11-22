#include <math.h>

#define Max(a,b) ((a)>(b) ? (a) : (b))

#define Min(a,b) ((a)<(b) ? (a) : (b))

bool test_compare(int a, int b )
{
  if( a > b ){

    if( a == Max(a,b) ){
      return false;
    }else{
      return true;
    }

  }else{

    if( a == Min(a,b) ){
      return true;
    }else{
     return false;
     
    }

  }

}
