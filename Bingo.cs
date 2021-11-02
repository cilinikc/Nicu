using System;

namespace Probe
{
    class Program
    {
        private static void Main()
        {
            int lineOk = 0;
            const int line = 3;
            const int line2 = 3;
            const int line3 = 6;
            const int entries = 9;
            const int extract = 15;
            int[] cart = new int[9];
            int[] extracted = new int[15];
            int count = 0;
            string input = "";
            for (int i = 0; i < line; i++)
            {
                input += Console.ReadLine() + ' ';
            }

            for (int i = 0; i < extract; i++)
            {
                extracted[i] = Convert.ToInt32(Console.ReadLine());
            }

            string[] inputArray = input.Split(' ');
            for (int i = 0; i < entries; i++)
            {
                cart[i] = Convert.ToInt32(inputArray[i]);
            }

            for (int i = 0; i < entries; i++)
            {
                if ((i == line2) || (i == line3))
                {
                    count = 0;
                }

                for (int k = 0; k < extract; k++)
                {
                     if (cart[i] == extracted[k])
                     {
                          count++;
                     }
                }

                if (count == line)
                {
                    lineOk++;
                }
            }

            Console.WriteLine(Print(lineOk));
        }

        static string Print(int lineOk)
        {
            const int line = 3;
            if (lineOk == line)
            {
                return "bingo";
            }
            else if (lineOk > 0)
            {
                return "linie";
            }
            else
            {
                return "nimic";
            }
        }
    }
}
