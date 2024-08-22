#include <gtest/gtest.h>
#include "Soundex.h"
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AXAAA", soundex);
  EXPECT_STREQ(soundex,"A200");
}

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits1)
{
  char soundex[5];
  generateSoundex("X0", soundex);
 EXPECT_STREQ(soundex,"X200");
}


TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits2)
{
  char soundex[5];
  generateSoundex("ZQOP", soundex);
 EXPECT_STREQ(soundex,"Z210");
}


TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits3)
{
  char soundex[5];
  generateSoundex("ASDSD", soundex);
 EXPECT_STREQ(soundex,"A232");
}


TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits4)
{
  char soundex[5];
  generateSoundex("12345", soundex);
 EXPECT_STREQ(soundex,"1000");
}
