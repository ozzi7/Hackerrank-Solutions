/* See https://www.geeksforgeeks.org/avl-tree-set-1-insertion/ */

/* node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */


// A utility function to get maximum of two integers
int max(int a, int b);
 
// A utility function to get the ht of the tree
int ht(struct node *N)
{
    if (N == NULL)
        return -1;
    return N->ht;
}
 
// A utility function to get maximum of two integers
int max(int a, int b)
{
    return (a > b)? a : b;
}
 
/* Helper function that allocates a new node with the given val and
    NULL left and right pointers. */
struct node* newnode(int val)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->val   = val;
    node->left   = NULL;
    node->right  = NULL;
    node->ht = 0;  // new node is initially added at leaf
    return(node);
}
 
// A utility function to right rotate subtree rooted with y
// See the diagram given above.
struct node *rightRotate(struct node *y)
{
    struct node *x = y->left;
    struct node *T2 = x->right;
 
    // Perform rotation
    x->right = y;
    y->left = T2;
 
    // Update hts
    y->ht = max(ht(y->left), ht(y->right))+1;
    x->ht = max(ht(x->left), ht(x->right))+1;
 
    // Return new root
    return x;
}
 
// A utility function to left rotate subtree rooted with x
// See the diagram given above.
struct node *leftRotate(struct node *x)
{
    struct node *y = x->right;
    struct node *T2 = y->left;
 
    // Perform rotation
    y->left = x;
    x->right = T2;
 
    //  Update hts
    x->ht = max(ht(x->left), ht(x->right))+1;
    y->ht = max(ht(y->left), ht(y->right))+1;
 
    // Return new root
    return y;
}
 
// Get Balance factor of node N
int getBalance(struct node *N)
{
    if (N == NULL)
        return -1;
    return ht(N->left) - ht(N->right);
}
 
// Recursive function to insert a val in the subtree rooted
// with node and returns the new root of the subtree.
struct node* insert(struct node* node, int val)
{
    /* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return(newnode(val));
 
    if (val < node->val)
        node->left  = insert(node->left, val);
    else if (val > node->val)
        node->right = insert(node->right, val);
    else // Equal vals are not allowed in BST
        return node;
 
    /* 2. Update ht of this ancestor node */
    node->ht = 1 + max(ht(node->left),
                           ht(node->right));
 
    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
    int balance = getBalance(node);
 
    // If this node becomes unbalanced, then
    // there are 4 cases
 
    // Left Left Case
    if (balance > 1 && val < node->left->val)
        return rightRotate(node);
 
    // Right Right Case
    if (balance < -1 && val > node->right->val)
        return leftRotate(node);
 
    // Left Right Case
    if (balance > 1 && val > node->left->val)
    {
        node->left =  leftRotate(node->left);
        return rightRotate(node);
    }
 
    // Right Left Case
    if (balance < -1 && val < node->right->val)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
 
    /* return the (unchanged) node pointer */
    return node;
}