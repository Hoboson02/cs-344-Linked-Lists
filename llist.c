#include "llist.h"

// Write the command line parser first. Make sure you're getting the right numbers with the right commands. You can either parse the whole command into some structure first, or you can just run list commands as you process argv.

// int malloc_this(user_input)
// {
//     int *p = malloc(sizeof(int) * 10);

//     *p = user_input; //Setting 0th index to 12. Same as p[0] = 12

//     printf("%p\n", p);
//     printf("%p\n", (p + 1));

//     free(p);
    
// }

void llist_insert_head(struct node **head, struct node *n) {

}

struct node *llist_delete_head(struct node **head) {

}

void llist_insert_tail(struct node **head, struct node *n) {

}

void llist_print(struct node *head) {

}

void llist_free(struct node **head) {

}

struct node * node_alloc(int value) {
	struct node *nodes = malloc(sizeof(struct node));
	return nodes;
}

void node_free(struct node *n) {

}



int main( int argc, char * argv[]) {
	for (int i = 1; i < argc; ++i) {
		struct node* head = NULL;
		if (strcmp(argv[i], "ih") == 0) {
			char *s = argv[++i];
			int x = atoi(s);
			struct node *n = node_alloc(x);
			llist_insert_head(&head, n);
			printf("%s\n", "ih" );
		}
		else if (strcmp(argv[i], "it") == 0) {
			char *s = argv[++i];
			int x = atoi(s);
			struct node *n = node_alloc(x);
			llist_insert_tail(&head, n);
			printf("%s\n", "it" );
		}
		else if (strcmp(argv[i], "dh") == 0) {
			llist_delete_head(&head);
			printf("%s\n", "dh" );
		}
		else if (strcmp(argv[i], "f") == 0) {
			llist_free(&head);
			printf("%s\n", "f" );
		}
		else if (strcmp(argv[i], "p") == 0) {
			llist_print(head);
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