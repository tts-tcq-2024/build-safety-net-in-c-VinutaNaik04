#include <gtest/gtest.h>
#include "Soundex.h"

/*TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AXxxx", soundex);
 ASSERT_EQ(soundex,"A200");
}*/
TEST(SoudexTestsuite, BasicSoundexcode)
{
 char soundex[5];
  generateSoundex("AXxxx", soundex);
 ASSERT_EQ(std :: string(soundex),"A200");
}
