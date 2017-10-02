#include <stdio.h>
#include <string.h>

#include "stringy.h"

char* our_strncpy(char* dest, char* source, int n) {
  for (; n > 0; n--) {
    *dest++ = *source++;
  }
}

char * our_strcat( char *dest, char *source ) {
  while (*dest) {
    dest++;
  }

  while (1) {
    char c = *source;
    if (!c) {
      *dest++ = 0;
      break;
    }

    *dest++ = c;
  }
}

int our_strlen( char * s) {
}

int our_strcmp( char *s1, char *s2 ) {
}

char * our_strchr( char *s, char c ) {
}

char * our_strstr( char *s1, char * s2 ) {
  while (*s1 && *s2) {
    char c = *s1;
    char d = *s2;
    if (*s1 == *s2) {
      char* s1_start = s1;
      char* s2_start = s2;

      do {
	s1++;
	s2++;
      } while (*s2 && *s1 == *s2);

      if (!*s2) {
	return s1_start;
      }

      s1 = s1_start;
      s2 = s2_start;
    }

    s1++;
    s2++;
  }
}

int main() {
  return 0;
}
