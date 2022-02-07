#include "llist.h"

// Write the command line parser first. Make sure you're getting the right numbers with the right commands. You can either parse the whole command into some structure first, or you can just run list commands as you process argv.

// Write llist_insert_head() and get it working.
void llist_insert_head(struct node **head, struct node *n) {
    n -> next = *head;
    *head = n;
}

struct node *llist_delete_head(struct node **head) {

}

void llist_insert_tail(struct node **head, struct node *n) {
	if (*head == NULL) {
		*head = n;
	}
}
// Get llist_print() in place. Maybe test it by allocating a quick node to your head pointer and passing it in.
void llist_print(struct node *head) {
	if (head != NULL) {
		printf(" %d ", head->value);
		struct node *next_node = head->next;

		while (next_node != NULL) {
			printf(" -> %d ", next_node->value);
			next_node = next_node->next;
		}
	}
	printf("\n");
}

void llist_free(struct node **head) {

}
// Write node_alloc() to allocate a node with a given value.
struct node * node_alloc(int value) {
	struct node *nodes = malloc(sizeof(struct node));
	nodes->value = value;
	nodes->next = NULL;
	return nodes;
}
// Write node_free() to free the node.
void node_free(struct node *n) {

}



int main( int argc, char * argv[]) {
	if(argc <2) {
		printf("Please input more than 2 arguments to continue");
	}

	struct node* head = NULL;
	for (int i = 1; i < argc; ++i) {
		if (strcmp(argv[i], "ih") == 0) {
			char *s = argv[++i];
			int x = atoi(s);
			struct node *n = node_alloc(x);
			llist_insert_head(&head, n);
			// printf("%s\n", "ih" );
		}
		else if (strcmp(argv[i], "it") == 0) {
			// char *s = argv[++i];
			// int x = atoi(s);
			// struct node *n = node_alloc(x);
			// llist_insert_tail(&head, n);
			printf("%s\n", "it" );
		}
		else if (strcmp(argv[i], "dh") == 0) {
			llist_delete_head(&head);
			// printf("%s\n", "dh" );
		}
		else if (strcmp(argv[i], "f") == 0) {
			llist_free(&head);
			// printf("%s\n", "f" );
		}
		else if (strcmp(argv[i], "p") == 0) {
			llist_print(head);
			// printf("%s\n", "p" );
		}
		else {
			 printf("input invalid\n");
		}
      
    }
}


















