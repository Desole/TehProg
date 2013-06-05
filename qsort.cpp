#include <iostream>
//#include <stdafx.h>
#include <time.h>
using namespace std;

void sort (int*mas,int low,int high)
{
	int a=low;
	int b=high;
	int c= mas[(low+high)/2];
do
{
while (mas[a]<c) ++a;
while (mas[b]>c) --b;
if (a<=b)
{
	int temp=mas[a];
	mas[a]=mas[b];
	mas[b]=temp;
	a++;b--;
}
}
while (a<b);
 if(low < b) 
	 sort(mas, low, b);
 if(a < high) 
	 sort(mas, a, high);
 }

int main()
{
	int n;
    srand(time(NULL));
	cout<<"Enter n: ";
	cin>>n;
		int *mas = new int[n]; // Выделение памяти для массива
    for (int i = 0; i <n; i++) 
	{
        // Заполнение массива и вывод значений его элементов
        mas[i] = rand() %1000;
        cout <<  i << " = " << mas[i] << endl;
    }
	sort(mas,0,n-1);
	cout <<"\n sort: \n";
	for (int i = 0; i <n; i++) 
	{
        cout <<  i << " =" << mas[i] << endl;
    }
    delete [] mas;
    return 0;

}


