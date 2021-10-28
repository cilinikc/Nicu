using System;

namespace Probe
{
    class Program
    {
        private static void Main()
        {
            int entries = Convert.ToInt32(Console.ReadLine());
            int x = 0;
            int y = 0;
            string[] directions = new string[entries];
            int[,] coordinates = new int[entries + 1, 2];
            coordinates[0, 0] = x;
            coordinates[0, 1] = y;
            for (int i = 0; i < entries; i++)
            {
                directions[i] = Console.ReadLine();
                if (directions[i] == "up")
                {
                    y++;
                }

                if (directions[i] == "down")
                {
                    y--;
                }

                if (directions[i] == "left")
                {
                    x--;
                }

                if (directions[i] == "right")
                {
                    x++;
                }

                coordinates[i + 1, 0] = x;
                coordinates[i + 1, 1] = y;
            }

            Console.WriteLine(Verify(coordinates));
        }

        static bool Verify(int[,] coordinates)
        {
            const int doubleArray = 2;
            for (int i = 0; i < coordinates.Length - 1; i++)
            {
                for (int j = i + 1; j < coordinates.Length / doubleArray; j++)
                {
                    if ((coordinates[i, 0] == coordinates[j, 0]) && (coordinates[i, 1] == coordinates[j, 1]))
                    {
                        return true;
                    }
                }
            }

            return false;
        }
    }
}
