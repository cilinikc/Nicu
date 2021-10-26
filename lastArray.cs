using System;

namespace letcode
{
    class Program
    {
        static void Main()
        {
            string s = Console.ReadLine();
            int result = 0, position = s.Length - 1;
            for (int i = s.Length - 1; i >= 0; i--)
            {
                if (s[i] == ' ')
                {
                    position = i - 1;
                }
                else if (i - 1 >= 0)
                {
                    if (s[i - 1] == ' ')
                    {
                        result = position - i + 1;
                        break;
                    }
                }
                else if (i - 1 < 0)
                {
                    result = position - i + 1;
                    break;
                }
            }
            if(result == 0)
            Console.WriteLine( s.Length);
            else
                Console.WriteLine(result);
        }
    }
}

