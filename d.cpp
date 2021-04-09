#include <iostream> // библиотека ввода вывода
using namespace std; /*подключаем ключевые слова “cout” и “endl”*/
int main(int argc, const char** argv) {
    float x, y;
    cin >> x >> y;
    if (x > 0 && y > 0) {
            cout << "1" << endl;
    }
    else if (x < 0 && y > 0) {
            cout << "2" << endl;
    }
    else if (x < 0 && y < 0) {
            cout << "3" << endl;
    }
    else if (x > 0 && y < 0) {
            cout << "4" << endl;
    }
    else {
            cout << "0" << endl; /* в случае если точка 
будет находиться на одной из осей, например: x = 4, y = 0*/
    }
    return 0;
}
