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
    ~MyString();
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif // MyString_H
