int main(void)
{
#define N 5
	int vr; //Временная переменная
	//const int N = 5; //Количество элементов в массиве
	int mas[N] = {7,5,3,6,4}; //Ввод элементов массива
	for(int j = 0; j < N; j++) //Первичный проход сравнений
	{
		if (mas[j] > mas[j+1])
		{
			vr = mas[j];
			mas[j] = mas[j+1];
			mas[j+1] = vr;
		}
	}	
	for( int i = 0;i < N-1;i++) // Повторение сравнения ещё 4 раза
	{
		
	for(int j = 0; j < N-1; j++) 
	{
		if (mas[j] > mas[j+1])
		{
			vr = mas[j];
			mas[j] = mas[j+1];
			mas[j+1] = vr;
		}
	
	}
}
return 0;
}
