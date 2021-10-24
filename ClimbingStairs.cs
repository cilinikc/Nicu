using System;

namespace letcode
{
    class Program
    {
        static void Main()
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int result = 0;
            int prevPrev = 1;
            int prev = 2;
            if (n == 0) result = 0;
            if (n == 1) result = 1;
            if (n == 2) result = 2;
            for (int i = 3; i <= n; i++)
            {
                result = prev + prevPrev;                  
                prevPrev = prev;
                prev = result;              
            }
            Console.WriteLine( result);
        }
    }
}

