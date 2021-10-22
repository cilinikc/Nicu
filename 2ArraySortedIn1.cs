using System;

namespace letcode
{
    class Program
    {
        static void Main()
        {
            int i, count = 0, pos = 0, position = 0;
            int[] nums1 = { 1, 2, 3, 0, 0, 0 };
            int[] nums2 = { 2, 5, 6 };
            int m = 3, n = 3;
            int[] nums0 = new int[m];
            int[] nums3 = new int[n];
            for (i = 0; i < m; i++)
                nums0[i] = nums1[i];
            for (i = 0; i < n; i++)
                nums3[i] = nums2[i];
            if (n > 0 && m > 0)
            {
            begin:
                for (i = pos; i < m; i++)
                {
                    for (int j = position; j < n; j++)
                    {
                        if (nums0[i] < nums3[j])
                        {
                            nums1[count] = nums0[i];
                            count++;
                            position = j;
                            break;
                        }
                        else if (nums0[i] > nums3[j])
                        {
                            nums1[count] = nums3[j];
                            position = j + 1;
                            count++;
                            pos = i;
                            goto begin;

                        }
                        else if (i >= 0)
                        {
                            nums1[count] = nums0[i];
                            count++;
                            nums1[count] = nums3[j];
                            count++;
                            position = j + 1;
                            pos = i + 1;
                            goto begin;
                        }
                    }
                    if (position == n && i < m)
                    {
                        nums1[count] = nums0[i];
                        count++;
                    }
                }
                for (int j = position; j < n; j++)
                {
                    nums1[count] = nums3[j];
                    count++;
                }
            }
        }
    }
}

