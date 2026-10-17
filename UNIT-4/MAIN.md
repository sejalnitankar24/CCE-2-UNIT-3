&#x20;                                                                             UNIT IV

**1.Title**                                                                                                                                                                                         Develop a folder backup application that organizes folder in a binary tree and implements non-recursive preorder traversal using a stack.



**2.Problem Statement**

Managing and backing up multiple folders can be difficult when folders are organized in a hierarchical structure. Manually accessing each folder for backup can be time-consuming and inefficient.

The aim of this project is to develop a folder backup application that represents folders using a binary tree and traverses the tree using a non-recursive preorder traversal algorithm implemented with a stack. The application visits folders in a systematic order and displays the folders selected for backup.



**3.Objective**

•To understand the concept of binary trees in data structures.

•To represent a folder hierarchy using a binary tree.

•To implement preorder traversal without recursion.

•To use a stack to manage the traversal process.

•To display folders in preorder sequence for backup processing.

•To understand the practical application of trees and stacks in file management systems.



**4. Introduction**

A folder backup application helps organize folders and identifies the folders that need to be processed for backup.

In this project, folders are represented as nodes of a binary tree. Each node contains a folder name and pointers to its left and right child nodes.

A binary tree is a hierarchical data structure in which each node can have at most two children. Preorder traversal is a tree traversal technique in which nodes are visited in the following order:



Root - Left Subtree - Right Subtree



This project implements preorder traversal without recursion by using a stack. The stack temporarily stores nodes that need to be visited.

The application processes the folder names in preorder sequence and displays them as folders selected for backup. This project demonstrates how binary trees and stacks can be used in a simplified folder management and backup workflow.



**5.Algorithm: Non-Recursive Preorder Traversal for Folder Backup**

1\. Start.

2\. Create a binary tree representing the folder structure.

3\. Initialize an empty stack.

4\. If the root node is NULL, stop the traversal.

5\. Push the root node onto the stack.

6\. While the stack is not empty:

7\. Pop the top node.

8\. Display its folder name as selected for backup.

9\. Push its right child onto the stack if it exists.

10\. Push its left child onto the stack if it exists.

11\. Continue until all nodes have been processed.

12\. Stop.



**6.Input**

&#x20;                                Root

&#x20;                                /      \\

&#x20;       Documents                    Pictures

&#x20;         /   \\                                    /     \\

College   Projects              Photos   Videos



**7.Output**

FOLDER BACKUP APPLICATION

Folder Backup Sequence:

Backing up folder: Root

Backing up folder: Documents

Backing up folder: College

Backing up folder: Projects

Backing up folder: Pictures

Backing up folder: Photos

Backing up folder: Videos

Folder backup sequence completed.



**8.Result**

The program starts from the root folder and follows preorder traversal.

The traversal sequence is:

•	Root: The root folder is processed first.

•	Documents: The left child of the root is processed.

•	College: The left child of Documents is processed.

•	Projects: The right child of Documents is processed.

•	Pictures: The right child of the root is processed.

•	Photos: The left child of Pictures is processed.

•	Videos: The right child of Pictures is processed.

The folders are processed in the order:



Root - Documents - College - Projects - Pictures - Photos – Videos



**9.Conclusion**

The Folder Backup Application demonstrates how a binary tree can represent a simplified folder hierarchy and how non-recursive preorder traversal can process folders using a stack.

The project successfully applies the concepts of binary trees, stacks, and tree traversal in C++. It provides a foundation for understanding how hierarchical folder processing can be implemented in a backup workflow.

Although the current version simulates the backup sequence rather than copying actual files, it can be extended into a practical folder backup system by integrating file system.

