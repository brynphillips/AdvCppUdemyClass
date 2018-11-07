#include <iostream>

using namespace std;

void mightGoWrong() {
    bool error = true;

    if(error) {
        throw "Something went wrong";
    }
}



int main() {
    std::cout << "Hello, World!" << std::endl;

    try {
        mightGoWrong();
    }
    catch(int e){
        cout << "Error code " << e << endl;
    }
    catch (const char *e){
        cout << "Error message: " << e << endl;
    }

    cout << "Still running" << endl;

    return 0;
}