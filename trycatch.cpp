#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int a, b;

    try { // Outer try
        try { // Inner try
            int index;
            cout << "Enter array index (0-4): ";
            cin >> index;

            if (index < 0 || index >= 5)
                throw "Array index out of bounds";

            cout << "Element at index " << index << " is " << arr[index] << endl;

            cout << "Enter two numbers (a b) for division a/b: ";
            cin >> a >> b;

            if (b == 0)
                throw 1;

            cout << "Result of " << a << "/" << b << " = " << a / b << endl;

        }
        catch (const char* msg) {
            throw; // rethrow to outer catch
        }
        catch (int e) {
            throw; // rethrow to outer catch
        }

    }
    catch (const char* msg) {
        cout << msg << endl;
    }
    catch (int e) {
        cout << "Division by zero error" << endl;
    }

    cout << "Program continues after all catches.\n";

    return 0;
}
