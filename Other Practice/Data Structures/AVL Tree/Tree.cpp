#include "Tree.h"
#include <iostream>
#include <queue>
using std::cout;
using std::queue;
using std::max;

//Just sets root to nullptr
Tree::Tree() {
    root = nullptr;
}

Tree::~Tree() {
    deleteAll(root);
}

//Deletes nodes with post order transversal
void Tree::deleteAll(Node* node) {
    if(!node) return;
    
    deleteAll(node->left);
    deleteAll(node->right);
    delete node;
}

void Tree::erase(int key) {
    root = deleteNode(root, key);
}

Tree::Node* Tree::deleteNode(Node *node, int key) {
    if(!node) return node;
    
    if(key < node->m_key) {
        node->left = deleteNode(node->left, key);
    } else if(key > node->m_key) {
        node->right = deleteNode(node->right, key);
    } else {
        //Decrement size
        --size;
        
        //Delete node
        if(!node->left || !node->right) {//If only one or zero child of node to be deleted
            Node *tmp = (node->left) ? node->left : node->right;
            
            if(tmp) {//If one child then copy data into node and delete child
                node->m_key = tmp->m_key;
                node->left = tmp->left;
                node->right = tmp->right;
                delete tmp;
            } else {//No children
                tmp = node;
                node = nullptr;
            }
            
            delete tmp;
        } else {//Else two children of node
            //Find nodes lowest in right subtree to replace node to be deleted
            Node *tmp = node->right;
            while(tmp->left) {
                tmp = tmp->left;
            }
            
            //Copy lowest descendent value into node
            node->m_key = tmp->m_key;
            
            //Delete the lowest descendent and link to node
            node->right = deleteNode(node->right, tmp->m_key);
            ++size;//Account for extra deletion call
        }
    }
    
    
    //Balance tree if there are nodes below deleted node, meaning not zero child case
    if(!node) return node;
    
    //Update height
    node->updateHeight();
    
    //Balance subtree under node
    return balance(node);
}

//Returns size of the tree
int Tree::getSize(){
    return size;
}

//Inserts a value into the tree
void Tree::insert(int key) {
    if(root) {
        root = place(root, key);
    } else {
        root = new Node(key);
    }
    ++size;
}

//Used to place newly inserted node into tree by insert function
Tree::Node* Tree::place(Node *node, int key) {
    //Place node
    if(key < node->m_key) {//If less than current node
        if(node->left) {//If left exists
            node->left = place(node->left, key);//See where to place relative to left
        } else {//Else make new node as left
            node->left = new Node(key);
        }
    } else {//If greater than or equal to current node
        if(node->right) {//If right exists
            node->right = place(node->right, key);//See where to place relative to right
        } else {//Else make new node as right
            node->right = new Node(key);
        }
    }
    
    //Update height of node
    node->updateHeight();
    
    //Balance tree
    return balance(node);
}

Tree::Node* Tree::balance(Node *node) {
    if(node->balance() > 1) {//Right Heavy
        if(node->right->balance() < 0)//Right subtree left heavy
            node->right = rotateRight(node->right);//Right rotate right subtree
        return rotateLeft(node);//Rotate left on current node
    } else if(node->balance() < -1) {//Left Heavy
        if(node->left->balance() > 0)//Right heavy on left subtree
            node->left = rotateLeft(node->left);//Left rotate left subtree
        return rotateRight(node);//Rotate right on current node
    }
    
    //Return node pointer if unchanged, was not balanced
    return node;
}

//In Order Traversal
void Tree::inOrderTraversal() const {
    inorder(root);
}
void Tree::inorder(Node *node) const {
    if(!node) return;
    
    inorder(node->left);
    cout<<node->m_key<<" ";
    inorder(node->right);
}

//Pre Order Traversal
void Tree::preOrderTraversal() const {
    preorder(root);
}
void Tree::preorder(Node *node) const {
    if(!node) return;
    
    cout<<node->m_key<<" ";
    preorder(node->left);
    preorder(node->right);
}

//Post Order Traversal
void Tree::postOrderTraversal() const {
    postorder(root);
}
void Tree::postorder(Node *node) const {
    if(!node) return;
    
    postorder(node->left);
    postorder(node->right);
    cout<<node->m_key<<" ";
}

//Level Order Traversal
void Tree::levelOrderTraversal() const {
    if(!root) return;
    
    queue<Node *> q;
    q.push(root);
    
    while(!q.empty()) {
        Node *cur = q.front();
        q.pop();
        
        cout<<cur->m_key<<" ";
        
        if(cur->left) q.push(cur->left);
        if(cur->right) q.push(cur->right);
    }
}

//Rotate left
Tree::Node* Tree::rotateLeft(Node *node) {
    //Rotate
    Node *tmp = node->right;
    node->right = tmp->left;
    tmp->left = node;
    
    //Update heights
    node->updateHeight();
    tmp->updateHeight();
    
    //Return subtree root
    return tmp;
}

//Rotate right
Tree::Node* Tree::rotateRight(Node *node) {
    //Rotate
    Node *tmp = node->left;
    node->left = tmp->right;
    tmp->right = node;
    
    //Update heights
    node->updateHeight();
    tmp->updateHeight();
    
    //Return subtree root
    return tmp;
}