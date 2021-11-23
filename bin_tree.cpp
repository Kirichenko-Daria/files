#include <iostream>

struct node {// Тип узла
    int value;
    struct node* left;
    struct node* right;
};

node* add_to_tree(node* tree, int x) {
    if (tree == NULL) { // Если дерева нет, то формируем корень
        //tree = (node*)malloc(sizeof(node)); // память под узел
        tree = new node;
        tree->value = x;   // заполняем поле данных
        tree->left = NULL;
        tree->right = NULL; // ветви инициализируем NULL-ссылкой
    }
    else  if (x < tree->value)   // условие добавление левого потомка
        tree->left = add_to_tree(tree->left, x);
    else    			// условие добавление правого потомка
        tree->right = add_to_tree(tree->right, x);
    return tree;
}

void print_tree(node* root) {
    if (root->left != NULL) {
        print_tree(root->left);
    }
    std::cout << root->value << "\t";
    if (root->right) {
        print_tree(root->right);
    }
}
void delete_tree(node* root){
    if(root -> right != NULL){
        delete_tree(root -> right);
    }
    if(root -> left != NULL){
        delete_tree(root -> left);
    }
    delete root;
}
int max_deep = 2;
void function1(node* root, int current_deep, ){
    if(current_deep > max_deep){
        return;
    }
    if (root->left != NULL){
        function1(root->left, current_deep + 1);
    }
    std::cout << root->value << "\t";
    if (root->right != NULL){
        function1(root->right, current_deep + 1);
    }

}
int main() {
    node* root = NULL;
    // Вот так будет реализовано добавление в дерево
    root = add_to_tree(root, 5);
    root = add_to_tree(root, 1);
    root = add_to_tree(root, 6);
    root = add_to_tree(root, 0);
    root = add_to_tree(root, -1);
    root = add_to_tree(root, -2);
    root = add_to_tree(root, 5);
    root = add_to_tree(root, 8);
    root = add_to_tree(root, 10);
    root = add_to_tree(root, 12);

    //print_tree(root);
    function1(root, 0);
    return 0;
}
