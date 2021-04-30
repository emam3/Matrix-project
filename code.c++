#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <iomanip>

using namespace std;

void BE() {
	string m = "3x+2x-y+3y=5";
	int x = 0;
	float xx[100];
	string var[100], varss[100][100];
	string n[100], yy[100];
	string mm;
	string bb, b = "";
	mm = m;
	int k = m.find("=");
	int position = k;
	for (int i = 0; i <= k; i++) { //storing vars+co in the fuckin array
		if (mm.substr(i, 1) == "+" || mm.substr(i, 1) == "-" || mm.substr(i, 1) == "=") {
			n[x] = mm.substr(0, i);
			mm = mm.substr(i, k);
			x++;
			k = mm.find("=");
			i = 0;
		}
	}



	// No. of var
	int nov = 0;
	for (int i = 0; i < position;i++)
	{
		if (m.substr(i, 1) == "+" || m.substr(i, 1) == "-")
		{
			nov++;
		}
	}

	if (m.substr(0, 1) == "-")
	{

	}
	else
	{
		nov++;
	}

	int i = 0;
	for (; i<nov; i++) {
		xx[i] = atof(n[i].c_str());
		if (xx[i] == 0) {
			xx[i] = 1;
		}
		ostringstream ss;
		ss << xx[i];
		yy[i] = ss.str();
	}


	cout << "note that nov is : " << nov << endl;

	//note that --->  i = nov -1


	cout << n[0] << "  " << n[1] << "   " << n[2] << endl;
	cout << xx[0] << "  " << xx[1] << "   " << xx[2] << endl;

	//3x+2x+y=5

	for (int j = 0; j < i;j++) { //only vars
		int a = n[j].length();
		int aa = yy[j].length();
		if (n[j].substr(0, 1) == "+") {
			cout << "var : " << n[j].substr(aa + 1, (a - aa)) << endl;
			varss[0][j] = n[j].substr(aa + 1, (a - aa));

			if (xx[j] == 1) {
				varss[0][j] = n[j];
			}
		}



		else {
			cout << "var : " << n[j].substr(aa, (a - aa)) << endl;
			varss[0][j] = n[j].substr(aa, (a - aa));
		}

	}

	for (int j = 0; j < i;j++) {
		varss[1][j] = yy[j];
	}

	//Equations before eltgmee3
	cout << left << setw(12) << varss[0][0] << left << setw(12) << varss[0][1] << left << setw(12) << varss[0][2] << endl;
	cout << left << setw(12) << varss[1][0] << left << setw(12) << varss[1][1] << left << setw(12) << varss[1][2] << endl;



	for (int j = 0; j < i;j++) {
		for (int a = 0; a<i;a++) {
			//int c = a + 1;
			if (varss[0][j] == varss[0][a] && j != a) {
				int x = atof(varss[1][j].c_str()) + atof(varss[1][a].c_str());

				varss[1][a] = "0";
				varss[0][a] = "0";
				ostringstream ss;
				ss << x;
				varss[1][j] = ss.str();
			}

		}

	}

	//Equations after eltgmee3
	cout << endl << endl;
	cout << left << setw(12) << varss[0][0] << left << setw(12) << varss[0][1] << left << setw(12) << varss[0][2] << endl;
	cout << left << setw(12) << varss[1][0] << left << setw(12) << varss[1][1] << left << setw(12) << varss[1][2] << endl;

	string a = varss[1][0] + varss[0][0] + "+" + varss[1][1] + varss[0][1];
	cout << a << "     Elmo3dlaa";

	//return a;
}


