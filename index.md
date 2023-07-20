# Omniwheel Robot
The omni wheel robot can not only work like a normal car, but also features unique wheels that have individual wheels on them that allow the robot to shift in different directions based on which individual wheel is spinning. In addition, the robot features a hand gesture mode that can be uses IR infared sensors to detect objects and shift the robot left, right and backwards. The robot also features a bluetooth module which allows it to be connected to a phone, which can be used to remotely control the robot. The robot also features a object avoidance and line following mode, which utilizes its sensors and limit switches.

| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Nathan R | Gunn High School | Electrical Engineering | Incoming Junior

<!--- **Replace the BlueStamp logo below with an image of yourself and your completed project. Follow the guide [here](https://tomcam.github.io/least-github-pages/adding-images-github-pages-site.html) if you need help.**

![Headstone Image](logo.svg)
  
# Final Milestone

**Don't forget to replace the text below with the embedding for your milestone video. Go to Youtube, click Share -> Embed, and copy and paste the code to replace what's below.**

<iframe width="560" height="315" src="https://www.youtube.com/embed/F7M7imOVGug" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

For your final milestone, explain the outcome of your project. Key details to include are:
- What you've accomplished since your previous milestone
- What your biggest challenges and triumphs were at BSE
- A summary of key topics you learned about
- What you hope to learn in the future after everything you've learned at BSE -->



# Second Milestone

**Don't forget to replace the text below with the embedding for your milestone video. Go to Youtube, click Share -> Embed, and copy and paste the code to replace what's below.**

<iframe width="560" height="315" src="https://www.youtube.com/embed/ZwUDglRnylw" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

For my second milestone, I mainly worked on setting up and getting my LEDS to work. For the LEDS themselves i used RGB neopixels both individually and in strips. I used the individual LEDS for the front headlights, whereas i used the strips in sections of 2 and 3 for the taillights. What really surprised my was that almost all of the RGB neopixels had the same pins. In order to connect them together, each RGB neopixel has a DIN, 5V, and ground pin, which i used to solder each neopixel together with wires. In the end, I had two pairs of wires, which could not connect directly to one arduino, which only had 1 5V pin, so i used an arduino pro micro connected to a breadboard, which allowed multiple wires to connect to the 5V pin. I then used the FastLED library in order to get the neopixels themselves to work. Personally, i found mounting the LEDS the biggest challenge so far, since it involved precise hotglueing, which was difficult. I then connected a 9V battery to the system, however, the as long as the battery was plugged in, the LEDS would always stay on, so i decided to add a switch to control if the system got current or not. Overall, adding the LEDS was a good way to make my project more unique and personalized. Before my final milestone, I wanted to add a button that cycles between various color modes.


# First Milestone

<!--- **Don't forget to replace the text below with the embedding for your milestone video. Go to Youtube, click Share -> Embed, and copy and paste the code to replace what's below.** -->

<iframe width="560" height="315" src="https://www.youtube.com/embed/0cXjjOHeO9c" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

For my first milestone, I completed the omni wheel robot as it came out of the box. Throughout the process of building, I learned more about the specific parts and their purposes as well as how each part interacted with each other. For example, while using the object avoidance mode, the IR sensors can detect an object in front of it and as a response, is able to trigger the motors, which spin in a certain way to avoid the obstacle. In comparison, the crash sensors detect whether something is pushing against its button, activating it. I also learned how the robot itself moves. Since the wheels on the robot dont change orientation like a traditional car, each wheel has its own miniature wheels that assist the robot to turn and shift based on which motors are spinning and how fast they are spinning. This means that the robot is able to shift in presice directions and not just left and right. The main challenges i faced was understanding the wiring and how to manage all of it. I overcame this issue by paying attention to the labelled pins on the wire and the board. Despite the robot being a part of a kit, it gave me a good platform to build on in the future, which i plan to add various LEDS as headlights and tailights, which I want to connect and control from a seperate arduino, as well as 3D print various parts such as a cover for the second arduino, which i plan to fit on top of the robot.

# Starter Project

<!---**Don't forget to replace the text below with the embedding for your milestone video. Go to Youtube, click Share -> Embed, and copy and paste the code to replace what's below.**--->

<iframe width="560" height="315" src="https://www.youtube.com/embed/-Aj4a3KioSA" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

My starter project was a soldering exercise that features 3 sliders that control the red, green, and blue on the LED that is also attatched to the system. The can be connected via USB to a computer to be powered and controlled. A challenge that i faced while building was the polarity of the LED. At the time, I forgot to pay attention to the orientation of the LED, which led to LED colors to be reversed. However, this was a simple fix as it only required some de-soldering.

<!---# Schematics 
Here's where you'll put images of your schematics. [Tinkercad](https://www.tinkercad.com/blog/official-guide-to-tinkercad-circuits) and [Fritzing](https://fritzing.org/learning/) are both great resoruces to create professional schematic diagrams, though BSE recommends Tinkercad becuase it can be done easily and for free in the browser. 

# Code
Here's where you'll put your code. The syntax below places it into a block of code. Follow the guide [here]([url](https://www.markdownguide.org/extended-syntax/)) to learn how to customize it to your project needs. 

```c++
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
```

# Bill of Materials
Here's where you'll list the parts in your project. To add more rows, just copy and paste the example rows below.
Don't forget to place the link of where to buy each component inside the quotation marks in the corresponding row after href =. Follow the guide [here]([url](https://www.markdownguide.org/extended-syntax/)) to learn how to customize this to your project needs. 

| **Part** | **Note** | **Price** | **Link** |
|:--:|:--:|:--:|:--:|
| Item Name | What the item is used for | $Price | <a href="https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/"> Link </a> |
| Item Name | What the item is used for | $Price | <a href="https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/"> Link </a> |
| Item Name | What the item is used for | $Price | <a href="https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/"> Link </a> |

# Other Resources/Examples
One of the best parts about Github is that you can view how other people set up their own work. Here are some past BSE portfolios that are awesome examples. You can view how they set up their portfolio, and you can view their index.md files to understand how they implemented different portfolio components.
- [Example 1](https://trashytuber.github.io/YimingJiaBlueStamp/)
- [Example 2](https://sviatil0.github.io/Sviatoslav_BSE/)
- [Example 3](https://arneshkumar.github.io/arneshbluestamp/)

To watch the BSE tutorial on how to create a portfolio, click here.-->
