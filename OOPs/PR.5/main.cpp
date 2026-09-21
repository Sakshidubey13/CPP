#include <iostream>
#include <string>
using namespace std;

class LibraryItem
{
private:
    string title;
    string author;
    string dueDate;

public:
    // Constructor
    LibraryItem()
    {
        this->title = "";
        this->author = "";
        this->dueDate = "";
    }

    // Virtual Destructor
    virtual ~LibraryItem()
    {
    }

    // SETTERS
    void setTitle(string newTitle)
    {
        this->title = newTitle;
    }

    void setAuthor(string newAuthor)
    {
        this->author = newAuthor;
    }

    void setDueDate(string newDueDate)
    {
        this->dueDate = newDueDate;
    }

    // GETTERS
    string getTitle()
    {
        return this->title;
    }

    string getAuthor()
    {
        return this->author;
    }

    string getDueDate()
    {
        return this->dueDate;
    }

    // PURE VIRTUAL FUNCTIONS
    virtual void checkOut() = 0;

    virtual void returnItem() = 0;

    virtual void displayDetails() = 0;
};
// BOOK CLASS
// Inheritance
// LibraryItem -> Book
class Book : public LibraryItem
{
private:
    string ISBN;
    bool issued;

public:
    // Constructor
    Book() : LibraryItem()
    {
        this->ISBN = "";
        this->issued = false;
    }

    // Destructor
    ~Book()
    {
    }
    // INPUT BOOK
    void setBook()
    {
        string title;
        string author;
        string isbn;
        string dueDate;

        cout << "Enter Book Title : ";
        cin >> title;

        cout << "Enter Author Name : ";
        cin >> author;

        cout << "Enter ISBN : ";
        cin >> isbn;

        cout << "Enter Due Date : ";
        cin >> dueDate;

        // Simple ISBN validation
        if (isbn.length() < 10)
        {
            throw "Invalid ISBN! ISBN must contain at least 10 characters.";
        }

        this->setTitle(title);
        this->setAuthor(author);
        this->ISBN = isbn;
        this->setDueDate(dueDate);
    }

    void checkOut() override
    {
        if (this->issued == true)
        {
            cout << "Book is already checked out!" << endl;
        }
        else
        {
            this->issued = true;

            cout << "Book checked out successfully!"
                 << endl;
        }
    }

    void returnItem() override
    {
        if (this->issued == false)
        {
            cout << "Book is already available!" << endl;
        }
        else
        {
            this->issued = false;

            cout << "Book returned successfully!"
                 << endl;
        }
    }

    void displayDetails() override
    {
        cout << endl;
        cout << " BOOK" << endl;

        cout << "Title : "
             << this->getTitle() << endl;

        cout << "Author : "
             << this->getAuthor() << endl;

        cout << "ISBN : "
             << this->ISBN << endl;

        cout << "Due Date : "
             << this->getDueDate() << endl;

        if (this->issued == true)
        {
            cout << "Status : Checked Out" << endl;
        }
        else
        {
            cout << "Status : Available" << endl;
        }
    }
};

// DVD CLASS
// Inheritance
// LibraryItem -> DVD

class DVD : public LibraryItem
{
private:
    int duration;
    bool issued;

public:
    // Constructor
    DVD() : LibraryItem()
    {
        this->duration = 0;
        this->issued = false;
    }

    // Destructor
    ~DVD()
    {
    }

    void setDVD()
    {
        string title;
        string author;
        string dueDate;

        cout << "Enter DVD Title : ";
        cin >> title;

        cout << "Enter Director Name : ";
        cin >> author;

        cout << "Enter Duration (minutes) : ";
        cin >> this->duration;

        // Exception handling
        if (this->duration <= 0)
        {
            throw "Invalid duration! Duration must be greater than 0.";
        }

        cout << "Enter Due Date : ";
        cin >> dueDate;

        this->setTitle(title);
        this->setAuthor(author);
        this->setDueDate(dueDate);
    }

    void checkOut() override
    {
        if (this->issued == true)
        {
            cout << "DVD is already checked out!"
                 << endl;
        }
        else
        {
            this->issued = true;

            cout << "DVD checked out successfully!"
                 << endl;
        }
    }

    void returnItem() override
    {
        if (this->issued == false)
        {
            cout << "DVD is already available!"
                 << endl;
        }
        else
        {
            this->issued = false;

            cout << "DVD returned successfully!"
                 << endl;
        }
    }

    void displayDetails() override
    {
        cout << endl;
        cout << "DVD" << endl;

        cout << "Title : "
             << this->getTitle() << endl;

        cout << "Director : "
             << this->getAuthor() << endl;

        cout << "Duration : "
             << this->duration
             << " minutes" << endl;

        cout << "Due Date : "
             << this->getDueDate() << endl;

        if (this->issued == true)
        {
            cout << "Status : Checked Out" << endl;
        }
        else
        {
            cout << "Status : Available" << endl;
        }
    }
};
// MAGAZINE CLASS
// Inheritance
// LibraryItem -> Magazine
class Magazine : public LibraryItem
{
private:
    int issueNumber;
    bool issued;

public:
    // Constructor
    Magazine() : LibraryItem()
    {
        this->issueNumber = 0;
        this->issued = false;
    }

    // Destructor
    ~Magazine()
    {
    }
    // INPUT MAGAZINe

