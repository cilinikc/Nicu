using System;

namespace nik
{
    class Program
    {
        static void Main(string[] args)
        {
            double result=0;
            int totalBalls, realBalls, categ=6;
            string category;
            totalBalls = Convert.ToInt32(Console.ReadLine());
            realBalls = Convert.ToInt32(Console.ReadLine());
            category = Console.ReadLine();
            switch (category)
            {
                case "I": categ = realBalls;
                    break;
                case "II":
                    categ = realBalls-1;
                    break;
                case "III":
                    categ = realBalls-2;
                    break;
            }
                          
             result = (Combinari(realBalls, categ) * Combinari(totalBalls - realBalls, realBalls - categ))/ Combinari(totalBalls, realBalls);
            Console.WriteLine(String.Format("{0:F10}", result));
            Console.Read();
        }
        static double Factorial(double number)
        {
            double factorial = 1;
            for (int i = 1; i <= number; i++)
            {
                factorial*= i ;
            }
            return factorial;
        }
        static double Combinari(double n, double k)
        {
            return Factorial(n) / (Factorial(k) * Factorial(n - k));
        }
    }
    }


	

