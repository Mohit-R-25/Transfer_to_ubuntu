#include<stdio.h>
#include<stdlib.h>
struct node{

    int data;
    struct node *left;
    struct node *right;
};
struct node *insert(struct node *p, int data){
    if(p==NULL){
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
    }
    else{
    if(data<p->data){
        p->left=insert(p->left, data);
    }
    else{
        p->right=insert(p->right, data);
    }
    return p;
}
int search(struct node *p, int key){
    if(p==NULL){
        return 0;
    }
    else{
        if(key<p->data){
            return search(p->left, key);
        }
        else if(key>p->data){
            return search(p->right, key);
        }
        else{
            return 1;
        }
    }
}
struct node *findmin(struct node *root){
        while(root->left!=NULL){
            root = root->left;
        }
        return root;
    
}
struct node *deletenode(struct node *root, int key){
    if(root==NULL){

        return root
    }
    else if(key<root->data){
        deletenode(root->left, key);
    }
    else if(key>root->data){
        deletenode(root->right, key);
    }
    else{
    if(root->left==NULL){
        struct node *temp=root->right;
        free(root);
        return temp;
    }
    else if(root->right==NULL){
        struct node *temp=root;
        free(root);
        return temp;
    }
    else if(root->right==NULL&&root->left==NULL){
        struct node *temp=root;
        free(root);
        return NULL;
    }
    else{
        struct node *temp=findmin(root->right);
        root->data=temp->data;
        root->right=deletenode(temp, key);
    }
    }
}
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
       
      inorder(root->right);
    }
}

int main(){
    struct node *root=NULL;
    int c;
    while(1){
        printf("1=insert, 2=delete, 3=search, 4=display, 5=");
        scanf("%d", &c);
        switch(c){
            case 1:
            int v;
            printf("ENter value to be inserted:\n");
            scanf("%d", &v);
            root = insert(root, v);
            break;
            case 2:
            int d;
            printf("Enter value to delete:\n");
            scanf("%d", &d);
            deletenode(root, d);
            break;
            case 3:
            int value;
            printf("Enter value to be searched:\n");
            scanf("%d", &value);
            search(root, value);
            break;
            case 4:
            inorder(root);
            printf("\n");
            case 5:
            exit(0);

        }
    }
}