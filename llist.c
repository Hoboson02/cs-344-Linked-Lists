#include "llist.h"

// Write the command line parser first. Make sure you're getting the right numbers with the right commands. You can either parse the whole command into some structure first, or you can just run list commands as you process argv.


int main( int argc, char * argv[]) {
	for (int i = 1; i < argc; ++i) {
        // printf("argv[%d]: %s\n", i, argv[i]);
		if (strcmp(argv[i], "ih") == 0) {
			printf("%s\n", "ih" );
		}
		else if (strcmp(argv[i], "it") == 0) {
			printf("%s\n", "it" );
		}
		else if (strcmp(argv[i], "dh") == 0) {
			printf("%s\n", "dh" );
		}
		else if (strcmp(argv[i], "f") == 0) {
			printf("%s\n", "f" );
		}
		else if (strcmp(argv[i], "p") == 0) {
			printf("%s\n", "p" );
		}
		else {
			 printf("input invalid\n");
		}
		return 0;
      
    }
}


// Write node_alloc() to allocate a node with a given value.



// Write node_free() to free the node.



// Get llist_print() in place. Maybe test it by allocating a quick node to your head pointer and passing it in.



// Write llist_insert_head() and get it working.



// Followed by the other ones.