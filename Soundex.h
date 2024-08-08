#ifndef SOUNDEX_H
#define SOUNDEX_H

#include "Soundex.h"
#include <ctype.h>
#include <string.h>

char getSoundexCode(char c) {
    c = toupper(c);
    char retyrn_c;
    return_c=(c=='B'||c=='F'||c=='P'||c=='V'||c=='b'||c=='f'||c=='p'||c=='v')?'1':
              (c=='C'||c=='c'||c=='G'||c=='g'||c=='J'||c=='j'||c=='K'||c=='k'||c=='Q'||c=='q'||c=='S'||c=='s'||c=='X'||c=='x'||c=='Z'||c=='z')?'2':
               (c=='D'||c=='T'||c=='d'||c=='t')?'3':
                (c=='L'||c=='l')?'4':(c=='M'||c=='m'||c=='N'||c=='n')?'5':(c=='R'||c=='r')?'6':'0';
                 
    /*if(c=='B'||c=='F'||c=='P'||c=='V'||c=='b'||c=='f'||c=='p'||c=='v')
        return '1';
    if (c=='C'||c=='c'||c=='G'||c=='g'||c=='J'||c=='j'||c=='K'||c=='k'||c=='Q'||c=='q'||c=='S'||c=='s'||c=='X'||c=='x'||c=='Z'||c=='z')
        return '2';
    if(c=='D'||c=='T'||c=='d'||c=='t')
        return '3';
    if(c=='L'||c=='l')
        return '4';
    if(c=='M'||c=='m'||c=='N'||c=='n')
        return '5';
     if(c=='R'||c=='r')
        return '6';
    return '0';*/
   /* switch (c) {
        case 'B': case 'F': case 'P': case 'V': return '1';
        case 'C': case 'G': case 'J': case 'K': case 'Q': case 'S': case 'X': case 'Z': return '2';
        case 'D': case 'T': return '3';
        case 'L': return '4';
        case 'M': case 'N': return '5';
        case 'R': return '6';
        default: return '0'; // For A, E, I, O, U, H, W, Y
    }*/
    return return_c;
}

void generateSoundex(const char *name, char *soundex) {
    int len = strlen(name);
    soundex[0] = toupper(name[0]);
    int sIndex = 1;

    for (int i = 1; i < len && sIndex < 4; i++) {
        char code = getSoundexCode(name[i]);
        if (code != '0' && code != soundex[sIndex - 1]) {
            soundex[sIndex++] = code;
        }
    }

    while (sIndex < 4) {
        soundex[sIndex++] = '0';
    }

    soundex[4] = '\0';
}

#endif // SOUNDEX_H
