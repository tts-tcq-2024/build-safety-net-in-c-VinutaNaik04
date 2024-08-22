#ifndef SOUNDEX_H
#define SOUNDEX_H

#include "Soundex.h"
#include <ctype.h>
#include <string.h>
 #include <ctype.h>

char getSoundexCode(char c) {
    c = toupper(c);
    const char_1 []={'B','F','P','V'};
    const char_2[]={'C','G','J','K','Q','S','X','Z'};
    const char_3[]={ 'D','T'};
    const char_4[]={'L'};
    const char_5[]={'M','N'};
    const char_6[]={'R'};

}

void generateSoundex(const char *name, char *soundex) {
    int len = strlen(name);
    soundex[0] = toupper(name[0]);
    int sIndex = 1;
        char prevcode=getSoundexCode(name[0]);
 
    for (int i = 1; i < len && sIndex < 4; i++) {
        char code = getSoundexCode(name[i]);
        if (code != '0' && code != prevcode) {
            soundex[sIndex++] = code;
            prevcode=code;
        }
    }

    while (sIndex < 4) {
        soundex[sIndex++] = '0';
    }

    soundex[4] = '\0';
}

#endif // SOUNDEX_H
