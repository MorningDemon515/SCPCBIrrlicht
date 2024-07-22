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
  - [FreeType(version unknown?)](http://www.freetype.org/)
  - [libogg 1.3.2](https://github.com/xiph/ogg/releases/tag/v1.3.2) 
  - [libvorbis 1.3.5](https://github.com/xiph/vorbis/releases/tag/v1.3.5)
  
### Requisite

  - Visual Studio 2019(If you want to compile with Visual Studio 2022, you must clone the libogg and libvorbis repositories and replace the include and lib files in Src\Libs\oggVorbis with the built. lib file)

### How to compile

1. Clone the repository
2. Open SCPCBIrrlicht.sln in Visual Studio 2019 
3. Change configuration to Release x86
4. Hit F7, now you're good to go
