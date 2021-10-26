using System;

namespace letcode
{
    class Program
    {
        static void Main()
        {
            string a = Console.ReadLine(), b = Console.ReadLine();
            int i, diference, mind = 0, write;
            string charA = "", charB = "", res = "", rev = "", revA = "", revB = "";
            diference = a.Length - b.Length;
            if (diference > 0)
            {
                for ( i = b.Length - 1; i >= 0; i--)
                    revB += b[i];                    
                for ( i = diference; i > 0; i--)
                    revB += '0';
                for ( i=a.Length-1;i>=0;i--)
                    revA += a[i];
            }
            else if (diference < 0)
            {
                for ( i = a.Length - 1; i >= 0; i--)
                    revA += a[i];
                for ( i = diference; i < 0; i++)
                    revA += '0';
                for (i = b.Length - 1; i >= 0; i--)
                    revB += b[i];
            }     
            else
            {
                for (i = a.Length - 1; i >= 0; i--)
                    revA += a[i];
                for (i = b.Length - 1; i >= 0; i--)
                    revB += b[i];
            }
            for ( i=0; i<revA.Length; i++)
            {
                 charA+=revA[i];
                 charB +=revB[i];
                 write =Convert.ToInt32(charA)+Convert.ToInt32(charB)+mind;
                 mind=0;
                 charB ="";
                 charA ="";
                 if (write<2)
                     rev+=write ;
                 else if (write ==2)
                 {
                     rev+='0';
                     mind =1;
                 }
                 else if (write ==3)
                 {
                     rev+='1';
                     mind=1;
                 }
                 if ((revA.Length - 1 == i) && (mind == 1))
                     rev += '1';
            }
            for ( i = rev.Length - 1; i >= 0; i--)
                res += rev[i];
            Console.WriteLine( res);
        
        }
    }
}

