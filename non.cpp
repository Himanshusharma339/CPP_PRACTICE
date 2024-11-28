// // first non- repeating element
// #include<iostream>
// #include<string>
// using namespace std;

// char nonrepeating(string str){
//    int n= str.length();

//    for(int i=0;i<n;i++)
//    {
//     bool isunique= true;
   

//    for(int j=0;j<n;j++)
//    {
//     if(i != j && str[i] ==str[j])
//     {
//         isunique = false;
//         break;
//     }
//    }
//    if(isunique)
//    {
//     return str[i];
//    }
//    }
//    return '\0';
// }


// int main()
// {
//     string str = "abccddeefgh";
//     char result = nonrepeating(str);

//     if(result!=str)
//     {
//         cout<<"non repeating result is"<<result<<endl;
//     }
//     else
//     {
//         cout<<"repeated result found"<<endl;
//     }
//     return 0;

// }

#include <iostream>
#include <string>
using namespace std;

char firstNonRepeating(string str) {
    int n = str.length();

    // Check each character one by one
    for (int i = 0; i < n; i++) {
        bool isUnique = true;

        // Compare the current character with every other character
        for (int j = 0; j < n; j++) {
            if (i != j && str[i] == str[j]) {
                isUnique = false;
                break;
            }
        }

        // If the character is unique, return it
        if (isUnique) {
            return str[i];
        }
    }

    return '\0'; // Return null character if no non-repeating character is found
}

int main() {
    string str = "aabbcddee";
    char result = firstNonRepeating(str);

    if (result != '\0') {
        cout << "First non-repeating character: " << result << endl;
    } else {
        cout << "No non-repeating character found" << endl;
    }

    return 0;
}


