#include "TestU01/unif01.h"
#include "TestU01/ufile.h"
#include "TestU01/scatter.h"

int main (void) 
{
   unif01_Gen *gen;
   gen = ufile_CreateReadText ("excel.pts", 100000);
   scatter_PlotUnif (gen, "excel");
   ufile_DeleteReadText (gen);
   return 0;
}
