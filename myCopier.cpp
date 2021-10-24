#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define FILE_PATH "/home/debian/HW6/SonHW6-1"

int main(int argc, char* argv[]){
	if (argc != 3){
		cout << "\nUsage is reading-file and name of file:\n e.g. reading-file sample.txt" << endl;
		return 2;
	}

	string cmd(argv[1]);
	string cmd2(argv[2]);

	fstream fs;
	fstream fs2;

	string line;


///////////////////////////////////////////////////////////////////////////////////////////
	cout << "\nStarting to read file\nThe current FILEPath is: "<< FILE_PATH << endl;
        cout << "First file passed is: " << cmd << endl;
	cout << "Second file passed is: " << cmd2 << "\n" << endl;

	string path(FILE_PATH);

	string pathName = path+"/"+cmd; // /home/debian/HW6/file1.txt;
	cout << "The first string pathName is: " << pathName << endl;
	
	string pathName2 = path+"/"+cmd2; // /home/debian/HW6/file2.txt;
	cout << "The second string pathName2 is: " << pathName2 << endl;

	cout << endl;
	// OPENING BOTH FILES
	fs.open((pathName).c_str(), fstream::in);
	fs2.open((pathName2).c_str(), fstream::out);

	cout << "\nReading file from line 1 to end in file1.txt while writing it to file2.txt...\n" << endl; 

	while(getline(fs,line)){ // read from file1.txt
		cout << line << endl; // print to terminal
		fs2 << line << endl; // print "line" to file2.txt
	}

	cout << "\n...Finished reading and copying files\n" << endl;
	// CLOSING BOTH FILES
	fs.close();	
	fs2.close();

}

