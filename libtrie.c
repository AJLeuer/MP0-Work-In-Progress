#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "libtrie.h"
#include "../lab0/libqueue.h"

void trie_init(trie_t *t)
{
    t->key = (char)-1 ;
    t->child = NULL ;
    t->next = NULL ;
	t->strsEndingHere = 0 ;
}

void trie_destroy(trie_t *t)
{
    if ((t->child != NULL) || (t->next != NULL)) {
        /* Recursively destroy each one and its descendents and linked nexts */
        if (t->child != NULL) {
            trie_destroy(t->child) ;
            free(t->child) ;
        }
        if (t->next != NULL) {
            trie_destroy(t->next) ;
            free(t->next) ;
        }
	}
}

void trie_add(trie_t * t, const char * str)
{
    size_t length = strlen(str) ;
    if (length == 0) {
		/* we're ending with this node, no need to init child.
		   Just add the key, and we're done */
        trie_addkey(&(*t), (char)0) ;
    }
    else { //if (length > 0)  /* if there are still chars left in the string... */
        char key = str[0] ;
        
		/* add the key to this node */
        trie_addkey(&(*t), key) ;
		
		/* init its child */
		if (t->child == NULL) {
            t->child = (trie_t*)malloc(sizeof(trie_t)) ;
            trie_init(t->child) ;
        }
        
        /* ... then hand off the rest to its child */
        const char * nextstr = getSubstring(str, 1) ;
        trie_add(t->child, nextstr) ;
    }
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

void trie_addkey(trie_t * t, char key) {
    if (t->key == key) {
        /* we don't need to add anything here.
		   but if this is already a terminating node, and our new string is terminating here, incr strsEndingHere */
		if (key == (char)0) {
			t->strsEndingHere++ ;
		}
    }
	/* if this node hasn't been written to yet */
    else if (t->key == (char)-1) {
        t->key = key ;
		/* if the string ends here, incr strsEndingHere */
		if (key == (char)0) {
			t->strsEndingHere++ ;
		}
    }
    else { //if there's already a different value in t->key
		
		//init t->next
        t->next = (trie_t*)malloc(sizeof(trie_t)) ;
        trie_init(t->next) ;
        t->next->child = (trie_t*)malloc(sizeof(trie_t)) ;
        trie_init(t->next->child) ;
		
        //then give it to t->next and store it there (recursively)
        trie_addkey(t->next, key) ;
    }
}

char getCharAtIndex(const char * str, size_t index) {
	char c = str[index] ;
	return c ;
}

const char * getSubstring(const char * str, size_t startingIndex) {
    size_t size = (unsigned)(strlen(str) - startingIndex) ;
    char temp[size + 1] ; //+1 for '\0' (terminating char)
    for (size_t i = 0 ; i < size ; i++) {
        temp[i] = getCharAtIndex(str, (i + startingIndex)) ;
    }
    temp[size] = '\0' ;
    char * ret = (char*)malloc((size + 1) * sizeof(char)) ;
    strcpy(ret, temp) ;
    return ret ;
}

/*
int convCharToInt(char c) {
    int r = (int)c ;
    return r ;
}
*/
/*
char convIntToChar(int n) {
    char c = (char)n ;
    return c ;
}
*/

const char * toUpper(const char * in) {
    
    size_t length = strlen(in) ;
    char temp[length + 1] ;
    
    for (size_t i = 0 ; i < length; i++) {
        temp[i] = toupper(in[i]) ;
    }
    
    temp[length] = '\0' ;
    
    char * out = (char*)malloc((length + 1) * sizeof(char)) ;
    strcpy(out, temp) ;
    return out ;
}

const char * toLower(const char * in) {
    size_t length = strlen(in) ;
    char temp[length + 1] ;
    
    for (size_t i = 0 ; i < length; i++) {
        temp[i] = tolower(in[i]) ;
    }
    
    temp[length] = '\0' ;
    
    char * out = (char*)malloc((length + 1) * sizeof(char)) ;
    strcpy(out, temp) ;
    return out ;
}



