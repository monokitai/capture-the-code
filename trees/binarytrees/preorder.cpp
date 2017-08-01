
#include <iostream>

struct node
{
    int data;
    node* left;
    node* right;
};

void insert(node *root, int value){
  if(root != NULL){
    if(root->data > value && root->right != NULL){
      insert(root->right, value);
    }
    else if(root->data > value && root->right == NULL){
      struct node *neu = (struct node *)malloc(sizeof(struct node));
      neu->data = value;
      root->left = neu;
    }
    else if(root->data < value && root->left != NULL){
      insert(root->left, value);
    }
    else if(root->data < value && root->left == NULL){
      struct node *neu = (struct node *)malloc(sizeof(struct node));
      neu->data = value;
      root->right = neu;
    }
  }
  else{
    struct node *neu = (struct node *)malloc(sizeof(struct node));
    neu->data = value;
    root = neu;
  }
}

void preOrder(node *root) {
    if(root != NULL && root->data >= 1 && root->data <= 500){
        std::cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}



int main(){

  struct node *tree = (struct node *)malloc(sizeof(struct node));
  insert(tree, 12);
  insert(tree, 11);
  insert(tree, 43);

  preOrder(tree);
  
  return 0;
}

