#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, count = 0;
    cin >> x;

    for (int i = 0; i < x; i++) {
        string shape;
        cin >> shape;

        if (shape == "Tetrahedron") {
            count += 4;
        } else if (shape == "Cube") {
            count += 6;
        } else if (shape == "Octahedron") {
            count += 8;
        } else if (shape == "Dodecahedron") {
            count += 12;
        } else if (shape == "Icosahedron") {
            count += 20;
        }
    }

    cout << count << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
   cout<<"Hello World"<<"\n";
    return 0;
}
