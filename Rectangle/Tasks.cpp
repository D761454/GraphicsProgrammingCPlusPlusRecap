#include "Header.h"

//1
//int main() 
//{
//	int listOfNumbers[10];
//	TakeUserArrayInput(listOfNumbers);
//	GetHighestNumber(listOfNumbers);
//}
//
//void TakeUserArrayInput(int *array) 
//{
//	int num;
//	for (int i = 0; i < 10; i++) {
//		cout << "Number: ";
//		cin >> num;
//		array[i] = num;
//	}
//}
//
//void GetHighestNumber(int* array) {
//	int largest = 0;
//	for (int i = 0; i <= 10; i++) {
//		if (array[i] > largest) {
//			largest = array[i];
//		}
//	}
//	cout << "Largest number: " << largest << endl;
//}

//2
////int main()
////{
////    int width;
////    int height;
////    InputRectangle(width, height);
////    OutputRectangleArea(width, height);
////    OutputRectanglePerimiter(width, height);
////}
//
//void InputRectangle(int& width, int& height) 
//{
//    cout << "Width: " << endl;
//    cin >> width;
//    cout << "Height: " << endl;
//    cin >> height;
//}
//
//void OutputRectangleArea(const int width, const int height) 
//{
//    cout << "The area of the rectangle is: " << width * height << endl;
//}
//
//void OutputRectanglePerimiter(const int width, const int height) 
//{
//    cout << "The perimiter of the rectangle is: " << 2 * width + 2 * height << endl;
//}

//3
//int main() {
//	Menu();
//}
//
//void Menu() {
//	cout << "1. Sunny 2. Cloudy 3. Raning 4. Exit" << endl;
//	int choice;
//	do {
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			cout << "Don't forget sunscreen." << endl;
//			break;
//		case 2:
//			cout << "Bit overcast, don't you think?" << endl;
//			break;
//		case 3:
//			cout << "Don't forget an umbrella." << endl;
//			break;
//		case 4:
//			cout << "Bye." << endl;
//			break;
//		default:
//			break;
//		}
//	} while (choice != 4);
//}

//4
//int main() {
//	int number;
//	cin >> number;
//	UpToNumber(number);
//}
//
//void UpToNumber(int Target) {
//	for (int i = 1; i <= Target; i++) {
//		for (int j = 1; j <= i; j++) {
//			cout << j << " ";
//		}
//		cout << endl;
//	}
//}

//5
//class MathsExperiment {
//	float add(const float& a, const float& b)
//	{
//		return a + b;
//	}
//
//	float subtract(const float& a, const float& b)
//	{
//		return a - b;
//	}
//
//	float multiply(const float& a, const float& b)
//	{
//		return a * b;
//	}
//
//	float divide(const float& a, const float& b)
//	{
//		if (b != 0) {
//			return a / b;
//		}
//		else {
//			cout << "Division by 0 is unallowed!" << endl;
//			return NULL;
//		}
//	}
//};
//
//class AccountExperiment {
//	int totalBalance;
//	float interestRate;
//
//public:
//	void Print() {
//		cout << "Balance: " << totalBalance << endl;;
//	}
//
//	void SetBalance(int newBalance) {
//		totalBalance = newBalance;
//	}
//
//	void AddToBalance(int addition) {
//		totalBalance += addition;
//	}
//
//	void SetInterestRate(float newRate) {
//		if (1 >= newRate >= 0) {
//			interestRate = newRate;
//		}
//		else {
//			cout << "New interest rate Not within Parameters!" << endl;
//		}
//	}
//
//	void ApplyInterestRate() {
//		totalBalance += totalBalance*interestRate;
//	}
//};
//
//MathsExperiment me;
//MathsExperiment* me2 = new MathsExperiment();
//
//AccountExperiment acc1;
//
//int main() {
//	delete me2;
//
//	acc1.SetBalance(1000);
//	acc1.SetInterestRate(0.5);
//	acc1.ApplyInterestRate();
//	acc1.Print();
//}
