#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Node representing a folder
struct Folder {
    string name;
    Folder* left;
    Folder* right;

    Folder(string folderName) {
        name = folderName;
        left = NULL;
        right = NULL;
    }
};

// Function to perform non-recursive preorder traversal
void backupFolders(Folder* root) {
    if (root == NULL) {
        cout << "No folders available for backup.\n";
        return;
    }

    stack<Folder*> s;
    s.push(root);

    cout << "\nFolder Backup Sequence:\n";

    while (!s.empty()) {
        Folder* current = s.top();
        s.pop();

        cout << "Backing up folder: "
             << current->name << endl;

        // Push right child first
        if (current->right != NULL) {
            s.push(current->right);
        }

        // Push left child second
        if (current->left != NULL) {
            s.push(current->left);
        }
    }

    cout << "\nFolder backup sequence completed.\n";
}

// Function to create a sample folder tree
Folder* createFolderTree() {
    Folder* root = new Folder("Root");

    root->left = new Folder("Documents");
    root->right = new Folder("Pictures");

    root->left->left = new Folder("College");
    root->left->right = new Folder("Projects");

    root->right->left = new Folder("Photos");
    root->right->right = new Folder("Videos");

    return root;
}

// Function to release allocated memory
void deleteTree(Folder* root) {
    if (root == NULL) {
        return;
    }

    stack<Folder*> s;
    s.push(root);

    while (!s.empty()) {
        Folder* current = s.top();
        s.pop();

        if (current->left != NULL) {
            s.push(current->left);
        }

        if (current->right != NULL) {
            s.push(current->right);
        }

        delete current;
    }
}

int main() {
    Folder* root = createFolderTree();

    cout << "====================================\n";
    cout << "   FOLDER BACKUP APPLICATION\n";
    cout << "====================================\n";

    backupFolders(root);

    deleteTree(root);

    return 0;
}
