#include <iostream>

using namespace std;

template <class data_t>
class list {
    data_t data;
    list *next;
    public:
    list(data_t d);
    void add(list *node) { node->next = this; next = 0; }
    list *getnext() { return next; }
    data_t getdata() { return data; }
};

template <class data_t>
list<data_t>::list(data_t d)
{
    data = d;
    next = 0;
}

int main(int argc, const char * argv[]) {
    list<char> start('a');
    list<char> *p, *last;
    int i;

    last = &start;

    for (i=0; i<26; i++) {
        p = new list<char> ('a' + i);
        p->add(last);
        last = p;
    }

    p = &start;

    while (p) {
        cout << p->getdata();
        p = p->getnext();
    }
    cout << "\n";

    return 0;
}

