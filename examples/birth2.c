
#include "TestU01/unif01.h"
#include "TestU01/ulcg.h"
#include "TestU01/sres.h"
#include "TestU01/swrite.h"
#include "TestU01/smarsa.h"

int main (void)
{
   unif01_Gen *gen;
   sres_Poisson *res;
   swrite_Basic = FALSE;

   gen = ulcg_CreateLCG (2147483647, 397204094, 0, 12345);
   res = sres_CreatePoisson ();

   smarsa_BirthdaySpacings (gen, res, 1, 1000, 0, 10000, 2, 1);
   /* .... Examine or postprocess res */

   smarsa_BirthdaySpacings (gen, res, 1, 10000, 0, 1000000, 2, 1);
   /* .... Examine or postprocess res */

   sres_DeletePoisson (res);
   ulcg_DeleteGen (gen);
   return 0;
}
