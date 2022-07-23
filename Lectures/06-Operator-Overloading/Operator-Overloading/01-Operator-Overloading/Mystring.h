#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
private:
    char *str;// C style string

public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();
    void dislay() const;
    int get_length() const;
    const char *get_str() const;
};

#endif // MYSTRING_H