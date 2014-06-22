#ifndef _TRIE_H
#define _TRIE_H

#include "../lab0/libqueue.h"

typedef struct trie_t {
    
    struct trie_t * next ;
    struct trie_t * child ;
    char key ;
	
	/* if this is terminating, and there is more than one string
	 that ends here, this is the number of strings ending here */
	unsigned strsEndingHere ;
} trie_t;

void trie_init(trie_t *t);
void trie_destroy(trie_t *t);

void trie_add(trie_t *t, const char *str);
int trie_freq_count(trie_t *t, const char *prefix);
queue_t *trie_all_matches(trie_t *t, const char *prefix);
char *trie_most_freq_match(trie_t *t, const char *prefix);
char *trie_longest_prefix(trie_t *t, const char *str);
void trie_print(trie_t *t);

trie_t * trie_addkey(trie_t * t, char key) ;
char getCharAtIndex(const char * str, size_t index) ;
const char * getSubstring(const char * str, size_t startingIndex) ;
//int convCharToInt(char c) ;
//char convIntToChar(int n) ;
const char * toUpper(const char * in) ;
const char * toLower(const char * in) ;

#endif
