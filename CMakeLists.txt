cmake_minimum_required(VERSION 3.16)

project(SCPCBIrrlicht)

#Source Code
set(CPP 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/irrlicht-code-5113-branches-shader-pipeline/CGUITTFont/CGUITTFont.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/irrlicht-code-5113-branches-shader-pipeline/irrDynamics/irrDynamics.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/Sound/SoundWrapper.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/Item18vbat.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/Item18vradio.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/Item420.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/Item420s.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemBat.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemCigarette.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemCup.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemEmptycup.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemEyedrops.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemFineeyedrops.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemFinefirstaid.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemFineradio.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemFinevest.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemFirstaid.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemFirstaid2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemGasmask.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemGasmask3.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemHand.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemHand2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemHazmatsuit.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemHazmatsuit2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemHazmatsuit3.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKey1.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKey2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKey3.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKey4.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKey5.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKey6.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKillbat.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemMisc.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemNav.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemPaper.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemRadio.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/Items.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp1025.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp148.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp148ingot.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp500.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp513.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp714.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp860.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemSupereyedrops.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemSupergasmask.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemVeryfinefirstaid.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemVeryfineradio.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemVeryfinevest.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemVest.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/KinematicCharacterController/KinematicCharacterController.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/MapGen.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/NPCs/NPC.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/NPCs/NPC096.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/NPCs/NPC106.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/NPCs/NPC173.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/NPCs/NPC178.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/NPCs/NPC513.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Player.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Door.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room079.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2cafeteria.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2ccont.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2cz3.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2offices.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2offices2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2offices3.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2poffices.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2poffices2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2sroom.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2tesla.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2toilets.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2z3.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room3servers.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room3servers2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room3z3.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room4z3.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room860.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/RoomExit1.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/RoomGateaentrance.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/RoomLockroom2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room008.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room035.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room049.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room106.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room2ctunnel.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room2nuke.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room2pipes.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room2pit.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room2servers.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room2tunnel.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room3pit.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room3tunnel.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room4tunnels.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room513.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/RoomCoffin.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/RoomEndroom2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/RoomTestroom.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/RoomTunnel.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/RoomTunnel2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room012.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room1123.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room205.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2c.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2closets.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2doors.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2elevator.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2scps.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2storage.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2testroom2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2_2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room3.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room3storage.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room3_2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room4.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room914.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/RoomEndroom.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/RoomLockroom.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Roompj.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/RoomStart.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Misc/Room173.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Misc/RoomCheckpoint1.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Misc/RoomCheckpoint2.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Misc/RoomGatea.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Misc/RoomPocketdimension.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/RMesh.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Room.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/ShaderCallbacks.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/SharedAI.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/World.cpp 
)

