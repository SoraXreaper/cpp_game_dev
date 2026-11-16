#include <iostream>
#include <iterator>
#include <string>

struct Node{
  int value;
  Node* left;
  Node* right;
};

Node* CreateNewNode(int value){
    Node* new_node = new Node;
    new_node->value = value;
    new_node->left = nullptr;
    new_node->right = nullptr;
    return new_node;
}


void AddNodeToTree(Node** root, Node* new_node){
    //std::cout << "Adding " << new_node->value << " to the tree!\n";
    if (*root == nullptr){
      *root = new_node;
      std::cout << "Value " << new_node->value << " is the root!\n";
      return;
    }
    Node* tmp_node = *root;
    if (new_node->value == tmp_node->value){
        std::cout << "Value" << new_node->value << " Already exist in the tree\n";
    }
    else if (new_node->value > tmp_node->value){
        if (tmp_node->right == nullptr){
            tmp_node->right = new_node;
        }
        else{
            tmp_node = tmp_node->right;
            AddNodeToTree(&tmp_node, new_node);
        }
    }
    else if (new_node->value < tmp_node->value){
        if (tmp_node->left == nullptr){
            tmp_node->left = new_node;
        }
        else{
            tmp_node = tmp_node->left;
            AddNodeToTree(&tmp_node, new_node);
        }
    }
}

void PrintTree(Node* root, int level) {
    Node* current_node = root;
    std::cout << std::string(level, '\t') <<current_node->value << "\n";
    if (current_node->left != nullptr){
        PrintTree(current_node->left, level + 1);
    }
    if (current_node->right != nullptr){
        PrintTree(current_node->right, level + 1);
    }
}

void FindValueInTree(Node* root, int value) {
    Node* current_node = root;
    if (current_node == nullptr){
        std::cout << "Value " << value <<" not found!!\n";
    }
    else{
        if (value == current_node->value){
            std::cout << "Value " << value << " Found!\n";
        }
        else if (value > current_node->value){
            current_node = current_node->right;
            FindValueInTree(current_node, value);
        }
        else if (value < current_node->value){
            current_node = current_node->left;
            FindValueInTree(current_node, value);
        }
    }
}


int main() {
    int numbers[6] = {8, 3, 6, 4, 1, 10};
    Node* savedPointers[6]; 
    Node* Root = nullptr;
    for (size_t i = 0; i < std::size(numbers); i++){
        Node* node = CreateNewNode(numbers[i]);
        savedPointers[i] = node;
        AddNodeToTree(&Root, node);
    }

    PrintTree(Root, 1);

    FindValueInTree(Root, 10);
    FindValueInTree(Root, 14);
    
    for (size_t i = 0; i < std::size(savedPointers); i++) {
        delete savedPointers[i];
        savedPointers[i] = nullptr;
    }

    return 0;
}