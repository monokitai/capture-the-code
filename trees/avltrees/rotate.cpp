
#include "avltree.hpp"
#include <iostream>

struct node *rightrotate(struct node *avl){
  struct node *l = avl->left;
  struct node *r = avl->right;

  //rotation
  l->right = avl;
  avl->left = r;

  return l;
}

struct node *leftrotate(struct node *avl){
  struct node *r = avl->right;
  struct node *l = avl->left;

  r->left = avl;
  avl->right = l;

  return r;
}

int main(){

  struct node *avl = (struct node *)malloc(sizeof(struct node));
  
  
  return 0;
}
