using System;

namespace letcode
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("Enter a roman number:");
            string s = Console.ReadLine();
            int number = 0;
            for (int i = 0; i < s.Length; i++)
            {
                if (s[i] == 'I')
                {
                    if (i + 1 < s.Length)
                    {
                        if (s[i + 1] == 'V')
                        {
                            number += 4;
                            i++;
                            continue;
                        }
                        else if (s[i + 1] == 'X')
                        {
                            number += 9;
                            i++;
                            continue;
                        }
                        else
                        {
                            number += 1;
                            continue;
                        }
                    }
                    else
                    {
                        number += 1;
                        continue;
                    }
                }
                if (s[i] == 'V')
                {
                    number += 5;
                    continue;
                }
                if (s[i] == 'X')
                {
                    if (i + 1 < s.Length)
                    {
                        if (s[i + 1] == 'L')
                        {
                            number += 40;
                            i++;
                            continue;
                        }
                        else if (s[i + 1] == 'C')
                        {
                            number += 90;
                            i++;
                            continue;
                        }
                        else
                        {
                            number += 10;
                            continue;
                        }
                    }
                    else
                    {
                        number += 10;
                        continue;
                    }
                }

                if (s[i] == 'L')
                {
                    number += 50;
                    continue;
                }
                if (s[i] == 'C')
                {
                    if (i + 1 < s.Length)
                    {
                        if (s[i + 1] == 'D')
                        {
                            number += 400;
                            i++;
                            continue;
                        }
                        else if (s[i + 1] == 'M')
                        {
                            number += 900;
                            i++;
                            continue;
                        }
                        else
                        {
                            number += 100;
                            continue;
                        }
                    }
                    else
                    {
                        number += 100;
                        continue;
                    }
                }
                if (s[i] == 'D')
                {
                    number += 500;
                    continue;
                }
                if (s[i] == 'M')
                {
                    number += 1000;
                    continue;
                }
            }
            Console.WriteLine(number);
        }
    }
}

