#ifndef SOUNDEX_H
#define SOUNDEX_H

#include "Soundex.h"
#include <ctype.h>
#include <string.h>
 #include <ctype.h>

char getsoundexarray(const char char_array[], size, char c);
char getsoundexarray(const char_array[], char c)
{
    for (int i=0;i<size; i++)
     {
      if (char_array[i]==c)
       return char_array[size-1];
      else 
       return '0';
     }
}
char getSoundexCode(char c) {
    c = toupper(c);
    const char char_1[]={'B','F','P','V','1'};
    const char char_2[]={'C','G','J','K','Q','S','X','Z','2'};
    const  char char_3[]={ 'D','T','3'};
    const char char_4[]={'L','4'};
    const  char char_5[]={'M','N','5'};
    const char char_6[]={'R','6'};
    return getsoundexarray
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
