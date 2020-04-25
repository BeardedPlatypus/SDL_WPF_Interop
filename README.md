<p align="center"><img src="https://github.com/BeardedPlatypus/SDL_WPF_Interop/blob/master/sdl_interop_window.png?raw=true" alt="InteropWindow" title="InteropWindow" width=80% /></p>

# Hosting a SDL2 Window within a WPF application
[![Build Status](https://dev.azure.com/mwtegelaers/SDL%20WPF%20Interop/_apis/build/status/BeardedPlatypus.SDL_WPF_Interop?branchName=master)](https://dev.azure.com/mwtegelaers/SDL%20WPF%20Interop/_build/latest?definitionId=16&branchName=master)

As part of my [pacman game](https://github.com/BeardedPlatypus/PacMan), I 
wanted to develop some tools that would help me manage the different sprite
animations. The pacman rendering code is written with the help of [SDL2](https://www.libsdl.org/download-2.0.php)
which out of the box is not an easy to use GUI framework. In order to both
(re)use my existing rendering code, but still leverage an easy to use GUI
framework, I have opted to host my SDL code within a WPF application. 
This repository holds a minimal example to achieve this with .NET core 3.1.

Note that while the initial implementation is functional, this is still very
much a work in progress, and additional documentation and improvements will
most likely happen over time.

This README document covers the basic installation, as well as short introduction
of the components, a more indepth article concerning the set up can be found on 
my blog.

## Installation

In order to use this repository as a base, several tools need to be installed.
The Azure Devops Pipeline file provides a good overview of the steps that need
to be taken to build the projecct on your own machine.

* Install [vcpkg](https://github.com/microsoft/vcpkg)
* Clone this repository in an appropriate location:
   ```bash
   git clone https://github.com/BeardedPlatypus/SDL_WPF_Interop.git
   ```
* Install SDL2 through vcpkg by running the following commands:
   ```bash
   vcpkg install sdl2
   vcpkg integrate install 
   ```
* Open SDL_WPF_Interop.sln within Visual Studio 2019
* Build the project as you normally would.

## Documentation

I will add additional information of the components as well as a more indepth 
blog article documenting this repository in the near future. For now I would 
recommend the resources mentioned in the references.

## References

* [MSDN: WPF / Win32 interop documentation](https://docs.microsoft.com/en-us/dotnet/framework/wpf/advanced/wpf-and-win32-interoperation)
* [MSDN: Hosting Win32 Control in WPF](https://docs.microsoft.com/en-us/dotnet/framework/wpf/advanced/walkthrough-hosting-a-win32-control-in-wpf)
* [Microsoft Hosting Win32 in WPF sample](https://github.com/Microsoft/WPF-Samples/tree/master/Migration%20and%20Interoperability/WPFHostingWin32Control)
* WPF 4 Unleashed chapter 19


