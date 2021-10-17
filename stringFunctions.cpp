#include <iostream>
using namespace std;

int main()
{
  // ! string.length() returns length of string

  // string first_name;

  // cout << "Enter your first name: ";
  // getline(cin, first_name);

  // cout << "your first name: " << first_name.length() << " character" << endl;

  //  ! string.empty() returns true if empty
  // string blood_group;

  // cout << "Enter Your Blood Type: ";
  // getline(cin, blood_group);

  // if (blood_group.empty())
  // {
  //   cout << "you do not display blood type" << endl;
  //   cout << "empty string:" << blood_group.empty() << endl;
  // }
  // else
  // {
  //   cout << "your blood type: " << blood_group << endl;
  // }

  //  ! string.clear() clears a string
  // string task = "fishing";

  // task.clear();
  // cout << "your task today: " << task << endl;

  // ! string1.append(string2) appends a string
  // string userName = "novaardiansyah";
  // string email = userName.append("@gmail.com");

  // cout << "Your email now is: " << email << endl;

  // ! string.at(index) returns a character at a given index
  // string firstName = "nova", lastName = "ardiansyah";

  // cout << "Your initials are: " << firstName.at(0) << lastName.at(0) << endl;

  // ! string.substr(int x, int y) retrieve a portion of string
  // string fullName = "nova ardiansyah", nickname = fullName.substr(0, 3);
  // cout << "your nickname: " << nickname << endl;

  // ! string1.insert(int x, string2) insert a string into another string
  // string fullName = "novaardiansyah";
  // cout << "Mods: " << fullName.insert(0, "@") << endl;

  // ! string1.find(string2) find index position by string
  // string fullName = "novaardiansyah";
  // cout << "the letter r is on the index: " << fullName.find('r') << endl;

  // ! string.erase(int  x, int y) delete string based on index position
  // string fullName = "novaardiansyah";
  // cout << "your last name: " << fullName.erase(0, 4) << endl;

  return 0;
}