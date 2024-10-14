#include <iostream>

using namespace std;

//Общие функции

//Сортировка массива по возрастанию

//void SortedElementArray(double* arr, int lenght)
//{
//	double x;
//	for (int i = 0; i < lenght - 1; i++) {
//		for (int j = 0; j < lenght - i - 1; j++) {
//
//			if (arr[j] > arr[j + 1]) {
//				x = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = x;
//			}
//		}
//	}
//}

//Поиск индекса массива

//int SearchElementArray(int* arr,int lenght, int element) {
//	for (int i = 0; i < lenght; i++) {
//		if (arr[i] == element)
//		{
//			return i;
//		}
//	}
//	return -1;
//}

int NumberOfLetters(char* arr, int lenght, int k) {
	for (int i = 0; i < lenght; i++) {
		//TODO: rewrite
		if ((arr[i] >= 'a') && (arr[i] <= 122)) {
			k++;
		}
	}
	return k;
}


//Задание 1

//void Breakpoints() {
// Задание 1.1
// 
//	/*double add = 3.1;
//	double sum = 0.0;
//	for (int i = 0; i < 20; i++)
//	{
//		sum += add * i;
//		add *= 1.1;
//	}*/
//
// Задание 1.2
// 
//	double add = 1.0;
//	double sum = 0.0;
//
//	for (int i = 0; i < 1000; i++) {
//		sum += add * i;
//		if (i % 3 == 0)
//		{
//			add *= 1.1;
//		}
//		else {
//			add /= 3.0;
//		}
//	}
//	cout << "Total sum is " << sum << endl;
//}



//Задание 3.1

//double GetPower(double base, int exponent) {
//	return pow(base,exponent);
//}
//
//void DemoGetPower(double base, int exponent) {
//	cout << base <<'^' << exponent <<'= ' << GetPower(base, exponent);
//}

//Задание 3.2

//void RoundToTens(int& value) {
//	cout << "For " << value;
//
//	if (value % 10 < 5)
//	{
//		value = (value / 10) * 10;
//	}
//	else  {
//		value = (value / 10) * 10;
//		value += 10;
//	}
//	cout << " rounded value is " << value;
//}


//Задание 4

//void Foo(double a)
//{
//	cout << "Adress of a in Foo(): " << &a << endl;
//	cout << "Value of a in Foo(): " << a << endl;
//
//	a = 15.0;
//	cout << "New a value of a in Foo(): " << a << endl;
//}

//Задание 4.5

//void Foo(double* a)
//{
//	cout << "Adress in pointer: " << a << endl;
//	cout << "Adress of pointer" << &a << endl;
//	cout << "Value in pointer adress: " << *a << endl;
//
//	*a = 15.0;
//	cout << "New value in pointer adress: " << *a << endl;
//
//}


//Задание 6

//struct Person
//{
//	string FirstName;
//	string LastName;
//	unsigned Age;
//};
//
//
////вывод структуры Person
//void WritePerson(const Person& person)
//{
//	cout << "First name: " + person.FirstName +
//		";  Last name: " + person.LastName + 
//		";  Age: ";
//	cout << person.Age << endl;
//}
//
//const int peopleСount = 5;
//
//
//Person** CreatePeopleArray()
//{
//	Person** people = new Person* [peopleСount];
//	people[0] = new Person();
//	people[0]->FirstName = "casey";
//	people[0]->LastName = "jhons";
//	people[0]->Age = 30;
//
//	people[1] = new Person();
//	people[1]->FirstName = "brock";
//	people[1]->LastName = "brick";
//	people[1]->Age = 19;
//
//	people[2] = new Person();
//	people[2]->FirstName = "blake";
//	people[2]->LastName = "bozez";
//	people[2]->Age = 21;
//
//	people[3] = new Person();
//	people[3]->FirstName = "jorno";
//	people[3]->LastName = "jovano";
//	people[3]->Age = 55;
//
//	people[4] = new Person();
//	people[4]->FirstName = "low";
//	people[4]->LastName = "skill";
//	people[4]->Age = 4;
//
//	return people;
//}
//
//void ClearPerson(Person* person)
//{
//	delete person;
//}
//
//void ClearPeople(Person** people, int itemscount)
//{
//	for (int i = 0; i < itemscount; i++)
//	{
//		ClearPerson(people[i]);
//	}
//	delete[] people;
//}
//
//int FindPersonByLastName(Person** people, int count, std::string lastname)
//{
//	for (int i = 0; i < count; i++)
//	{
//		if (people[i]->LastName == lastname)
//		{
//			return i;
//		}
//	}
//	return -1;
//}


