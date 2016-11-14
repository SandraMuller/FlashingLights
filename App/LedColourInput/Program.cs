using System;

namespace LedColourInput
{
    class Program
    {
        static void Main(string[] args)
        {
            var serialPortWriter = new SerialPortWriter();
            while (true)
            {
                Console.WriteLine("Input LED colour: Yellow, Green or Red?");
                var input = Console.ReadLine();
                serialPortWriter.PortOpen();
                serialPortWriter.MyColourInput(input);
                Console.WriteLine(serialPortWriter.PortResponse() + Environment.NewLine);
                serialPortWriter.PortClose();
            }
        }
    }
}
