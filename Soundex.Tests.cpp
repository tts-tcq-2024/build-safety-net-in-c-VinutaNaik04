#include <gtest/gtest.h>
#include "Soundex.h"
TEST(SoundexTestsuite, BasicSoundexCode) {
    char soundex[5];
    generateSoundex("A0V0", soundex);
    ASSERT_EQ(std::string(soundex), "A200");
}

TEST(SoundexTestsuite, IgnoresNonAlphabeticCharacters) {
    char soundex[5];
    generateSoundex("A1B2C3", soundex);
    ASSERT_EQ(std::string(soundex), "A123");
}
