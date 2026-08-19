#include <iostream>
using namespace std;
int main(){
    double portCapacity;
    cout << "Enter the maximum capacity of the port(in kg): ";
    cin >> portCapacity;
    double N; // N is the number of containers to be loaded onto the port.
    cout << "Enter the number of containers to be loaded onto the port: ";
    cin >> N;
	double weight;
	double totalWeight;

	cout << "Enter the values of individual weights of containers..." << endl;
	double Heaviest = 0;
	double Lightest = 10000;
	
    double n = 1; // n is the number of container
    while (n <= N){
	cin >> weight;
	totalWeight += weight;
	if (weight > Heaviest){
	Heaviest = weight;
	
}
	if (Lightest > weight){
	Lightest = weight;
}

	n++;
}
	double averageWeight = totalWeight/N;
cout << "Total Shipment Weight: " << totalWeight << endl;
cout << "Average Container Weight: " << averageWeight << endl;
cout << "Heaviest Container: " << Heaviest << endl;
cout << "Lightest Container: " << Lightest << endl;
cout << "Classification: " << (totalWeight > 200 ? "Heavy" : "Light") << endl;
cout << "Port Capacity: " << portCapacity << endl;
cout << "Status: " << (totalWeight > portCapacity ? "Shipment exceeds port capacity" : "Shipment can be unloaded") << endl;
return 0;
}
