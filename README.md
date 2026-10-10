Hospital Patient Record Management Using Linked List 

1.Problem Statement

Title: Hospital Patient Record Management Using Linked List
Develop a C++ program to manage hospital patient records using a Linked List. Each node stores the patient's ID, name, age, and disease. The system should allow the user to add new patient records, delete existing records, search for a patient by ID, and display all patient records.

2.Objective

1.To implement a Linked List using C++.

2.To insert and delete patient records dynamically.

3.To search for a patient using their unique ID.

4.To display all stored patient records.

5.To understand the practical application of Linked Lists in hospital management.


3. Theory / Introduction

A Linked List is a linear data structure made up of nodes. Each node contains data and a pointer to the next node.
In this project, each node stores the following patient information:

1.Patient ID

2.Patient name

3.Age

4.Disease

Pointer to the next patient record
Unlike an array, a Linked List can grow or shrink dynamically when patient records are added or removed.
Linked List structure
Patient 101
Name, age, disease
Patient 102
Name, age, disease
Patient 103
Name, age, disease
Each node points to the next patient record. The final node points to NULL.

4. Algorithm

1.Start the program.

2.Create an empty Singly Linked List.

3.Display the menu of operations.

4.Accept the user's choice.

5.Perform the selected operation:

Add Patient: Enter patient details and              create a new node.
Delete Patient: Search for the patient ID    and delete the corresponding node.
Search Patient: Find and display a patient's details using their ID.
Display All Patients: Traverse the list and display every patient record.

6.Repeat the menu until the user selects Exit.
Release the allocated memory and stop the program.

6. Sample Input and Output

Sample : Add a patient
Enter your choice: 1
Enter Patient ID: 101
Enter Patient Name: Rahul Patil
Enter Patient Age: 25
Enter Disease: Fever
Patient record added successfully.

6.Conclusion

The Hospital Patient Record Management System demonstrates the use of a Singly Linked List in a practical application. It allows patient records to be added, deleted, searched, and displayed efficiently without requiring a fixed-size array.
Before submitting: Compile and test the program in Dev-C++, capture actual output screenshots, and upload the source code and documents into their respective GitHub folders. Use fictional patient details in screenshots and reports. This is an educational program, not a secure hospital record system for real patient data.