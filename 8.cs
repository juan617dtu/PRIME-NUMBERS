class isPrime
{
    public bool is_prime(int n)
    {
        if (n == 1) return false;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0) return false;
        }
        return true;
    }
    public static int Main()
    {
        string input, trimmed_input, q = "q", Q = "Q";
        int limit = 0;
        const int fieldWidthLeftAligned = -9;
        bool is_parsable, flag = false;
        ConsoleColor foreground = Console.ForegroundColor;
        Console.ForegroundColor = ConsoleColor.Green;
        Console.WriteLine("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
        Console.WriteLine("\t\t\t\t\t\tPRIME NUMBERS\n");
        Console.WriteLine("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
        do
        {
            Console.Write("\n\nEnter the limit (or enter 'q' to exit): ");
            input = Console.ReadLine();
            trimmed_input = String.Concat(input.Where(c => !Char.IsWhiteSpace(c)));
            if (input.Equals(q) || input.Equals(Q)) System.Environment.Exit(0);
            is_parsable = Int32.TryParse(input, out limit);
            if (!is_parsable)
            {
                Console.WriteLine("\nInvalid input.");
                flag = true;
            }
            else
            {
                flag = false;
                var ip = new isPrime();
                //print prime numbers
                Console.WriteLine("\n");
                for (int k = 0; k <= limit; k++)
                {
                    if (ip.is_prime(k)) Console.WriteLine($"{k, fieldWidthLeftAligned}");
                }
            }
        } while (flag == true);
        return 0;
    }
}
