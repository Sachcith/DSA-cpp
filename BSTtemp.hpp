#ifndef BST_H
#define BST_H
#include "TreeNode.hpp"
// Binary Search Tree

template <class T>
class BST{
    private:
        TreeNode<T> *root;
    public:
        BST();
        void insert(T x);
        bool search(T x);
        void print();
        ~BST();
};

template <class T>
BST<T>::BST(){
    root = nullptr;
}

template <class T>
void BST<T>::insert(T x){
    if(root==nullptr){
        root = new TreeNode(x,nullptr,nullptr);
        return;
    }
    bool flag = true;
    TreeNode* temp=root;
    while(flag){
        while(temp->data>x && temp->right!=nullptr){
            temp = temp->right;
        }
        while(temp->data<=x && temp->left!=nullptr){
            temp = temp->left;
        }
        if(temp->data>x && temp->right==nullptr){
            temp->right=new TreeNode(x,nullptr,nullptr);
            flag = false;
        }
        if(temp->data<=x && temp->left==nullptr){
            temp->left=new TreeNode(x,nullptr,nullptr);
            flag = false;
        }
    }
    return;
}

template <class T>
void BST<T>::print(TreeNode* node){

}

template <class T>
bool BST<T>::search(T x){
    if(root==nullptr) return false;
    // Under development

    
}

#endif
