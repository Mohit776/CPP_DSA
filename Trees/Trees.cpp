#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <map>

using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node *BuildTree(vector<int> preorder)
{
    idx++;
    if (preorder[idx] == -1)
        return NULL;

    Node *root = new Node(preorder[idx]);

    root->left = BuildTree(preorder);  // left sub tree
    root->right = BuildTree(preorder); // Right sub tree

    return root;
}

void preorderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    cout << root->data << "  ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << "  ";
    inorderTraversal(root->right);
}

int height(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    cout << root->data << "  ";

    int lefth = height(root->left);
    int rigthh = height(root->right);

    return max(lefth, rigthh) + 1;
}

int count(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    int leftc = count(root->left);
    int rightc = count(root->right);

    return leftc + rightc + 1;
}

int sum(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    int leftc = sum(root->left);
    int rightc = sum(root->right);

    return leftc + rightc + root->data;
}

bool isSameTree(Node *p, Node *q)
{

    if (p == NULL || q == NULL)
    {
        return p == q;
    }

    bool isLeft = isSameTree(p->left, q->left);
    bool isRight = isSameTree(p->right, q->right);

    return isLeft && isRight && p->data == q->data;
}

int diameterOfBinaryTree(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    int LD = diameterOfBinaryTree(root->left);
    int RD = diameterOfBinaryTree(root->right);

    int currD = height(root->left) + height(root->right);

    return max(LD, max(RD, currD));
}

void topView(Node *root)
{

    queue<pair<Node *, int>> q;

    map<int, int> m;
    q.push({root, 0});

    while (q.size() > 0)
    {

        Node *curr = q.front().first;
        int currHd = q.front().second;

        q.pop();

        if (m.find(currHd) == m.end())
        {
            m[currHd] = curr->data;
        }

        if (curr->left != NULL)
        {
            q.push({curr->left, currHd - 1});
        }
        if (curr->right != NULL)
        {
            q.push({curr->right, currHd + 1});
        }
    }
    for (auto it : m)
    {
        cout << it.second << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = BuildTree(preorder);

    topView(root);

    return 0;
}