set(H 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/irrlicht-code-5113-branches-shader-pipeline/CGUITTFont/CGUITTFont.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/irrlicht-code-5113-branches-shader-pipeline/CGUITTFont/irrUString.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/irrlicht-code-5113-branches-shader-pipeline/irrDynamics/irrDynamics.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/Sound/SoundWrapper.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/GameObject.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/Item18vbat.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/Item18vradio.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/Item420.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/Item420s.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemBat.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemCigarette.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemCup.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemEmptycup.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemEyedrops.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemFineeyedrops.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemFinefirstaid.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemFineradio.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemFinevest.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemFirstaid.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemFirstaid2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemGasmask.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemGasmask3.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemHand.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemHand2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemHazmatsuit.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemHazmatsuit2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemHazmatsuit3.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKey1.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKey2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKey3.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKey4.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKey5.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKey6.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemKillbat.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemMisc.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemNav.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemPaper.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemRadio.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/Items.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp1025.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp148.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp148ingot.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp500.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp513.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp714.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemScp860.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemSupereyedrops.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemSupergasmask.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemVeryfinefirstaid.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemVeryfineradio.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemVeryfinevest.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Items/ItemVest.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/KinematicCharacterController/KinematicCharacterController.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/NPCs/NPC.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/NPCs/NPC096.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/NPCs/NPC106.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/NPCs/NPC173.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/NPCs/NPC178.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/NPCs/NPC513.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Player.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Door.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZIncludes.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room079.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2cafeteria.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2ccont.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2cz3.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2offices.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2offices2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2offices3.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2poffices.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2poffices2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2sroom.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2tesla.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2toilets.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room2z3.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room3servers.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room3servers2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room3z3.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room4z3.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/Room860.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/RoomExit1.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/RoomGateaentrance.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/EZ/RoomLockroom2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZIncludes.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room008.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room035.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room049.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room106.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room2ctunnel.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room2nuke.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room2pipes.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room2pit.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room2servers.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room2tunnel.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room3pit.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room3tunnel.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room4tunnels.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/Room513.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/RoomCoffin.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/RoomEndroom2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/RoomTestroom.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/RoomTunnel.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/HCZ/RoomTunnel2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZIncludes.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room012.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room1123.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room205.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2c.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2closets.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2doors.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2elevator.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2scps.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2storage.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2testroom2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room2_2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room3.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room3storage.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room3_2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room4.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Room914.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/RoomEndroom.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/RoomLockroom.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/Roompj.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/LCZ/RoomStart.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/MiscIncludes.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Misc/Room173.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Misc/RoomCheckpoint1.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Misc/RoomCheckpoint2.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Misc/RoomGatea.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Misc/RoomPocketdimension.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/RMesh.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/Rooms/Room.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/ShaderCallbacks.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/Src/World/World.h 
)

#Set Libs
#CGUITTFont
set(TTF_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/irrlicht-code-5113-branches-shader-pipeline/CGUITTFont/)

#irrDynamics
set(irrD_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/irrlicht-code-5113-branches-shader-pipeline/irrDynamics/)


#Irrlicht Engine
set(Irr_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/irrlicht-code-5113-branches-shader-pipeline/include/)
set(Irr_LIB ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/irrlicht-code-5113-branches-shader-pipeline/lib/Win32-visualstudio/Irrlicht.lib)

#Bullet
set(Bullet_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/bullet3-2.85.1/src/)
set(Bullet_LIBS 
    ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/bullet3-2.85.1/bin/BulletCollision_vs2010.lib
    ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/bullet3-2.85.1/bin/BulletDynamics_vs2010.lib
    ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/bullet3-2.85.1/bin/LinearMath_vs2010.lib
)

#FreeType
set(FT_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/FreeType/include/)
set(FT_LIB ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/FreeType/lib/freetype.lib)

#oggVorbis
set(OV_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/oggVorbis/include/)
set(OV_LIBS 
    ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/oggVorbis/lib/ogg/libogg.lib
    ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/oggVorbis/lib/vorbis/libvorbis_static.lib
    ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/oggVorbis/lib/vorbis/libvorbisfile_static.lib
)

#OpenAL 1.1 SDK
set(AL_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/OpenAL1.1/include/)
set(AL_LIB ${CMAKE_CURRENT_SOURCE_DIR}/Src/Libs/OpenAL1.1/libs/Win32/OpenAL32.lib)

add_compile_options(
        $<$<CONFIG:>:/MT> #---------|
        $<$<CONFIG:Debug>:/MTd> #---|-- Statically link the runtime libraries
        $<$<CONFIG:Release>:/MT> #--|
)

add_executable(SCPCBIrrlicht
               ${H} 
               ${CPP}
               Src/Main.cpp
               SCPCBIrrlicht.rc
)

target_include_directories(SCPCBIrrlicht PUBLIC
                           ${Irr_INCLUDE}
                           ${Bullet_INCLUDE}
                           ${FT_INCLUDE}
                           ${OV_INCLUDE}
                           ${AL_INCLUDE}
                           ${TTF_INCLUDE}
                           ${irrD_INCLUDE}
)
                           

target_link_libraries(SCPCBIrrlicht
                      ${Irr_LIB}
                      ${Bullet_LIBS}
                      ${FT_LIB}
                      ${OV_LIBS}
                      ${AL_LIB}
                      msvcrt.lib
                      libcmt.lib
)