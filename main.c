#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

#include "libtrie.h"

int main(){
    
    char test = 'z';
	
	int res = convCharToInt(test) ;
	char reslt = convIntToChar(res) ;
	
	trie_t t ;
	trie_init(&t) ;
	
	trie_destroy(&t) ;
    
    
    int foo = (int)"nonsense" ;
	
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
