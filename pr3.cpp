#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:

    Rectangle(float l = 0, float w = 0) {
        length = l;
        width = w;
    }


    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }


    float area() {
        return length * width;
    }

    float perimeter() {
        return 2 * (length + width);
    }

    void display(int index) {
        cout << "\nRectangle " << index + 1 << " Details:";
        cout << "\nLength: " << length;
        cout << "\nWidth: " << width;
        cout << "\nArea: " << area();
        cout << "\nPerimeter: " << perimeter() << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of rectangles: ";
    cin >> n;

    Rectangle rect[n];

    for (int i = 0; i < n; i++) {
        float l, w;
        cout << "\nEnter length and width of rectangle " << i + 1 << ": ";
        cin >> l >> w;
        rect[i].setDimensions(l, w);
    }

    cout << "\n--- Rectangle Calculations ---";
    for (int i = 0; i < n; i++) {
        rect[i].display(i);
    }

    return 0;
}
