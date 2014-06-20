#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "libtrie.h"
#include "../lab0/libqueue.h"

void trie_init(trie_t *t)
{
	
	for (size_t i = 0 ; i < 26 ; i++) {
		t->branches[i] = NULL ;
	}
}

void trie_destroy(trie_t *t)
{
	if (t->branches != NULL) {
		for (size_t i = 0 ; i < 26 ; i++) {
			if (t->branches[i] != NULL) {
				trie_destroy(t->branches[i]) ;
				t->branches[i] = NULL ;
			}
		}
	}
	free(t) ;
}

void trie_add(trie_t *t, const char *str)
{

}


int trie_freq_count(trie_t *t, const char *prefix)
{

    //todo
    return 0 ;
}

queue_t * trie_all_matches(trie_t *t, const char *prefix)
{
    //todo
    struct queue_t * q = (queue_t*)malloc(sizeof(queue_t));
    return q ;
}

char *trie_most_freq_match(trie_t *t, const char *prefix)
{
    //todo
    char * c = "ch" ;
    return c ;
}

char *trie_longest_prefix(trie_t *t, const char *str)
{
    //todo
    char * c = "ch" ;
    return c ;
}

void trie_print(trie_t *t)
{
    //todo
}

char getCharAtIndex(const char * str, unsigned index) {
	char c = str[index] ;
	return c ;
}

int convCharToInt(char c) {
	c = toupper(c) ;
	int r = (int)c ;
	r -= 65 ;
	return r ;
}

char convIntToChar(int n) {
	n += 65 ;
	char c = (char)n ;
    return c ;
}

char * toUpper(char * in) {
    
    size_t length = strlen(in) ;
    char temp[length] ;
    
    for (size_t i = 0 ; i < length; i++) {
        temp[i] = toupper(in[i]) ;
    }
    char * out = temp ;
    return out ;
}



