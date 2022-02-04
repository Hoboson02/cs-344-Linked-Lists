#include "llist.h"

// Write the command line parser first. Make sure you're getting the right numbers with the right commands. You can either parse the whole command into some structure first, or you can just run list commands as you process argv.


int main( int argc, char * argv[]) {

	char *s = argv[0];

	int x = atoi(s);

	printf("%d\n", x * 2);  // 32
}


// Write node_alloc() to allocate a node with a given value.



// Write node_free() to free the node.



// Get llist_print() in place. Maybe test it by allocating a quick node to your head pointer and passing it in.



// Write llist_insert_head() and get it working.



// Followed by the other ones.