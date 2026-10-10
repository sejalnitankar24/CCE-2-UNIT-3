#include <iostream>
#include <string>
using namespace std;

struct Patient
{
    int id;
    string name;
    int age;
    string disease;
    Patient *next;
};

Patient *head = NULL;

// Add patient
void addPatient()
{
    Patient *newPatient = new Patient;

    cout << "\nEnter Patient ID: ";
    cin >> newPatient->id;

    cout << "Enter Patient Name: ";
    cin >> newPatient->name;

    cout << "Enter Age: ";
    cin >> newPatient->age;

    cout << "Enter Disease: ";
    cin >> newPatient->disease;

    newPatient->next = NULL;

    if (head == NULL)
    {
        head = newPatient;
    }
    else
    {
        Patient *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newPatient;
    }

    cout << "\nPatient record added successfully!\n";
}

// Display patients
void displayPatients()
{
    if (head == NULL)
    {
        cout << "\nNo patient records available.\n";
        return;
    }

    Patient *temp = head;

    cout << "\n----- Patient Records -----\n";

    while (temp != NULL)
    {
        cout << "\nPatient ID : " << temp->id;
        cout << "\nName       : " << temp->name;
        cout << "\nAge        : " << temp->age;
        cout << "\nDisease    : " << temp->disease;
        cout << "\n---------------------------";

        temp = temp->next;
    }
}

// Search patient
void searchPatient()
{
    int id;
    cout << "\nEnter Patient ID to search: ";
    cin >> id;

    Patient *temp = head;

    while (temp != NULL)
    {
        if (temp->id == id)
        {
            cout << "\nPatient Found!";
            cout << "\nPatient ID : " << temp->id;
            cout << "\nName       : " << temp->name;
            cout << "\nAge        : " << temp->age;
            cout << "\nDisease    : " << temp->disease << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "\nPatient not found.\n";
}

// Delete patient
void deletePatient()
{
    int id;
    cout << "\nEnter Patient ID to delete: ";
    cin >> id;

    Patient *temp = head;
    Patient *prev = NULL;

    while (temp != NULL && temp->id != id)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "\nPatient not found.\n";
        return;
    }

    if (prev == NULL)
    {
        head = temp->next;
    }
    else
    {
        prev->next = temp->next;
    }

    delete temp;

    cout << "\nPatient record deleted successfully!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n\n===== HOSPITAL PATIENT RECORD MANAGEMENT =====";
        cout << "\n1. Add Patient";
        cout << "\n2. Display Patients";
        cout << "\n3. Search Patient";
        cout << "\n4. Delete Patient";
        cout << "\n5. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addPatient();
            break;

        case 2:
            displayPatients();
            break;

        case 3:
            searchPatient();
            break;

        case 4:
            deletePatient();
            break;

        case 5:
            cout << "\nExiting program...";
            break;

        default:
            cout << "\nInvalid choice!";
        }

    } while (choice != 5);

    return 0;
}
