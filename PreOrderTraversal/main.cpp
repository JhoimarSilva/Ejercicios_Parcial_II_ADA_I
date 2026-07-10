#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);
        }

        if (data <= root->data)
        {
            root->left = insert(root->left, data);
        }
        else
        {
            root->right = insert(root->right, data);
        }

        return root;
    }

    void preOrder(Node *root)
    {
        if (root == NULL)
            return;

        cout << root->data << " ";

        preOrder(root->left);

        preOrder(root->right);
    }
};

int main()
{
    Solution myTree;
    Node *root = NULL;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int dato;
        cin >> dato;

        root = myTree.insert(root, dato);
    }

    myTree.preOrder(root);

    return 0;
}