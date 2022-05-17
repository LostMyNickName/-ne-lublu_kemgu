/***************************
* Лукьянов Дмитрий ПИз-211 *
* Базовые понятия языка C# *
* Вариант 5                *
****************************/

using System;

namespace Sem2Laba1BasicConcepts
{
	class Program
	{
		static void Main(string[] args)
		{
			
			int choise = 0;
			do
			{
				Console.WriteLine("1. Первый квест с степенью\n2. Второй квест с какими-то приколами");
				choise = Convert.ToInt32(Console.ReadLine());
			} while (choise > 2 || choise < 1);

			if (choise == 1)
			{
				double a = 0,
				res = 1;
				int n = 0;

				Console.WriteLine("Введите a");
				a = Convert.ToDouble(Console.ReadLine());
				Console.WriteLine("Введите n");
				n = Convert.ToInt32(Console.ReadLine());

				if (n >= 0)
				{
					for (int i = 0; i < n; ++i)
						res *= a;
					Console.Write(res);
				}
				else
				{
					n *= -1;
					for (int i = 0; i < n; ++i)
						res *= a;
					//res = 1 / res;
					Console.Write("1/" + res);
				}
			}

			if (choise == 2)
			{
				string x;

				do
				{
					Console.WriteLine("Введите хэ, которое больше 100");
					x = Console.ReadLine();
				} while (Convert.ToInt64(x) < 100);

				x += x[1];
				x = x.Remove(1,1);

				Console.WriteLine(x);
			}
		}
	}
}
