using System;

namespace Challenge
{
    class ChallengeCsFor
    {
        public static void Main()
        {
            string[] array = Console.ReadLine().Split(' ');
            int a = int.Parse(array[0]);
            int b = int.Parse(array[1]);
            if(a*2 == b)
            {
              Console.WriteLine($"Yes");
            }
          else if(a*2+1 == b)
          	{
				Console.WriteLine($"Yes");
          	}
          else
          	{
				Console.WriteLine($"No");
          	}
        }
    }
}