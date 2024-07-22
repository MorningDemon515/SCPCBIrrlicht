/**
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
**/

#include <iostream>

#include <irrlicht.h>

#include <CGUITTFont.h>

#include "Sound/SoundWrapper.h"
#include "World/World.h"

#include <al.h>

int main() {

    World* mainWorld = new World(L"SCP - Containment Breach Irrlicht", 1280, 720, false);

    while (mainWorld->run()) {};

    delete mainWorld;
    return 0;
}
