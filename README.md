# sm64rt

Fork of [sm64pc/sm64ex](https://github.com/sm64pc/sm64ex) that adds support for [RT64](https://github.com/DarioSamo/RT64), a hardware-accelerated real-time path tracer.

## Technical Preview

**At the moment, this mod is a technical preview and should only be used by those willing to tolerate problems such as visual glitches and performance problems**. This project is subject to have major changes in the future in anything from its architecture, design, aesthetic and performance. Any help towards solving these issues is welcome.

Please do not report issues that don't provide new information. Remember to check if your problem has already been reported on the [issue tracker](https://github.com/DarioSamo/sm64rt/issues).

Performance is the first thing that will be worked on and it has plenty of room for optimization at the moment. If you cannot reach the target framerate, it's recommended to lower the resolution with the internal scaler, as it has the biggest impact in performance out of all the options.

## Requirements
* Windows 10 (2004 or newer)
* [Microsoft Visual C++ Redistributable for Visual Studio 2019](https://aka.ms/vs/16/release/vc_redist.x64.exe)
* GPU with DXR support (NVIDIA Drivers version 465 or newer for OptiX denoiser support)

## Features
* Fully path-traced renderer.
* Custom level lighting for all stages.
* Dynamic sphere lights for objects and particles.
* Classic Phong shading.
* Custom material properties based on texture names or geometry layouts.
* Normal map support.
* Real-time raytraced shadows, reflections, refractions and global illumination.
* Real-time denoiser (experimental).

## Building
For building instructions, please refer to the [sm64ex wiki](https://github.com/sm64pc/sm64ex/wiki) and follow the process as normal with these additional build flags:

* RENDER_API=RT64 (Required to use RT64 as the renderer)

* EXTERNAL_DATA=1 (Required for associating textures to the renderer's material properties)

* NODRAWINGDISTANCE=1 (Optional, but gives good results and prevents pop-in, which can cause issues with objects that cast shadows or appear in reflections)

The repository already comes with a prebuilt binary and the compatible header file for RT64 to make the build process easier. If you wish to build this module yourself, you can do it from the [RT64 repository](https://github.com/DarioSamo/RT64) instead.

## Render96 Support
A native version of sm64rt will be integrated into the Render96 project in the future as an optional feature. Keep an eye out on their social media channels to know when this update goes live.
