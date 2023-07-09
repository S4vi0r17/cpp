#include <iostream>
#include <map>
#include <vector>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

void verticalTraversal(TreeNode* root, int horizontalDistance, std::map<int, std::vector<int>>& verticalMap) {
    if (root == nullptr)
        return;

    verticalMap[horizontalDistance].push_back(root->data);

    verticalTraversal(root->left, horizontalDistance - 1, verticalMap);
    verticalTraversal(root->right, horizontalDistance + 1, verticalMap);
}

void printVerticalTree(TreeNode* root, int depth, int horizontalOffset) {
    if (root == nullptr)
        return;

    printVerticalTree(root->right, depth + 1, horizontalOffset + 5);

    for (int i = 0; i < horizontalOffset; i++) {
        std::cout << " ";
    }

    std::cout << root->data << std::endl;

    printVerticalTree(root->left, depth + 1, horizontalOffset + 5);
}

void printTree(TreeNode* root) {
    if (root == nullptr)
        return;

    std::map<int, std::vector<int>> verticalMap;
    verticalTraversal(root, 0, verticalMap);

    int maxHeight = 0;
    for (auto& pair : verticalMap) {
        if (pair.second.size() > maxHeight) {
            maxHeight = pair.second.size();
        }
    }

    int treeWidth = maxHeight * 6;
    printVerticalTree(root, 0, treeWidth / 2);
}

int main() {
    // Ejemplo de entrada del árbol binario
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Imprimir el árbol verticalmente de forma gráfica
    printTree(root);

    // Liberar memoria del árbol
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
