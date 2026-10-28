# Assignment 1 - Digital Library Management System

class Book:
    def __init__(self, title, author, pages, available=True):
        self.title = title
        self.author = author
        self.pages = pages
        self.available = available

    def __str__(self):
        status = "Available" if self.available else "Borrowed"
        return f"'{self.title}' by {self.author} ({status})"

    # len(book) gives the number of pages
    def __len__(self):
        return self.pages

    # calling book() borrows it
    def __call__(self):
        self.borrow()

    def __del__(self):
        print(f"Book '{self.title}' deleted from the system")

    def borrow(self):
        if self.available:
            self.available = False
            print(f"You borrowed '{self.title}'")
        else:
            print(f"Sorry, '{self.title}' is already borrowed")

    def return_book(self):
        if not self.available:
            self.available = True
            print(f"You returned '{self.title}'")
        else:
            print(f"'{self.title}' was not borrowed")

    def print_summary(self):
        print("=" * 30)
        print(f"Title     : {self.title}")
        print(f"Author    : {self.author}")
        print(f"Pages     : {len(self)}")
        print(f"Available : {'Yes' if self.available else 'No'}")
        print("=" * 30)


# test
book = Book("Python Basics", "Ali Hassan", 350)
print(book)
print(len(book))
book()
book()
book.print_summary()
book.return_book()
book.print_summary()
del book
