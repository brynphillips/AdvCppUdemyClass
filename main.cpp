#include <iostream>

using namespace std;

//      ****Lesson 1*****
//void mightGoWrong() {
//    bool error1 = false;
//    bool error2 = false;
//    bool error3 = true;
//
//    if(error1) {
//        throw "Something went wrong";
//    }
//    if (error2) {
//        throw string("Something else went wrong.");
//    }
//    if (error3) {
//        throw
//    }
//}
//
//void usesMightgoWrong() {
//    mightGoWrong();
//}

//      ****Lesson 2****
class CanGoWrong {
public:
    CanGoWrong() {
        char *pMemory = new char[999999999999999];
        delete[] pMemory;
    }

};


int main() {

//    ***Lesson 1***
//    std::cout << "Hello, World!" << std::endl;
//
//    try {
//        usesMightgoWrong();
//    }
//    catch(int e){
//        cout << "Error code " << e << endl;
//    }
//    catch (const char *e){
//        cout << "Error message: " << e << endl;
//    }
//    catch (string &e) {
//        cout << "String error message: " << e << endl;
//    }
//
//    cout << "Still running" << endl;

//    ***Lesson 2***

    try {
        CanGoWrong wrong;
    }
    catch (bad_alloc &e) {
        cout << "Caught excpetion: " <<  e.what() << endl;
    }

    cout << "Still running";


    return 0;
}