    void setMagazine()
    {
        string title;
        string author;
        string dueDate;

        cout << "Enter Magazine Title : ";
        cin >> title;

        cout << "Enter Publisher Name : ";
        cin >> author;

        cout << "Enter Issue Number : ";
        cin >> this->issueNumber;

        if (this->issueNumber <= 0)
        {
            throw "Invalid Issue Number!";
        }

        cout << "Enter Due Date : ";
        cin >> dueDate;

        this->setTitle(title);
        this->setAuthor(author);
        this->setDueDate(dueDate);
    }

    // CHECK OUT
    void checkOut() override
    {
        if (this->issued == true)
        {
            cout << "Magazine is already checked out!"
                 << endl;
        }
        else
        {
            this->issued = true;

            cout << "Magazine checked out successfully!"
                 << endl;
        }
    }
    // RETURN
    void returnItem() override
    {
        if (this->issued == false)
        {
            cout << "Magazine is already available!"
                 << endl;
        }
        else
        {
            this->issued = false;

            cout << "Magazine returned successfully!"
                 << endl;
        }
    }

    // DISPLAY
    void displayDetails() override
    {
        cout << endl;
        cout << "MAGAZINE"
             << endl;

        cout << "Title : "
             << this->getTitle() << endl;

        cout << "Publisher : "
             << this->getAuthor() << endl;

        cout << "Issue Number : "
             << this->issueNumber << endl;

        cout << "Due Date : "
             << this->getDueDate() << endl;

        if (this->issued == true)
        {
            cout << "Status : Checked Out" << endl;
        }
        else
        {
            cout << "Status : Available" << endl;
        }
    }
};
int main()
{
    // Array of Base Class Pointers
    LibraryItem *libraryItems[100];

    int itemCount = 0;
    int choice;

    do
    {
            cout << "       LIBRARY MANAGEMENT SYSTEM" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Add DVD" << endl;
        cout << "3. Add Magazine" << endl;
        cout << "4. View All Items" << endl;
        cout << "5. Search Item" << endl;
        cout << "6. Check Out Item" << endl;
        cout << "7. Return Item" << endl;
        cout << "8. Exit" << endl;

        cout << endl;
        cout << "Enter your choice : ";
        cin >> choice;


        if (choice == 1)
        {
            try
            {
                Book *book = new Book();

                book->setBook();

                libraryItems[itemCount] = book;
                itemCount++;

                cout << endl;
                cout << "Book Added Successfully!"
                     << endl;
            }
            catch (const char *error)
            {
                cout << "Error : " << error << endl;
            }
        }

        else if (choice == 2)
        {
            try
            {
                DVD *dvd = new DVD();

                dvd->setDVD();

                libraryItems[itemCount] = dvd;
                itemCount++;

                cout << endl;
                cout << "DVD Added Successfully!"
                     << endl;
            }
            catch (const char *error)
            {
                cout << "Error : " << error << endl;
            }
        }

        else if (choice == 3)
        {
            try
            {
                Magazine *magazine = new Magazine();

                magazine->setMagazine();

                libraryItems[itemCount] = magazine;
                itemCount++;

                cout << endl;
                cout << "Magazine Added Successfully!"
                     << endl;
            }
            catch (const char *error)
            {
                cout << "Error : " << error << endl;
            }
        }

        else if (choice == 4)
        {
            if (itemCount == 0)
            {
                cout << endl;
                cout << "No Library Items Available!"
                     << endl;
            }
            else
            {
                cout << endl;
                cout << "ALL LIBRARY ITEMS"
                     << endl;

                for (int i = 0; i < itemCount; i++)
                {
                    libraryItems[i]->displayDetails();
                }
            }
        }

        else if (choice == 5)
        {
            string searchTitle;
            bool found = false;

            cout << "Enter Title to Search : ";
            cin >> searchTitle;

            for (int i = 0; i < itemCount; i++)
            {
                if (libraryItems[i]->getTitle() == searchTitle)
                {
                    cout << endl;
                    cout << "Item Found!" << endl;

                    libraryItems[i]->displayDetails();

                    found = true;

                    break;
                }
            }

            if (found == false)
            {
                cout << "Item Not Found!" << endl;
            }
        }


        else if (choice == 6)
        {
            string searchTitle;
            bool found = false;

            cout << "Enter Title to Check Out : ";
            cin >> searchTitle;

            for (int i = 0; i < itemCount; i++)
            {
                if (libraryItems[i]->getTitle() == searchTitle)
                {
                    libraryItems[i]->checkOut();

                    found = true;

                    break;
                }
            }

            if (found == false)
            {
                cout << "Item Not Found!" << endl;
            }
        }

        else if (choice == 7)
        {
            string searchTitle;
            bool found = false;

            cout << "Enter Title to Return : ";
            cin >> searchTitle;

            for (int i = 0; i < itemCount; i++)
            {
                if (libraryItems[i]->getTitle() == searchTitle)
                {
                    libraryItems[i]->returnItem();

                    found = true;

                    break;
                }
            }

            if (found == false)
            {
                cout << "Item Not Found!" << endl;
            }
        }

        else if (choice == 8)
        {
            cout << endl;
            cout << "Thank You For Using Library Management System!"
                 << endl;
        }

        else
        {
            cout << endl;
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 8);
    for (int i = 0; i < itemCount; i++)
    {
        delete libraryItems[i];
    }

    return 0;
}