//Vaughan Vaughan
//Proj 3
//Main file
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <array>
using namespace std;

double matrix[20][20];



/*void displayCities(){
	
	int i;
	int j;

for(i = 0; i < 20; i++) {
	for(j=0; i < 20; j++) {
		cout << matrix[i][j] << " ";
	}
}
	cout << endl;
}

void addEdge(int a, int b, double distance) {

	matrix[a][b] = distance;
	matrix[b][a] = distance;
}
*/

void loadMatrix() {

ifstream inSS;	
inSS.open("distances.txt");

if(inSS.is_open()) {
for(int i = 0; i < 20; i++) {
	for(int j = 0; j < 20; j++) {
		if(i == j) {
			matrix[i][j] = 0;
		}
		else {	
		inSS >> matrix[i][j];
		}
	}

}
}

inSS.close();

//displayCities();

}

int main() {

	int numOfCities;
	int numTours;
	int numGenerations;
	double percentMutate;
	

	cout << "Num of Cities: ";
	cin >> numOfCities;
	
	cout << "Num of Tours: ";
        cin >> numTours;
	
	cout << "Num of Generations: ";
        cin >> numGenerations;
	
	cout << "Percent Mutated: ";
        cin >> percentMutate;

	cout << numOfCities << " " <<  numTours <<  " " << numGenerations << " " << percentMutate;
	cout << endl;
	
	loadMatrix();

	vector<double> map(numOfCities);
	int i = 0;
	while(i != numOfCities){

	int a = i;
	int b = 0;
	if(numOfCities > 20) {

		b = i/20;
		a = i % 20;
	}
	map.at(i) = matrix[a][b];
	cout << map[i] << " ";
	i++;
}

return 0;

}