void AE() {
	string m = "3x+2x-y+3y=3x+2x-y+3y+5";
	int x = 0;
	float xx[100];
	string var[100], varss[100][100];
	string n[100], yy[100];
	string mm;
	string bb, b = "";
	mm = m;
	int y = m.length();
	int k = m.find("=");
	int z = y - k;
	int position = z;
	for (int i = 0; i <= z; i++) { //storing vars+co in the fuckin array
		if (mm.substr(i, 1) == "+" || mm.substr(i, 1) == "-" || mm.substr(i, 1) == "=") {
			n[x] = mm.substr(0, i);
			mm = mm.substr(i, z);
			x++;
			z = mm.find("=");
			i = 0;
		}
	}



	// No. of var
	int nov = 0;
	for (int i = 0; i < position;i++)
	{
		if (m.substr(i, 1) == "+" || m.substr(i, 1) == "-")
		{
			nov++;
		}
	}

	if (m.substr(0, 1) == "-")
	{

	}
	else
	{
		nov++;
	}

	int i = 0;
	for (; i<nov; i++) {
		xx[i] = atof(n[i].c_str());
		if (xx[i] == 0) {
			xx[i] = 1;
		}
		ostringstream ss;
		ss << xx[i];
		yy[i] = ss.str();
	}


	cout << "note that nov is : " << nov << endl;

	//note that --->  i = nov -1


	cout << n[0] << "  " << n[1] << "   " << n[2] << endl;
	cout << xx[0] << "  " << xx[1] << "   " << xx[2] << endl;

	//3x+2x+y=5

	for (int j = 0; j < i;j++) { //only vars
		int a = n[j].length();
		int aa = yy[j].length();
		if (n[j].substr(0, 1) == "+") {
			cout << "var : " << n[j].substr(aa + 1, (a - aa)) << endl;
			varss[0][j] = n[j].substr(aa + 1, (a - aa));

			if (xx[j] == 1) {
				varss[0][j] = n[j];
			}
		}



		else {
			cout << "var : " << n[j].substr(aa, (a - aa)) << endl;
			varss[0][j] = n[j].substr(aa, (a - aa));
		}

	}

	for (int j = 0; j < i;j++) {
		varss[1][j] = yy[j];
	}

	//Equations before eltgmee3
	cout << left << setw(12) << varss[0][0] << left << setw(12) << varss[0][1] << left << setw(12) << varss[0][2] << endl;
	cout << left << setw(12) << varss[1][0] << left << setw(12) << varss[1][1] << left << setw(12) << varss[1][2] << endl;



	for (int j = 0; j < i;j++) {
		for (int a = 0; a<i;a++) {
			//int c = a + 1;
			if (varss[0][j] == varss[0][a] && j != a) {
				int x = atof(varss[1][j].c_str()) + atof(varss[1][a].c_str());

				varss[1][a] = "0";
				varss[0][a] = "0";
				ostringstream ss;
				ss << x;
				varss[1][j] = ss.str();
			}

		}

	}

	//Equations after eltgmee3
	cout << endl << endl;
	cout << left << setw(12) << varss[0][0] << left << setw(12) << varss[0][1] << left << setw(12) << varss[0][2] << endl;
	cout << left << setw(12) << varss[1][0] << left << setw(12) << varss[1][1] << left << setw(12) << varss[1][2] << endl;

	string a = varss[1][0] + varss[0][0] + "+" + varss[1][1] + varss[0][1];
	cout << a << "     Elmo3dlaa";

	//return a;
}

int main()
{
	string x;
	BE();
	cout << endl << endl;
	AE();
	//cout << BE(x) << "     Elmo3dlaa" ;

	cin.get();
	cin.ignore();
	cin.clear();

	return 0;
}

// first
//int n,postion;
//string m;
//cin>> n;
//for(int i=0;i<n;i++)
//{
//cin>>m;
//}
//postion=m.find("=");
//int sum =0;
//for(int i=0;i<postion;i++)
//{
//	if(m.substr(i,1) =="+"|| m.substr(i,1)=="-")
//	{
//	sum++;
//	}
//}
//	if(m.substr(0,1)=="-")
//	{
//
//	}
//	else
//	{
//sum++;
//	}
//	cout<<sum;
//


//
// second
//string eq[100];
//	int n;
//	cin >> n ;
//	for(int i=0;i<n;i++) {
//	cin >> eq[i];
//	cout << endl;
//	}
//	
//	string A,B;
//	cin >> A;
//	int C;
//	B=A.substr(8);
//	C=atof(B.c_str());
//	C=C-1;
//	cout<< eq[C];

// third
//int n ;
//	cin >> n ;
//    string m[100];
//	for (int i=0 ; i<n ;i++) {
//		cin>>m[i];
//	}
//	string a;
//	cin>>a;
//	for (int j=0 ; j<n ; j++) {
//	string b;
//	b=a.substr(6);
//	int x= m[j].find(b);
//	int z=x;
//	while(true) {
//		if (x==0) {
//			break;
//		} else {
//		z=z-1;
//		if (m[j].substr(z,1)=="+"||m[j].substr(z,1)=="-" || z==0 ) {
//			break;
//		} 
//		}
//
//	}
//	string aa = m[j].substr(z,x) ;
//	float v ;
//	v=atof(aa.c_str());
//	if (x==0) {
//		cout<< "1" <<endl;
//	} else if ( m[j].substr(0,1)=="-" && v==0 ) {
//		cout<<"-1"<<endl;
//	}
//	
//	else {
//	cout<< v <<endl;
//	}
//
//	}