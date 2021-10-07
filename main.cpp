#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

bool openFile(ifstream * file) {
    file->open("scrabbleDIctionary.txt");

    if(!*file)
        return false;
    else
        return true;
}

int main()
{
    ifstream stream;
    vector <string> dictionary;
    string reader;
    string searchWord = "CIVILIZATION";
    string wordHolder = " ";
    int index;

    if(!openFile(&stream))
        cout << "File Open Failure" << endl;

    while(getline(stream,reader)) {
        dictionary.push_back(reader);
    }

    for(int i = 0; searchWord != wordHolder && i < dictionary.size(); i++) {
        wordHolder = dictionary[i];
        index = i;
    }

    if(dictionary[index] != searchWord)
            cout << "INVALID WORD" << endl;

    else
        cout << dictionary[index] << endl;

    cout << index << endl;

    cout << dictionary.size() << endl;








    stream.close();

    return 0;
}


//create different search functions

//if not found while looking through the section of all words beginning with
// the first letter of the search word then immediately conclude that it is false


//Given a string of letters, output all possible words that could be spelled
// question mark represents a wildcard


