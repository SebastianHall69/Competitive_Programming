/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tree.h
 * Author: sebas
 *
 * Created on June 4, 2020, 6:00 PM
 */

#ifndef TREE_H
#define TREE_H

#include <algorithm>

class Tree {
    //Node structure for tree
    struct Node {
        //Fields
        Node *left, *right;
        int m_key, m_height;
        
        //Constructor
        Node(int k) {
            left = nullptr;
            right = nullptr;
            m_key = k;
            m_height = 1;
        }
        
        int balance() {//Returns right height - left height
            return right->height() - left->height();
        }
        
        int height() {
            return (this) ? this->m_height : 0;
        }
        
        void updateHeight() {
            m_height = std::max(this->right->height(), this->left->height()) + 1;
        }
    };
    
private:
    //Fields
    Node *root;
    int size;
    
    //Insertion
    Node* place(Node *node, int key);
    
    //Traversal
    void inorder(Node *) const;
    void preorder(Node *) const;
    void postorder(Node *) const;
    
    //Deletion
    void deleteAll(Node *);
    Node* deleteNode(Node *, int key);
    
    //Rotation
    Node* balance(Node *);
    Node* rotateLeft(Node *);
    Node* rotateRight(Node *);
    
    
public:
    Tree();
    ~Tree();
    void insert(int);
    void erase(int);
    int getSize();
    
    //Calls traversal from root node
    void inOrderTraversal() const;
    void preOrderTraversal() const;
    void postOrderTraversal() const;
    void levelOrderTraversal() const;
    
};

#endif /* TREE_H */

