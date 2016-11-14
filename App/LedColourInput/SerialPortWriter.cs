using System;
using System.IO.Ports;

namespace LedColourInput
{
    public class SerialPortWriter
    {
        SerialPort port;

        public void PortClose()
        {
            if (port != null)
                port.Close();
        }

        public void PortOpen()
        {
            port = new SerialPort("COM4", 9600);
            try
            {
                port.Open();
            }
            catch (Exception ex)
            {
                //alert the user that we could not connect to the serial port
            }
        }

        public string PortResponse()
        {
            return port.ReadLine();
        }

        public void MyColourInput(string colour)
        {
            switch (colour.ToLower())
            {
                case "yellow":
                    port.Write("1");
                    break;
                case "green":
                    port.Write("2");
                    break;
                case "red":
                    port.Write("3");
                    break;
                default:
                    port.Write("4");
                    break;
            }
        }
    }
}
