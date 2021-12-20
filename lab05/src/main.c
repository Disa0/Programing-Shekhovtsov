int main()
{
	int chislo=123;//Число,в котором будем чтичать колицество цифр
	int cifr; //Ввод переменной,которую отведём под количество цифр 
	do
{
cifr++;
chislo/=10;
}
	while(chislo>0);
return 0;
}
