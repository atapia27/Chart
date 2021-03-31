#ifndef ITERATOR
#define ITERATOR
#include <iostream>
#include <vector>
    

//this is an example of an iterator class i found online
//they used templates, which is on the topic that we are on rn but I'm not sure
//if that is what she wants us to do
template <class T>

class Set
{
private:
    vector<T> m_element;
    int size;
public:
    Set() : size(0) {};
    Set(const Set& rhs)
    {
        m_element = rhs.m_element;
        size = rhs.size;
    }

    void push(T data)
    {

        m_element.push_back(data);
        ++size;
    }

template <class T>
class iterator
{
private:
    int i_index;
    T& s;
public:
    iterator(Set& is) :s(is), i_index(0) {}
    iterator(Set& is, bool) : s(is), i_index(s.size) {}
    iterator(Set& is, bool val, bool last) : s(is), i_index(s.size) {

        cout << endl << "size " << s.size << endl;
        if (last)
            i_index = s.size - 1;
    }

    T operator*()
    {
        return s.m_element[i_index];
    }

    int operator++()
    {
        return s.m_element[++i_index];
    }
    int current() const
    {
        return s.m_element[i_index];
    }
    bool operator!=(const iterator& rv) const
    {
        return i_index != rv.i_index;
    }
    int getI()
    {
        return i_index;
    }
};
iterator begin() { return iterator(*this); }
//function to check if we have passed last element
iterator end() { return iterator(*this, true); }
//function to get last element 
iterator last() { return iterator(*this, true, true); }

};


#endif // !ITERATOR

