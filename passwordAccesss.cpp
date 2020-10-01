#include <iostream>
#include <string>

using namespace std;

int main()
{
	string const bitcoinPK("5KfXfW4x9NS8nRNd1P4sC9ezJHZnBZjgnGcfBr9yeaVBDf1AkVg");
	string const password("azer1234");
	string input("none");
	int trials(3);

	cout << "To access your private key, please enter your password : " << endl;

	do {
		cin >> input;
		trials--;
		if (input != password && trials > 0) {
			cout << "Password Incorrect." << endl << "Trials left : " << trials << endl;
		}
	} while (input != password && trials > 0);
	
	if (input == password) {
		cout << "Successful Authentication !" << endl << "Here is your private key : " << bitcoinPK << endl;
	}
	else if (input != password && trials == 0) {
		cout << "Authentication Failure." << endl << "You have exceeded the number of authorized attempts." << endl;
	}
	
	cout << "End of the program." << endl;

	system("PAUSE");
	return 0;
}
