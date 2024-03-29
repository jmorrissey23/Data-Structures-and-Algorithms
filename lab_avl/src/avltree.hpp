/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */

template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
<<<<<<< HEAD
    Node* temp = t -> right;
    t -> right = temp -> left;
    temp -> left = t;
    t->height = std::max(heightOrNeg1(t->left),heightOrNeg1(t->right))+1;
    t = temp;
    t->height = std::max(heightOrNeg1(t->left),heightOrNeg1(t->right))+1;;
=======
>>>>>>> release/main
}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    // your code here
<<<<<<< HEAD
    Node* temp = t -> left;
    t -> left = temp -> right;
    temp -> right = t;
    t->height = std::max(heightOrNeg1(t->left),heightOrNeg1(t->right))+1;
    t = temp;
    t->height = std::max(heightOrNeg1(t->left),heightOrNeg1(t->right))+1;

=======
>>>>>>> release/main
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
<<<<<<< HEAD
    rotateRight(t->right);
    rotateLeft(t);
}

template <class K, class V>
int AVLTree<K, V>::getBalance(Node* curr) {
    if (curr -> left != NULL && curr -> right != NULL) {
        return curr-> right -> height - curr -> left -> height;
    }
    if (curr -> left == NULL && curr -> right == NULL) {
        return 0;
    }
    if (curr -> left == NULL) {
        return curr -> right -> height + 1;
    }
    return -1 - curr -> left -> height; //curr -> right == NULL) 
}


template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
    // your code here
    if (subtree == NULL) {
        return;
    }
    int balance = heightOrNeg1(subtree->right) - heightOrNeg1(subtree->left); //getBalance(subtree);

    if (balance == -2) {
        int left_balance = heightOrNeg1(subtree -> left -> right) - heightOrNeg1(subtree -> left -> left);
        if (left_balance == -1) {
            rotateRight(subtree);
        } else {
            rotateLeftRight(subtree);
        }
    } else if (balance == 2) {
        int right_balance = heightOrNeg1(subtree -> right -> right) - heightOrNeg1(subtree -> right -> left);
        if (right_balance == 1) {
            rotateLeft(subtree);
        } else {
            rotateRightLeft(subtree);
        }
    } 
    //updateHeight(subtree);
    subtree -> height = std::max(heightOrNeg1(subtree->right),heightOrNeg1(subtree->left))+1;
=======
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
    // your code here
>>>>>>> release/main
}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    insert(root, key, value);
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& subtree, const K& key, const V& value)
{
    // your code here
<<<<<<< HEAD
    if (subtree == NULL) {
        subtree = new Node(key, value);
    } else if (key < subtree -> key) {
        insert(subtree -> left, key, value);
    } else if (key >= subtree -> key) {
        insert(subtree -> right, key, value);
    }
    rebalance(subtree);
}










=======
}

>>>>>>> release/main
template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL)
        return;

    if (key < subtree->key) {
        // your code here
    } else if (key > subtree->key) {
        // your code here
    } else {
        if (subtree->left == NULL && subtree->right == NULL) {
            /* no-child remove */
            // your code here
        } else if (subtree->left != NULL && subtree->right != NULL) {
            /* two-child remove */
            // your code here
        } else {
            /* one-child remove */
            // your code here
        }
        // your code here
    }
}
