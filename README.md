# DOS_GUI

In this project, we try to build a simple GUI for the much beloved MS DOS.
Development and testing has been done in Turbo C++ running on DOS BOX environment.

This is purely a hobby project, which was done to explore the capabilities of Graphics.H and to understand the efforts put in by engineers who used to build graphical interfaces with just C/C++ back in the golden age of computers. This greatly helped me to understand how to draw and translate graphical objects mathematically :)

Year of development: 2016

## Screenshots

![1](https://user-images.githubusercontent.com/21107275/123401265-3e45cc00-d5c4-11eb-91b3-548c1e45c6c2.JPG)

Boot animation

![2](https://user-images.githubusercontent.com/21107275/123401275-400f8f80-d5c4-11eb-8ca3-dce032a9ae3d.JPG)

Login

![3](https://user-images.githubusercontent.com/21107275/123401284-4271e980-d5c4-11eb-9ed6-60a4f926d63e.JPG)

Home screen

![4](https://user-images.githubusercontent.com/21107275/123401293-43a31680-d5c4-11eb-953a-83474a57b32d.jpg)

Shutdown


## Installation & setup:

1. Install Turbo C++
2. Clone this project and move the dos.cpp file into your BIN folder of Turbo
3. Open Turbo C++ and select dos.cpp
4. Hit compile. If you get any graphics.h related bugs while compiling, just refer the instructions that's given at the end of this readme.
5. Run.

## Controls

S - select

A - move left

D - move right

### Fix for graphics related issues:
Some may find graphics init. error during execution. This happens when the required files are not found inside the specified graphics directory.
For this, simply change the directory to " " instead of "C:\\TC\\BGI". NOTE : DO THIS IF IT DOSENT WORK IN DEFAULT!
