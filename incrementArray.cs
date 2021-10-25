using System;

namespace letcode
{
    class Program
    {
        static void Main()
        {
            int[] digits = { 8, 9, 9, 9 };
            bool is9 = false;
            int adds = 0;
            int count = 0;
            for (int i = 0; i < digits.Length; i++)
            {
                if (digits[i] == 9)
                    is9 = true;
                else
                {
                    is9 = false;
                    break;
                }
            }
            if (is9)
            {
                int[] result = new int[digits.Length + 1];
                for (int i = 0; i < result.Length; i++)
                    result[i] = 0;
                result[0] = 1;
                for (int i = 0; i < result.Length; i++)
                    Console.Write("{0},", result[i]);
            }
            else
            {
                int[] result = new int[digits.Length];
                for (int i = result.Length - 1; i >= 0; i--)
                {

                    if ((digits[i] == 9) && (digits.Length - i - 1 == count))
                    {
                        result[i] = 0;
                        adds = 1;
                        count += 1;
                    }
                    else if (i == result.Length - 1)
                        result[i] = digits[i] + 1;
                    else
                    {
                        result[i] = digits[i] + adds;
                        adds = 0;
                    }

                }
                for (int i=0;i<result.Length;i++)
                Console.Write("{0},",result[i]);
            }
        
        }
    }
}

