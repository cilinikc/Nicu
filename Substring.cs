using System;

namespace letcode
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("Enter some string:");
            int k , j, max = 1;
            string sub;
            string s = Console.ReadLine();
            int end = s.Length;
            for (k = 1; k < s.Length + 1; k++)
            {
                for (int i = 0; i <= s.Length - k; i++)
                {
                    sub = s.Substring(i, k);
                    if (tryi(sub))
                    {
                        max = k;
                        break;
                    }
                    else goto Exit;
                }
            }
        Exit:
            Console.WriteLine(max);

        }
        static bool tryi(string st)
        {
            for (int j = 0; j < st.Length; j++)
            {
                for (int l = j + 1; l < st.Length; l++)
                    if (st[j] == st[l])
                        return false;
            }
            return true;
        }
    }

}

