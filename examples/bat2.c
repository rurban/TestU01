#include "TestU01/gdef.h"
#include "TestU01/swrite.h"
#include "TestU01/bbattery.h"

int main (void)
{
   swrite_Basic = FALSE;
   bbattery_RabbitFile ("vax.bin", 1048576);
   return 0;
}
