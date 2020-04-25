<p align="center"><img src="https://github.com/BeardedPlatypus/SDL_WPF_Interop/blob/master/sdl_interop_window.png?raw=true" alt="InteropWindow" title="InteropWindow" width=80% /></p>

# Hosting a SDL Window within a WPF application

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
