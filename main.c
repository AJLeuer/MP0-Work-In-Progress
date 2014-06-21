#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

#include "libtrie.h"

int main(){
    
    int i = 0 ;
    char c = (char)-1 ;
    trie_t tr ;
    trie_init(&tr) ;
    
    const char * str = "abcxyz" ;
    const char * str1 = "adam" ;
    
    trie_add(&tr, str) ;
    trie_add(&tr, str1) ;
    
    int foo = 3 ;
    
    //todo uncomment
    /*
    trie_t test;
    trie_init(&test);
    trie_add(&test,"hello");
    char *str=trie_longest_prefix(&test,"helloworld");
    assert(!strcmp(str,"hello"));
    free(str);
    queue_t *ret=trie_all_matches(&test,"h");
    assert(queue_size(ret)==1);
    queue_destroy(ret,1);
    free(ret);
    trie_destroy(&test);
    puts("Passed all tests (you should add more tests yourself)");
    return 0;
    */
    return 0 ;
}
