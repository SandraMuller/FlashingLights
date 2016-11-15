# FlashingLights

<h2>Console App to Device Communications through Serial Port</h2>

<p>There are two main projects that actually handle this. The one being <a href="https://github.com/SandraMuller/FlashingLights/tree/master/App/LedColourInput">LED Colour Input</a> which is a C# Console Application a user uses to enter one of three possible colour LED choices to have the device flash. The other project is <a href="https://github.com/SandraMuller/FlashingLights/tree/master/App/SelectColourLed">Select Colour LED</a> which is a C++ Arduino project which is the code loaded onto the device containing the logic for controlling the LED lights and monitoring the serial port for inputs, as well as writing information to said serial port.</p>

<p>As for the other files on this repo:<a href="https://github.com/SandraMuller/FlashingLights/tree/master/BlinkLed">BlinkLed</a> is an example project provided by Visual Studio to help you get started and <a href="https://github.com/SandraMuller/FlashingLights/tree/master/GreenLightSketch">GreenLightSketch</a> is a straight up sketch that I used to check my device before jumping into using a new IDE (I wanted to eliminate possible errors if the device didn't working in VS).</p>

<p>more information and image examples to come..</p>
