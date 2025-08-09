#include <iostream>
#include <string>
#include <fstream>
using mainspace std;

int main(){
  bool DirectoryExists;
  string choice;
  string directory;
  
  cout << "App and Data Restoration Program" << endl;
  cout << "Version indev0.0" << endl << endl;

  if (DirectoryExists == false){
    cout << "Recover directory not found." << endl;
    cout << "Would you like to create one now? (Y/N) ";
    cin >> choice;
    if (choice == y){
      cout << "Enter a new Directory: ";
      cin >> directory;
    } else {
      return 0;
    }
  } else {
    return 0;
  }
}
