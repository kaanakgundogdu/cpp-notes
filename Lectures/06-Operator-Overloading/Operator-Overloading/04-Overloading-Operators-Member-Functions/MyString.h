#ifndef MyString_H
#define MyString_H

class MyString
{
private:
    char *str;// C style string

public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    MyString(MyString &&source); // Move constructor
    ~MyString();

    MyString &operator = (const MyString &righths); //Copy assignment
    MyString &operator = (MyString &&righths); //Move assignment

    MyString operator-() const;//make lovercase
    MyString operator+(const MyString &righths) const;//concatenate


    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif // MyString_H
