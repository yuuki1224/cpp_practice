#include <iostream>
using namespace std;

class coord {
    int x, y;
    public:
    coord(int i, int j) { x = i; y = j; }
    // 変換関数の定義
    operator int() { return x*y; }
};

int main(int argc, const char * argv[]) {
    coord o1(2, 3), o2(4, 3);
    int i;

    i = o1;
    cout << i << "\n";

    i = 100 + o2;
    cout << i << "\n";

    return 0;
}

