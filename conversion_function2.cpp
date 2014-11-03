#include <iostream>
#include <cstring>
using namespace std;

class strtype {
    char str[80];
    long len;
    public:
    strtype(char *s) { strcpy(str, s); len = strlen(s); }
    operator char *() { return str; }
};

int main(int argc, const char * argv[]) {
    strtype s("This is a Test\n");
    char *p, s2[80];

    p = s; // charに変換
    cout << "ここに文字列が入る: " << p << "\n";

    strcpy(s2, s);
    cout << "ここに文字列のコピーが入る" << s2 << "\n";

    return 0;
}
