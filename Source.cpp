#include <iostream>
#include<string>
#include <limits>
using namespace std;

//Encryption :
string Encrypt(const string &Phrase, char key)
{ 
	string Encrypted;

	for (int i = 0; i < Phrase.length(); i++)
	{ 
		Encrypted += Phrase[i] ^ key;
	} 
	return Encrypted;
}

//Decryption :
	string Decrypt(const string &Encryptedphrase ,char key)
{
		string Decrypted;
		for (int i = 0; i < Encryptedphrase.length(); i++)
		{
			Decrypted += Encryptedphrase[i] ^ key;
		}
		return Decrypted;

}

// Menu :
void Menu() {
	int choice, colorchoice;
	string Phrase,Encrypted,Decrypted,Encryptedphrase;
	char key;
	do {
		// Welcome :
		cout << "\n\n\n\n";
		cout << "\t\t\t\t-------------------------------------------------------" << endl;
		cout << "\t\t\t\t| -*-*-*-*-   Welcome  to   ENC/DEC  .exe    -*-*-*-*- | " << endl;
		cout << "\t\t\t\t-------------------------------------------------------" << endl;
		cout << "\n\n";

		// Main Menu :
		cout << " 1. Encryption\n 2. Decryption\n 3. Settings\n 4. Exit\n" << endl;
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1:
			cout << "Enter your desired string to encrypt: \n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin, Phrase);
			cout << "Enter your desired key (Character) to encrypt: \n";
			cin >> key;
			system("cls");
			Encrypted = Encrypt(Phrase, key);
			cout << "Encrypted text: \n" << Encrypted;
			cout << endl;
			system("pause");
			system("cls");
			break;

		case 2:
			cout << "Enter your Encrypted phrase :\n ";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin, Encryptedphrase);
			cout << "Enter your desired key (character) to decrypt : \n";
			cin >> key;
			system("cls");
			Decrypted = Decrypt(Encryptedphrase, key);
			cout << " Decrypted is : \n" << Decrypted;
			cout << endl;
			system("pause");
			system("cls");
			break;

			// Setting :
		case 3:
			cout << " 1. Text color\n2. Credits\n" << endl;
			cin >> colorchoice;
			system("cls");
			// Text color :
			switch (colorchoice) {
			case 1:
				cout << "1. Blue\n2. Green\n3. Cyan\n4. Red\n5. Purple\n6. Yellow\n" << endl;
				int colornumber;
				cin >> colornumber;
				system("cls");
				switch (colornumber)
				{
				case 1:
					system("color 1");
					break;
				case 2:
					system("color 2");
					break;
				case 3:
					system("color 3");
					break;
				case 4:
					system("color 4");
					break;
				case 5:
					system("color 5");
					break;
				case 6:
					system("color 6");
					break;
				default:
					cout << "\n\n\n";
					cout << "\t\t\t\t\t\t-----Not Exist!!!!-----" << endl;
					cout << "\t\t\t\t\t\t\t Try again..." << endl;
					
				}
				return Menu();
			// Credits :
			case 2:
				cout << "\n\n\n\n\n\n";
				cout << "\t\t\t\t\t\t---------------------------------" << endl;
				cout << "\t\t\t\t\t\t|  Created      by     Bjorn    |" << endl;
				cout << "\t\t\t\t\t\t---------------------------------" << endl;
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				system("pause");
				system("cls");
				return Menu();
			}
			break;
			// Exit
		case 4:
			return;
		}
	} while (true);
}

int main() {
	Menu();
	return 0;
}
