#include <bits/stdc++.h>
using namespace std;

// for Q1 - basic
/*
class Book
{
private:
  string title;
  string author;
  int isbn;

public:
  void setTitle(string t)
  {
    title = t;
  }
  void setAuthor(string a)
  {
    author = a;
  }
  void setIsbn(int i)
  {
    isbn = i;
  }

  string getTitle()
  {
    return title;
  }
  string getAuthor()
  {
    return author;
  }
  int getIsbn()
  {
    return isbn;
  }
};
*/

// for Q2 - 3 constructor
class Book
{
private:
  string title;
  string author;
  int isbn;

public:
  Book(string title, string author, int isbn)
  {
    // for non-parameterized
    // title = "asada";
    // author = "asada";
    // isbn = 123;

    // for parameterized
    this->title = title;
    this->author = author;
    this->isbn = isbn;
  }

  // copy constructor
  // Book(Book &temp)
  // {
  //   cout << "Copy Constructor Called" << endl;
  //   this->title = temp.title;
  //   this->author = temp.author;
  //   this->isbn = temp.isbn;
  // }

  void setTitle(string t)
  {
    title = t;
  }
  void setAuthor(string a)
  {
    author = a;
  }
  void setIsbn(int i)
  {
    isbn = i;
  }

  string getTitle()
  {
    return title;
  }
  string getAuthor()
  {
    return author;
  }
  int getIsbn()
  {
    return isbn;
  }

  bool operator==(Book &temp)
  {
    return isbn == temp.isbn;
  }

  // ~Book()
  // {
  //   cout << "Book object with ISBN " << isbn << " is destroyed." << endl;
  // }

  friend class Library;
};

class Library
{
private:
  vector<Book> books;

public:
  void addBook(Book &book)
  {
    books.push_back(book);
  }

  void displayBooks()
  {
    cout << "Books in the library:" << endl;
    for (auto &book : books)
    {
      // cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << ", ISBN: " << book.getIsbn() << endl;
      // after friend class
      cout << "Title: " << book.title << ", Author: " << book.author << ", ISBN: " << book.isbn << endl;
    }
  }

  // ~Library()
  // {
  //   cout << "Destroying the library" << endl;
  // }
};

class Person
{
protected:
  string name;

public:
  Person(string n) : name(n) {}

  virtual void displayRole() const
  {
    cout << "Role: Person" << endl;
  }
};

class Librarian : public Person
{
public:
  Librarian(string n) : Person(n) {}

  void displayRole() const override
  {
    cout << "Role: Librarian" << endl;
  }
};

class Member : public Person
{
public:
  Member(string n) : Person(n) {}

  void displayRole() const override
  {
    cout << "Role: Member" << endl;
  }
};

int main()
{
  // 1 byte size for empty class
  cout << endl;

  cout << "Size of class: " << sizeof(Book) << endl;
  cout << endl;

  // Q1

  // Book book1;

  // book1.setTitle("Title 1");
  // book1.setAuthor("Author 1");
  // book1.setIsbn(111);

  // Q2
  Book book1("Title 1", "Author 1", 111);
  Book book2("Title 2", "Author 2", 222);
  // Book book2(book1); // or  Book book2 = book1;

  cout << "Title : " << book1.getTitle() << endl;
  cout << "Author : " << book1.getAuthor() << endl;
  cout << "ISBN : " << book1.getIsbn() << endl;
  cout << endl;

  cout << "Title : " << book2.getTitle() << endl;
  cout << "Author : " << book2.getAuthor() << endl;
  cout << "ISBN : " << book2.getIsbn() << endl;
  cout << endl;

  if (book1 == book2)
  {
    cout << "book1 and book2 have the same ISBN." << endl;
  }
  else
  {
    cout << "book1 and book2 have different ISBNs." << endl;
  }
  cout << endl;

  Library library;
  library.addBook(book1);
  library.addBook(book2);

  library.displayBooks();
  cout << endl;

  Person person("Happy");
  Librarian librarian("John");
  Member member("Alice");

  person.displayRole();
  librarian.displayRole();
  member.displayRole();

  return 0;
}