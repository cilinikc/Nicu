using System;

namespace Probe
{
    class Program
    {
        private static void Main()
        {
            const int asciiStart = 64;
            const int setChar = 26;
            int inputExcelCol = Convert.ToInt32(Console.ReadLine());
            char[] leters = new char[10];
            int firstNumber;
            int secondNumber;
            int i = 0;
            firstNumber = inputExcelCol / setChar;
            secondNumber = inputExcelCol % setChar;
            if (inputExcelCol > setChar)
            {
                while (inputExcelCol > 0)
                {
                    if ((secondNumber == 0) && (firstNumber <= setChar) && (firstNumber >= 1) && (i > 0))
                    {
                        secondNumber = firstNumber;
                    }
                    else if (secondNumber == 0)
                    {
                        secondNumber = setChar;
                        firstNumber--;
                    }

                    leters[i] = (char)(asciiStart + secondNumber);
                    i++;
                    inputExcelCol = firstNumber;
                    firstNumber = inputExcelCol / setChar;
                    secondNumber = inputExcelCol % setChar;
                }
            }
            else
            {
                if (secondNumber == 0)
                {
                    secondNumber = setChar;
                }

                leters[i] = (char)(asciiStart + secondNumber);
            }

            Print(leters);
        }

        static void Print(char[] leters)
        {
            for (int i = leters.Length - 1; i >= 0; i--)
            {
                if (leters[i] != 0)
                {
                    Console.Write(leters[i]);
                }
            }
        }
    }
}
