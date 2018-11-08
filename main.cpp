#include <iostream>
#include <exception>
#include <fstream>

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
//class CanGoWrong {
//public:
//    CanGoWrong() {
//        char *pMemory = new char[999999999999999];
//        delete[] pMemory;
//    }
//
//};

//      ****Lesson 3****
//class MyException: public exception{
//public:
//    virtual const char* what() const throw() {
//        return "Something bad happened!";
//    }
//};
//
//class Test {
//public:
//    void goesWrong() {
//        throw MyException();
//    }
//};
//
//void goesWrong() {
//    bool error1Detected = false;
//    bool error2Detected = true;
//
//    if (error1Detected) {
//        throw bad_alloc();
//    }
//
//    if (error2Detected) {
//        throw exception();
//    }
//}




int main() {

//    ***Lesson 1***
//
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
//
//    try {
//        CanGoWrong wrong;
//    }
//    catch (bad_alloc &e) {
//        cout << "Caught excpetion: " <<  e.what() << endl;
//    }
//
//    cout << "Still running";

//      ****Lesson 3****

//    Test test;
//    try {
//        test.goesWrong();
//    }
//    catch(MyException &e) {
//        cout << e.what() << endl;
//    }

//    cout << "Hello!";

//    try {
//        goesWrong();
//    }
//    catch (bad_alloc &e) {
//        cout << "Catching bad_alloc: " << e.what() << endl;
//    }
//    catch (exception &e) {
//        cout << "Catching exception: " << e.what() << endl;
//    }

    ofstream outFile;

    string outputFileName = "text.txt";
    outFile.open(outputFileName);
    if(outFile.is_open()) {
        for (int i = 0; i < 10; ++i) {

            outFile << "This is line " << i+1 << "." << endl;
        }
        outFile.close();
    }else {
        cout << "Could not create file: " << outputFileName << endl;
    }

    string inFileName = "text.txt";
    ifstream inFile;

    inFile.open(inFileName);
    if(inFile.is_open()){
        string line;
        while(inFile) {
            getline(inFile, line);
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Cannot open file: " << inFileName << endl;
    }



    return 0;
}