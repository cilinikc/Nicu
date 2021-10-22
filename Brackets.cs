using System;

namespace letcode
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("Enter some brackets of different types and see if they are closed correctly: ");
            string s = Console.ReadLine();
            bool valid = false;
            int count = 0, position = 0;
            char pair = '0';
            int countTrue = 0;
            if (s.Length % 2 == 0)
            {
                for (int i = 0; i < s.Length; i++)
                {
                    if (s[i] == '(')
                        pair = ')';
                    if (s[i] == '[')
                        pair = ']';
                    if (s[i] == '{')
                        pair = '}';

                    if ((i + 1) < s.Length)
                        if (pair == s[i + 1])
                        {
                            valid = true;
                            position = i;
                            i++;
                            count += 2;
                            countTrue++;
                            pair = '0';
                            continue;
                        }
                        else valid = false;
                    if (s[i] == ')')
                        pair = '(';
                    if (s[i] == ']')
                        pair = '[';
                    if (s[i] == '}')
                        pair = '{';
                    if (count > 0)
                        if (i - count - 1 >= 0)
                            if (position != i - count - 1)
                            {
                                if (s[i - count - 1] == pair)
                                {
                                    valid = true;
                                    count += 2;
                                    countTrue++;
                                }
                            }

                    pair = '0';
                }
            }
            else
                valid = false;
            if (countTrue != s.Length / 2)
                valid = false;
            Console.WriteLine(valid);
        }
    }
}

