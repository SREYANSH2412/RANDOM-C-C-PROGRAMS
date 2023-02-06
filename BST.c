# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

	   typedef struct bst {
		   int data;
		   struct bst *lchild, *rchild;
	   } node;

	   void insert(node *, node *);
	   void inorder(node *);
	   void preorder(node *);
	   void postorder(node *);
	   node* search(node *, int);
	   void smallest(node *root)
      {
         while(root != NULL && root->lchild != NULL)
          {
            root = root->lchild;
          }
          printf("\nSmallest value is %d\n", root->data);
      }
      void largest(node *root)
      {
         while (root != NULL && root->rchild != NULL)
         {
            root = root->rchild;
          }
          printf("\nLargest value is %d", root->data);
      }

	   void main() {
		   int choice,n,i,key;
		   node *newnode,*root,*tmp,*parent;
		   node *getnode();
		   parent = NULL;
		   root = NULL;
		   printf("\nProgram For Binary Search Tree ");
		   do {
			   printf("\n1.Create\n2.Traversal and to find max and min node\n3.Search\n4.Exit");
			   printf("\nEnter your choice :");
			   scanf("%d",&choice);

			   switch (choice) {
			   case 1:
				   printf("Number of nodes : ");
				   scanf("%d", &n);
				   printf("\nEnter the elements : ");
				   for (i = 0; i<n; i++)
				   {
					   newnode = getnode();
					   scanf("%d", &newnode->data);

					   if (root == NULL) 
						   root = newnode;
					   else
						   insert(root, newnode);
				   }
				   break;

			   case 2:
				   if (root == NULL)
					   printf("Tree Is Not Created");
				   else {
					   printf("\nThe Inorder display : ");
					   inorder(root);
					   printf("\nThe Preorder display : ");
					   preorder(root);
					   printf("\nThe Postorder display : ");
					   postorder(root);
					   
					   largest(root);
                       smallest(root);
				   }

				   break;

			   case 3:
				   printf("\nEnter Element to be searched :");
				   scanf("%d", &key);
				   tmp = search(root, key);
				   if (tmp)
					   printf("\n %d present in BST", tmp->data);

				   else
					   printf("\n %d not present in BST", key);
				   break;

			   default:
				   printf("\n exit");
				   exit(0);

			   }
		   } while (choice != 5);
	   }

	   node *getnode() {
		   node *temp;
		   temp = (node *)malloc(sizeof(node));
		   temp->lchild = NULL;
		   temp->rchild = NULL;
		   return temp;
	   }

	   void insert(node *root, node *newnode)
	   {
		   if (newnode->data < root->data)
		   {
			   if (root->lchild == NULL)
				   root->lchild = newnode;
			   else
				   insert(root->lchild, newnode);
		   }

		   if (newnode->data > root->data)
		   {
			   if (root->rchild == NULL)
				   root->rchild = newnode;
			   else
				   insert(root->rchild, newnode);
		   }
	   }

	   node *search(node *root, int key)
	   {
		   node *temp;
		   temp = root;
		   if (root == NULL)
		   {
			   printf("\n BST is Empty ");
			   return root;
		   }
		   while (temp != NULL)
		   {
			   if (temp->data == key)
				   return temp;
			   if (key < temp->data)
				   temp = temp->lchild;
			   else
				   temp = temp->rchild;
		   }
		   return NULL;
	   }

	   void inorder(node *temp) {
		   if (temp != NULL) {
			   inorder(temp->lchild);
			   printf("%d ", temp->data);
			   inorder(temp->rchild);
		   }
	   }

	   void preorder(node *temp) {
		   if (temp != NULL) {
			   printf("%d ", temp->data);
			   preorder(temp->lchild);
			   preorder(temp->rchild);
		   }
	   }

	   void postorder(node *temp) {
		   if (temp != NULL) {
			   postorder(temp->lchild);
			   postorder(temp->rchild);
			   printf("%d ", temp->data);
		   }
	   }