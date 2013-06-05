#include <iostream>
using namespace std;

void push(int *stack, int i)
{
	stack[i]=rand()%100;
}

void pop(int *stack, int size, int n)
{
	int *temp;
	temp = new int[size-1];
	for (int i=0; i<n; i++)
		temp[i]=stack[i];
	for(int i=n; i<size-1; i++)
		temp[i]=stack[i+1];
	delete stack;
	stack = new int [size-1];
	for (int i=0; i<size-1; i++)
		stack[i]=temp[i];
	delete temp;
}

void get_val(int *stack, int n, int size)
{
	for(int i=size; i>=n; i--)
	{
		if(i==n)
			cout << "«начение: " << stack[i];
		else
			continue;
	}
}

int main()
{
	system("chcp 1251 > nul");   //  ириллица в командной строке
	int* stack, size, n;
	cout << "¬ведите размер стека: ";
	cin >> size;
	stack = new int[size];
	for(int i=0; i<size; i++)
	{
		push(stack,i);
	}
	cout << "¬ведите номер: ";
	cin >> n;
	get_val(stack,n,size);
	cout << "\n¬ведите новое значение: ";
	cin >> n;
	pop(stack,size,n);
}