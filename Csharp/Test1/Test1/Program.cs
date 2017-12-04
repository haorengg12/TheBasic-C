using System;

namespace Program
{
    class Kkcc
    {
        double kk1;
        double kk2;

        public void Kk()
        {
            kk1 = 1.5;
            kk2 = 2;
        }
        public void Rrr()
        {
            Console.WriteLine("rrr：{0}", kk1 + kk2);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Kkcc k = new Kkcc();
            k.Kk();
            k.Rrr();
            int k1 = 1, k2 = 2, k3 = 3;
            int cc;
            Console.Write("k2={1}\tk1={0},k3={2}\n", k1, k2, k3);/*按指针顺序*/
            string kkcc = @"abc
def
ccc
";
            Console.Write("{0}", kkcc);
            cc=Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("cc={0}",cc);
            Console.ReadLine();
        }
    }
}