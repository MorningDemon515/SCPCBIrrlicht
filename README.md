SCPCBIrrlicht
=============

SCP - Containment Breach on the Irrlicht Engine

http://scpcbgame.com/

The game is based on the works of the SCP Foundation community (http://www.scp-wiki.net/).

This game is licensed under Creative Commons Attribution-ShareAlike 3.0 License.

http://creativecommons.org/licenses/by-sa/3.0/

Libraries used:
  - [Irrlicht Engine, SVN revision 5113, shader-pipeline branch](http://sourceforge.net/p/irrlicht/code/5113/tree/branches/shader-pipeline/)
  - [Bullet Physics 2.85.1](https://github.com/bulletphysics/bullet3/releases/tag/2.85.1)
  - [OpenAL 1.1](http://openal.org/downloads/)
  - [FreeType 2.13.2](https://github.com/freetype/freetype/releases/tag/VER-2-13-2)
  - [libogg 1.3.5](https://github.com/xiph/ogg/releases/tag/v1.3.5) 
  - [libvorbis 1.3.7](https://github.com/xiph/vorbis/releases/tag/v1.3.7)
  
### Requisite

  - Visual Studio 2019(If you want to compile with Visual Studio 2022, you must clone the libogg and libvorbis repositories and replace the include and lib files in Src\Libs\oggVorbis with the built. lib file)

### How to compile

1. Clone the repository
2. Open the console of the repository directory
3. input:
 - mkdir build
 - cd build
 - cmake -G "Visual Studio 16 2019" -A Win32 ..
 - cmake --build . --config Release
4. Open build\Release File, Find SCPCBIrrlicht.exe And Copy  Src\Libs\irrlicht-code-5113-branches-shader-pipeline\bin\Win32-VisualStudio\d3dcompiler_47.dll and Irrlicht.dll