#include "TestU01/ulcg.h"
#include "TestU01/unif01.h"
#include "TestU01/bbattery.h"

int main (void)
{
   unif01_Gen *gen;
   gen = ulcg_CreateLCG (2147483647, 16807, 0, 12345);
   bbattery_SmallCrush (gen);
   ulcg_DeleteGen (gen);
   return 0;
}
