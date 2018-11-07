#include <iostream>

using namespace std;



void mightGoWrong() {
    bool error1 = false;
    bool error2 = true;

    if(error1) {
        throw "Something went wrong";
    }
    if (error2) {
        throw string("Something else went wrong.");
    }
}

void usesMightgoWrong() {
    mightGoWrong();
}


int main() {
    std::cout << "Hello, World!" << std::endl;

    try {
        usesMightgoWrong();
    }
    catch(int e){
        cout << "Error code " << e << endl;
    }
    catch (const char *e){
        cout << "Error message: " << e << endl;
    }
    catch (string &e) {
        cout << "String error message: " << e << endl;
    }

    cout << "Still running" << endl;

    return 0;
}