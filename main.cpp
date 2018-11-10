#include <iostream>
#include <exception>
#include <fstream>
#include <vector>
#include <list>

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

#pragma pack(push, 1)
struct Person {
    char name[50];
    int age;
    double height;

};
#pragma pack(pop)




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

//    ofstream outFile;
//
//    string outputFileName = "text.txt";
//    outFile.open(outputFileName);
//    if(outFile.is_open()) {
//        for (int i = 0; i < 10; ++i) {
//
//            outFile << "This is line " << i+1 << "." << endl;
//        }
//        outFile.close();
//    }else {
//        cout << "Could not create file: " << outputFileName << endl;
//    }
//
//    string inFileName = "text.txt";
//    ifstream inFile;
//
//    inFile.open(inFileName);
//    if(inFile.is_open()){
//        string line;
//        while(inFile) {
//            getline(inFile, line);
//            cout << line << endl;
//        }
//        inFile.close();
//    } else {
//        cout << "Cannot open file: " << inFileName << endl;
//    }
//    string filename = "stats.txt";
//    ifstream input;
//
//    input.open(filename);
//
//    if (!input.is_open()) {
//        return 1;
//    }
//
//    while (input) {
//        string line;
//        getline(input, line, ':');
//        int population;
//        input >> population;
//
//        input.get();
//        input >> ws;
//        cout << line << " -- " << population << endl;
//
//
//    }
//    input.close();
//    cout << sizeof(Person) << endl;

//    Person someone = {"Frodo", 220, 0.8};
//    string fileName = "test.bin";
//
//    //write binary file////////////
//    ofstream outputFile;
//    outputFile.open(fileName, ios::binary);
//    if (outputFile.is_open()) {
//        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
//        outputFile.close();
//    } else {
//        cout << "Could not create file " + fileName;
//    }
//
//    //read binary file//////////
//
//    Person someoneElse = {};
//    ifstream inputFile;
//    inputFile.open(fileName, ios::binary);
//    if (inputFile.is_open()) {
//        inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
//        inputFile.close();
//    } else {
//        cout << "Could not read file " + fileName;
//    }
//
//    cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

//    vector<string> strings;
//    strings.emplace_back("one");
//    strings.emplace_back("two");
//    strings.emplace_back("three");
//    cout << strings[1] << endl;
//    cout << strings.size() << endl;

//    for (int i = 0; i < strings.size(); ++i) {
//        cout << strings[i] << endl;
//    }
//    for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
//        cout << *it << endl;
//    }
//    for(auto &e: strings) {
//        cout << e << endl;
//    }
//    vector<double> numbers(0);
//
//    cout << "Size: " << numbers.size() << endl;
//
//    int capacity = numbers.capacity();
//    cout << "Capacity: " << capacity << endl;
//    for (int i = 0; i < 10000; ++i) {
//        if(numbers.capacity() != capacity) {
//            capacity = numbers.capacity();
//            cout << "Capacity: " << capacity << endl;
//        }
//        numbers.emplace_back(i);
//        cout << numbers[i] << endl;
//    }
//    numbers.reserve(1000);
//
//    cout << "Size: " << numbers.size() << endl;
//    cout << "Capacity: " << numbers.capacity() << endl;
//    return 0;

//    vector< vector<int> >grid(3, vector<int>(4, 7));
//    grid[1].emplace_back(8);
//    for (auto &row : grid) {
//        for (int &col : row) {
//            cout << col << flush;
//        }
//        cout << endl;
//    }

    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    for (auto nums: numbers) {
        cout << nums;
    }
}