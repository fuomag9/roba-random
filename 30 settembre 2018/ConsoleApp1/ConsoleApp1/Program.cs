using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    class Program
    {
        public static int Dichiaraint(string input)
        {
            Console.WriteLine(input);
            int var = int.Parse(Console.ReadLine());
            return var;
        }
        public static float Dichiarafloat(string input)
        {
            Console.WriteLine(input);
            float var = float.Parse(Console.ReadLine());
            return var;
        }
        public static double Dichiaradouble(string input)
        {
            Console.WriteLine(input);
            double var = double.Parse(Console.ReadLine());
            return var;
        }
        static void Main(string[] args)
        {



            int[] vet = new int[Dichiaraint("inserisci la dimensione dell'array")];

            for (int i = 0; i < vet.Length; i++)
            {
                vet[i] = Dichiaraint("inserisci il valore di posizione " + (i+1) + " dell'array");

            }

            do
            {
                int check = 0;

                for (int i = 0; i < vet.Length - 1; i++)
                {
                    var temp = 0;
                    check = 0;
                    if (vet[i] > vet[i + 1])
                    {
                        temp = vet[i];
                        vet[i] = vet[i + 1];
                        vet[i + 1] = temp;
                        check++;
                    }


                }

                if (check == 0)
                {
                    break;
                }

            } while (true);

            Console.WriteLine();
            foreach (var item in vet)
            {
                Console.Write(item+"    ");
            }
            Console.ReadLine();
        }
    }
}
