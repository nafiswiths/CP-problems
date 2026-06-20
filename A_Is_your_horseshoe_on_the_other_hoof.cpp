#include<bits/stdc++.h>
using namespace std;
int main(){
   
    vector<int> v(4);
   set<int> s ;
    for(int i= 0  ; i <4 ; i++){
        cin>>v[i];
           s.insert(v[i]);
    }
   
    cout<<4-s.size()<<endl;
    

    
}


#include <iostream>
using namespace std;

#define M 4

struct Node {
    int key[M - 1];
    Node* child[M];
    int n;

    Node() {
        n = 0;
        for (int i = 0; i < M; i++)
            child[i] = NULL;
    }
};

void insertIntoNode(Node* node, int key) {
    int i = node->n - 1;
    while (i >= 0 && key < node->key[i]) {
        node->key[i + 1] = node->key[i];
        i--;
    }
    node->key[i + 1] = key;
    node->n++;
}

int findMin(Node* root) {
    while (root->child[0] != NULL)
        root = root->child[0];
    return root->key[0];
}

Node* insert(Node* root, int key) {
    if (root == NULL) {
        root = new Node();
        root->key[0] = key;
        root->n = 1;
        return root;
    }

    if (root->n < M - 1) {
        insertIntoNode(root, key);
        return root;
    }

    Node* current = root;
    while (current != NULL) {
        int i;
        for (i = 0; i < current->n; i++)
            if (key < current->key[i])
                break;

        if (current->child[i] == NULL) {
            current->child[i] = new Node();
            current->child[i]->key[0] = key;
            current->child[i]->n = 1;
            return root;
        }

        current = current->child[i];
    }
    return root;
}

Node* deleteKey(Node* root, int key) {
    if (root == NULL) return NULL;

    int i;
    for (i = 0; i < root->n; i++) {
        if (key == root->key[i]) {
            if (root->child[i] == NULL) {
                for (int j = i; j < root->n - 1; j++)
                    root->key[j] = root->key[j + 1];
                root->n--;
                return root;
            }

            int succ = findMin(root->child[i + 1]);
            root->key[i] = succ;
            root->child[i + 1] = deleteKey(root->child[i + 1], succ);
            return root;
        }

        if (key < root->key[i]) break;
    }

    root->child[i] = deleteKey(root->child[i], key);
    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;

    for (int i = 0; i < root->n; i++) {
        inorder(root->child[i]);
        cout << root->key[i] << " ";
    }
    inorder(root->child[root->n]);
}

int main() {
    Node* root = NULL;

    root = insert(root, 20);
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 15);
    root = insert(root, 30);

    inorder(root);
    cout << endl;

    root = deleteKey(root, 10);
    inorder(root);
    cout << endl;

    return 0;
}
