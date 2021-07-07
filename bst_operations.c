#include <stdio.h>
#include <stdlib.h>

// Creating structure of node of tree
struct node
{
    int val;
    struct node *right, *left;
};

// Inserting a node using recursion by checking the parent node
// Create root if tree does not exist
void insert(struct node **root, struct node *cur)
{
    if(!(*root))
    {
        *root = cur;
        return;
    }
    if(cur->val<=(*root)->val)
        insert(&(*root)->left,cur);
    else if(cur->val>(*root)->val)
        insert(&(*root)->right, cur);
}

// Preorder traversal using recursion
// First we traverse towards left, then towards right for root parent node and its successors
void Preorder(struct node *root)
{
    printf("%d ",root->val);
    if(root->left)
        Preorder(root->left);
    if(root->right)
        Preorder(root->right);
}

// Inorder traversal using recursion
// First we traverse towards left, then towards right for any parent node
void Inorder(struct node *root)
{
    if(root->left)
        Inorder(root->left);
    printf("%d ",root->val);
    if(root->right)
        Inorder(root->right);
}

// Postorder traversal using recursion
// First we traverse towards right, then towards left for root parent node and its successors
void Postorder(struct node *root)
{
    if(root->left)
        Postorder(root->left);
    if(root->right)
        Postorder(root->right);
    printf("%d ",root->val);
}


int main()
{
    int ch;
    struct node *curr, *root;
    // clrscr();
    root = NULL;
    do
    {
        // Using switch case to create menu
        // Keep on running program until user specifies option 5
        printf("\n\n\t1. Insert");
        printf("\n\t2. Postorder");
        printf("\n\t3. Inorder");
        printf("\n\t4. Preorder");
        printf("\n\t5. Exit");
        printf("\n\tEnter a Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: // Creating node using dynamic memory allocation
                    curr = (struct node *)malloc(sizeof(struct node));
                    curr->left = curr->right = NULL;
                    printf("\n\tEnter a No ");
                    scanf("%d",&curr->val);
                    insert(&root,curr);
                    break;
            case 2:
                    printf("\n\tPreorder Traversal : ");
                    Preorder(root);
                    break;
            case 3:
                    printf("\n\tInorder Traversal : ");
                    Inorder(root);
                    break;
            case 4:
                    printf("\n\tPostrder Traversal : ");
                    Postorder(root);
                    break;
            case 5: // Terminate the program
                    exit(0);
            default:
                    printf("\n\tInvalid Option!");
        }
    }while(ch!=5);

    // getch();
    return 0;
}
