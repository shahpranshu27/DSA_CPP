#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BSTnode {
    char word[128], meaning[256];
    struct BSTnode *left, *right; // left & right node
};

struct BSTnode *root = NULL;
//root node
struct BSTnode * createNode(char *word, char *meaning) {
    struct BSTnode *newnode;
    newnode = (struct BSTnode *)malloc(sizeof(struct BSTnode));
    strcpy(newnode->word, word);
    strcpy(newnode->meaning, meaning);
    newnode->left = newnode->right = NULL;
    return newnode;
}

void insert(char *word, char *meaning) {
    struct BSTnode *parent = NULL, *current = NULL, *newnode = NULL;
    int t = 0;
    if (!root) {
            root = createNode(word, meaning);
	   		printf("Element Inserted !!");
            return;
    }
    for (current = root; current !=NULL;
       current = (t > 0) ? current->right : current->left) {
            t = strcasecmp(word, current->word); //strcasecmp is used to compare 2 strings,avoiding case sensitive
            if (t == 0) {
                    printf("Duplicate entry !! \n");
                    return;
            }
            parent = current;
            
    }
    newnode = createNode(word, meaning);
    t > 0 ? (parent->right = newnode) : (parent->left = newnode);
    return;
}

void deleteNode(char *str) {
    struct BSTnode *parent = NULL, *current = NULL, *temp = NULL;
    int flag = 0, t = 0; // flag is used for true(1) and false(0)
    if (!root) {
            printf("BST is not prestent !!\n");
            return;
    }
    current = root;
    while (1) {
            t = strcasecmp(current->word, str);
            if (t == 0)
            	printf("Element Deleted !!");
                    break;
            flag = t;
            parent = current;
            current = (t > 0) ? current->left : current->right;
            if (current == NULL)
                    return;
    }
    // deleting leaf node 
    if (current->right == NULL) {
            if (current == root && current->left == NULL) {
                    free(current);
                    root = NULL;
                    return;
            } else if (current == root) {
                    root = current->left;
                    free (current);
                    return;
            }

            flag > 0 ? (parent->left = current->left) :
                            (parent->right = current->left);
    } else {
            // deleting node with single child 
            temp = current->right;
            if (!temp->left) {
                    temp->left = current->left;
                    if (current == root) {
                            root = temp;
                            free(current);
                            return;
                    }
                    flag > 0 ? (parent->left = temp) :
                                    (parent->right = temp);
            } else {
                    // deleting node with two children 
                    struct BSTnode *successor = NULL;
                    while (1) {
                            successor = temp->left;
                            if (!successor->left)
                                    break;
                            temp = successor;
                    }
                    temp->left = successor->right;
                    successor->left = current->left;
                    successor->right = current->right;
                    if (current == root) {
                            root = successor;
                            free(current);
                            return;
                    }
                    (flag > 0) ? (parent->left = successor) :
                                    (parent->right = successor);
            }
    } 
    free (current);
    return;
}

void findElement(char *str) {
    struct BSTnode *temp = NULL;
    int flag = 0, t = 0;
    if (root == NULL) {
            printf("Please enter some words with their meanings !! \n");
            return;
    }
    temp = root;
    while (temp) {
            if ((t = strcasecmp(temp->word, str)) == 0) {
                    printf("Word   : %s", str);
                    printf("Meaning: %s", temp->meaning);
                    flag = 1;
                    printf("Element present !!");
                    break;
            }
            temp = (t > 0) ? temp->left : temp->right;
    }
    if (!flag)
            printf("Searched Element is not there \n");
    return;
}

void inorderTraversal(struct BSTnode *myNode) {
    if (myNode) {
            inorderTraversal(myNode->left);
            printf("Word    : %s", myNode->word);
            printf("Meaning : %s", myNode->meaning);
            printf("\n");
            inorderTraversal(myNode->right);
    }
    return;
}

int main() {
    int ch;
    char str[100], meaning[300];
    while (1) {
            printf("\n1. Insertion\t2. Deletion\n");
            printf("3. Searching\t4. Traversal\n");
            printf("5. Exit\nEnter ur choice:");
            scanf("%d", &ch);
            getchar();
            switch (ch) {
                    case 1:
                            printf("Enter the word to insert :");
                            fgets(str, 100, stdin);
                            printf("Meaning:");
                            fgets(meaning, 300, stdin);
                            insert(str, meaning);
                            break;
                    case 2:
                            printf("Enter the word to delete :");
                            fgets(str, 100, stdin);
                            deleteNode(str);
                            break;
                    case 3:
                            printf("Enter the word to search :");
                            fgets(str, 100, stdin);
                            findElement(str);
                            break;
                    case 4:
                            inorderTraversal(root);
                            break;
                    case 5:
                            exit(0);
                    default:
                            printf("Enter valid option from 1 to 5 \n");
                            break;
            }
    }
    return 0;
  }