int main() {
	//Задание 1

	//Breakpoints();



	//Задание 2.1

	//int arr[10] = { -1,-2,-3,-4,1,2,3,4,5,6 };
	//cout << "Source array is: " << endl;
	//for (int i = 0; i < 10; i++)
	//{
	//	//cout << "Source array is:" << arr[i] << endl;
	//	cout << arr[i]<<" ";
	//}


	//Задание 2.2

	/*const int lenght = 10;
	int x = 0;
	int arr[lenght] = { -51,2,5,-2,-9,-7,1,8,4,3 };

	for (int i = 0; i < lenght - 1; i++) {
		for (int j = 1; j < lenght - i - 1; j++) {

			if (arr[j] > arr[j + 1]) {
				x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
	cout << "Sorted arr is: " << endl;
	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}*/


	//Задание 2.3

	/*const int lenght = 12;
	int k=0;
	double arr[lenght] = { 12.0, 21.5, 119.2, - 80.7, 300.0, 75.5, 81.2,
		8.1, 47.3, 31.2, 85.3, 100.1 };
	double searchingValue;

	cout << "Enter a real number from the keyboard:" << endl;
	cin >> searchingValue;

	cout<<endl << "Source array is:"<<endl;

	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
		if (searchingValue <= arr[i])
		{
			k++;
		}
	}
	cout<<endl<<endl << "Enter searching value:"<<searchingValue << endl;
	cout << "Elements of array more than " << searchingValue << " is:" << k;*/


	//Задание 2.4

	/*const int lenght = 8;
	char arr[lenght] = {};

	for (int i = 0; i < lenght; i++) {
		cout << "Enter a real number from the keyboard: ";
		cin >> arr[i];
	}

	cout<< endl << "Enter array of 8 chars: " << endl;
	for (int i = 0; i < lenght; i++)
	{
		cout << "array: " << "[" << i << "]: " << arr[i] << endl;
	}

	cout<< endl<< "All letters in your array: ";
	for (int i = 0; i < lenght; i++)
	{
		if ((arr[i] >= 98) && (arr[i] <= 122)) {
			cout << arr[i]<< " ";
		}
	}*/



	//Задание 3.1

	/*cout << GetPower(1.1, 3) << endl;;
	cout << GetPower(11.1, 3) << endl;;
	cout << GetPower(-1.1, 3);*/

	//cout << DemoGetPower(1.1, 3);

	//Задание 3.2

	/*int a = 45;
	RoundToTens(a);*/

	//Задание 4.1

	int a = 5;
	int b = 4;

	cout << "Address of a: " << &a << endl;
	cout << "Address of a: " << &b << endl;

	double c = 13.5;
	cout << "Address of a: " << &c << endl;

	bool d = true;
	cout << "Address of a: " << &d << endl;

	//Задание 4.2

	/*int a[10] = { 1, 2, 7, -1, 5, 3, -1, 7, 1, 6 };

	cout << "Size of int type: " << sizeof(int) << endl;

	for (int i = 0; i < 10; i++){
		cout << "Address of a[" << i << "]: " << &a[i] << endl;
	}

	double b[10] = { 1.0, 2.0, 7.0, -1.0, 5.0, 3.5, -1.8, 7.2, 1.9, 6.2 };
	cout<<endl << "Size of double type: " << sizeof(double) << endl;

	for (int i = 0; i < 10; i++) {
		cout << "Address of b[" << i << "]: " << &b[i] << endl;
	}*/

	//Задание 4.3

	/*int a = 5;
	int& b = a;

	cout << "Adress of a: " << &a << endl;
	cout << "Adress of a: " << &b << endl;

	b = 7;
	cout<<endl << "Value of a:" << a << endl;*/


	//Задание 4.4

	/*double a = 5.0;
	cout << "Adress of a in main(): " << &a << endl;
	cout << "Value of a in main(): " << a << endl;
	cout << endl;

	Foo(a);

	cout << endl;
	cout << "Value of a in main(): " << a << endl;*/
	//Задание 4.5

	/*int a = 5;
	int* pointer = &a;

	cout << "Adress of a: " << &a << endl;
	cout << "Adress in pointer: " << pointer << endl;
	cout << "adress of pointer: " << &pointer << endl;

	cout << endl;
	*pointer = 7;
	cout << "Value in a: " << a << endl;
	cout << "Value by pointer adress: " << *pointer << endl;*/

	//Задание 4.6

	/*double value = 5.0;
	double* pointer = &value;

	cout << "Adress of value in main(): " << &value << endl;
	cout << "Adress in pointer in main(): " << pointer << endl;
	cout << "Adress of pointer in main(): " << &pointer << endl;
	cout << "Value of a in main(): " << value << endl;
	cout << endl;

	Foo(pointer);
	cout << endl << "Value of a in main(): " << value << endl;*/

	//Задание 5.1

	/*int lenght = 8;
	double* arr = new double [lenght];
	arr[0] = 1.0;
	arr[1] = 15.0;
	arr[2] = -8.2;
	arr[3] = -3.5;
	arr[4] = 12.6;
	arr[5] = 38.4;
	arr[6] = -0.6;
	arr[7] = 4.5;

	cout << "Array of double: " << endl;
	for (int i = 0; i < lenght; i++) {
		cout << arr[i] << " ";
	}

	delete[] arr;*/

	//Задание 5.2

	/*int size = 8;
	bool* arr = new bool[size];

	arr[0] = true;
	arr[1]= false;
	arr[2] = true;
	arr[3] = true;
	arr[4] = false;
	arr[5] = true;
	arr[6] = false;
	arr[7] = false;

	cout << "Array of bool: " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	delete[] arr;*/

	//Задание 5.3

	/*int lenght;
	cout << "Lenght array: ";
	cin >> lenght;

	char* arr = new char[lenght];

	cout << "Enter char array size: " << lenght << endl;
	for (int i = 0; i < lenght; i++)
	{
		cout << "Enter the array elements: ";
		cin >> arr[i];
	}

	cout << "Your char array is: " << endl;
	for (int i = 0; i < lenght; i++) {
		cout << arr[i]<<" ";
	}

	delete[] arr;*/

	//Задание 5.4

	/*int lenght = 10;
	double* arr = new double[lenght];
	int x;

	arr[0] = 1.0;
	arr[1] = 15.0;
	arr[2] = -8.2;
	arr[3] = -3.5;
	arr[4] = 12.6;
	arr[5] = 38.4;
	arr[6] = -0.5;
	arr[7] = -4.5;
	arr[8] = 16.7;
	arr[9] = 4.5;
	cout << "Array of double: " << endl;
	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << ' ';
	}

	SortedElementArray(arr, lenght);

	cout<<endl << "Sorted arr is: " << endl;
	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;*/


	//Задание 5.5

	/*int lenght = 10;
	int* arr = new int[lenght];
	int element = 12;
	int item = SearchElementArray(arr, lenght, element);

	arr[0] = 2;
	arr[1] = 32;
	arr[2] = 5;
	arr[3] = 89;
	arr[4] = -2;
	arr[5] = 12;
	arr[6] = 712;
	arr[7] = 21;
	arr[8] = 20;
	arr[9] = 28;

	cout << "Int array: " << endl;
	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << ' ';
	}

	cout << endl << "Enter searching value: " << element << endl;
	if (item != -1)
	{
		cout << "Index of searching value " << element << " is: " << item << endl;
	}
	else {
		cout << "Index is not searching";
	}

	delete[] arr;*/

	//Задание 5.6

	/*int lenght = 15;
	char* arr = new char[lenght];
	int k = 0;
	char array = NumberOfLetters(arr, lenght, k);

	arr[0] = 'q';
	arr[1] = 'e';
	arr[2] = 'd';
	arr[3] = 't';
	arr[4] = 'g';
	arr[5] = 'h';
	arr[6] = 'k';
	arr[7] = '5';
	arr[8] = '7';
	arr[9] = '^';
	arr[10] = '0';
	arr[11] = '@';
	arr[12] = 'l';
	arr[13] = 'n';
	arr[14] = 'z';

	cout << array;
	delete[] arr;*/

}

//int main(){
//	//Задание 6
//
//	Person** people = CreatePeopleArray();
//
//	for (int i = 0; i < peopleСount; i++)
//	{
//		WritePerson(*people[i]);
//	}
//
//	string lastname;
//
//	cout << "Enter Last Name: ";
//	cin >> lastname;
//
//	int foundIndex = FindPersonByLastName(people, peopleСount, lastname);
//
//	if (foundIndex == -1)
//	{
//		cout << "could not find a person by last name: " 
//			<< lastname << endl;
//	}
//	else
//	{
//		cout << "a person's last name " << lastname
//			<< " was found. its index in the array is " 
//			<< foundIndex << endl;
//	}
//
//	ClearPeople(people, peopleСount);
//}
