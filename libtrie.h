#ifndef _TRIE_H
#define _TRIE_H

#include "../lab0/libqueue.h"

typedef struct trie_t {
    struct trie_t * branches[26] ;
} trie_t;

void trie_init(trie_t *t);
void trie_destroy(trie_t *t);

void trie_add(trie_t *t, const char *str);
int trie_freq_count(trie_t *t, const char *prefix);
queue_t *trie_all_matches(trie_t *t, const char *prefix);
char *trie_most_freq_match(trie_t *t, const char *prefix);
char *trie_longest_prefix(trie_t *t, const char *str);
void trie_print(trie_t *t);

char getCharAtIndex(const char * str, unsigned index) ;
int convCharToInt(char c) ;
char convIntToChar(int n) ;
char * toUpper(char * in) ;

#endif
