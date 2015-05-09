#include "World.h"
#include "Player.h"
#include "NPCs/NPC.h"

Room* World::addRandomRoom(unsigned short x,unsigned short y,RoomTypes type,char angle,int zone) {
	int choice = 0;
	Room* retRoom = nullptr;
	switch (type) {
		case RoomTypes::ROOM1:
			switch (zone) {
				case 0: //LCZ
					choice = rand()%100;
					if (choice>=0 && choice<100) {
						retRoom = RoomEndroom::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
				case 1: //HCZ
					choice = rand()%100;
					if (choice>=0 && choice<100) {
						retRoom = RoomEndroom2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
				case 2: //EZ
					choice = rand()%100;
					if (choice>=0 && choice<100) {
						retRoom = RoomEndroom::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
			}
		break;
		case RoomTypes::ROOM2:
			switch (zone) {
				case 0: //LCZ
					choice = rand()%150;
					if (choice>=0 && choice<50) {
						retRoom = Room2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=50 && choice<100) {
						retRoom = Room2_2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=100 && choice<120) {
						retRoom = Room2elevator::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=120 && choice<150) {
						retRoom = Room2doors::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
				case 1: //HCZ
					choice = rand()%295;
					if (choice>=0 && choice<100) {
						retRoom = RoomTunnel::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=100 && choice<170) {
						retRoom = RoomTunnel2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=170 && choice<220) {
						retRoom = Room2pipes::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=220 && choice<295) {
						retRoom = Room2pit::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
				case 2: //EZ
					choice = rand()%300;
					if (choice>=0 && choice<100) {
						retRoom = Room2z3::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=100 && choice<130) {
						retRoom = Room2offices::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=130 && choice<150) {
						retRoom = Room2offices2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=150 && choice<170) {
						retRoom = Room2offices3::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=170 && choice<200) {
						retRoom = Room2toilets::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=200 && choice<300) {
						retRoom = Room2tesla::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
			}
		break;
		case RoomTypes::ROOM2C:
			switch (zone) {
				case 0: //LCZ
					choice = rand()%70;
					if (choice>=0 && choice<30) {
						retRoom = RoomLockroom::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=30 && choice<70) {
						retRoom = Room2c::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
				case 1: //HCZ
					choice = rand()%40;
					if (choice>=0 && choice<40) {
						retRoom = Room2ctunnel::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
				case 2: //EZ
					choice = rand()%100;
					if (choice>=0 && choice<100) {
						retRoom = Room2cz3::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
			}
		break;
		case RoomTypes::ROOM3:
			switch (zone) {
				case 0: //LCZ
					choice = rand()%200;
					if (choice>=0 && choice<100) {
						retRoom = Room3::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=100 && choice<200) {
						retRoom = Room3_2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
				case 1: //HCZ
					choice = rand()%200;
					if (choice>=0 && choice<100) {
						retRoom = Room3pit::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
					if (choice>=100 && choice<200) {
						retRoom = Room3tunnel::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
				case 2: //EZ
					choice = rand()%100;
					if (choice>=0 && choice<100) {
						retRoom = Room3z3::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
			}
		break;
		case RoomTypes::ROOM4:
			switch (zone) {
				case 0: //LCZ
					choice = rand()%100;
					if (choice>=0 && choice<100) {
						retRoom = Room4::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
				case 1: //HCZ
					choice = rand()%100;
					if (choice>=0 && choice<100) {
						retRoom = Room4tunnels::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
				case 2: //EZ
					choice = rand()%100;
					if (choice>=0 && choice<100) {
						retRoom = Room4z3::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),angle);
					}
				break;
			}
		break;
	}
	roomArray[x][y] = retRoom;
	return retRoom;
}

void World::createMap(unsigned char zone) {
	short x,y,temp;
	short x2,y2;
	short width,height;

	struct tempRoom {
		RoomTypes type;
		signed char angle;
		/* A "turn" is any Room where you can
		  turn 90 degrees and find a door leading
		  to another Room.
		  ROOM1 and ROOM2 are not turns, anything else is.
		  The purpose of identifying turns is to optimize
		  pathfinding, so you don't need to loop through
		  the whole roomArray to find a path.
		  */
		signed char linkedTurns[4];
	};

	tempRoom RoomTemp[20][20];
	for (x=0;x<20;x++) {
		for (y=0;y<20;y++) {
			roomArray[x][y] = nullptr;
			RoomTemp[x][y].type = RoomTypes::ROOM1;
			RoomTemp[x][y].angle = -1;
			RoomTemp[x][y].linkedTurns[0]=0;
			RoomTemp[x][y].linkedTurns[1]=0;
			RoomTemp[x][y].linkedTurns[2]=0;
			RoomTemp[x][y].linkedTurns[3]=0;
		}
	}

	x = 10;
	y = 18;

	for (int i = y;i<20;i++) {
		RoomTemp[x][i].angle = 0;
	}

	while (y>=2) {
		width = (rand() % 6) + 10;

		if (x>12) {
			width = -width;
		} else if (x>8) {
			x = x-10;
		}

		//make sure the hallway doesn't go outside the array
		if (x+width > 17) {
			width=17-x;
		} else if (x+width < 2) {
			width=-x+2;
		}


		x = std::min(x,short(x + width));
		width = std::abs(width);
		for (int i = x;i<=x+width;i++) {
			RoomTemp[std::min(i,19)][y].angle = 0;
		}

		height = (rand() % 2) + 3;
		if (y - height < 1) height = y;

		int yhallways = (rand() % 2) + 4;

		//if (getZone(y-height)!=getZone(y-height+1)) height--;

		for (int i=1;i<=yhallways;i++) {
			x2 = std::max(std::min((rand() % (width-1)) + x,18),2);
			while (RoomTemp[x2][y-1].angle>=0 || RoomTemp[x2-1][y-1].angle>=0 || RoomTemp[x2+1][y-1].angle>=0) {
				x2++;
				if (x2>18) break;
			}

			if (x2<x+width) {
				short tempheight;
				if (i==1) {
					tempheight = height;
					if (rand()%2 == 0) x2 = x; else x2 = x+width;
				} else {
					tempheight = (rand()%height) + 1;
				}

				for (y2 = y - tempheight;y2<=y;y2++) {
					/*if (getZone(y2)!=getZone(y2+1)) { //a Room leading from zone to another
						RoomTemp[x2][y2].angle = 127;
					} else {*/
					RoomTemp[x2][y2].angle = 0;
					//\}
				}

				if (tempheight == height) temp = x2;
			}
		}

		x = temp;
		y -= height;
	}

	unsigned short Room1amount;
	unsigned short Room2amount;
	unsigned short Room2camount;
	unsigned short Room3amount;
	unsigned short Room4amount;

	Room1amount=0;
	Room2amount=0;
	Room2camount=0;
	Room3amount=0;
	Room4amount=0;

	for (x=0;x<20;x++) {
		for (y=0;y<20;y++) {
			bool hasNorth,hasSouth,hasEast,hasWest;
			hasNorth = hasSouth = hasEast = hasWest = false;
			/*if (RoomTemp[x][y].angle==127) {
				//get rid of this checkpoint Room if it leads to nothing
				if (RoomTemp[x][y-1].angle<0) RoomTemp[x][y].angle = -1;
			} else if (RoomTemp[x][y].angle==0) { //this is not a checkpoint Room*/
			if (RoomTemp[x][y].angle>=0) {
				if (x>0) {
					hasWest = (RoomTemp[x-1][y].angle>-1);
				}
				if (x<19) {
					hasEast = (RoomTemp[x+1][y].angle>-1);
				}
				if (y>0) {
					hasNorth = (RoomTemp[x][y-1].angle>-1);
				}
				if (y<19) {
					hasSouth = (RoomTemp[x][y+1].angle>-1);
				}
				if (hasNorth && hasSouth) {
					if (hasEast && hasWest) { //Room4
						RoomTemp[x][y].type = RoomTypes::ROOM4;
						RoomTemp[x][y].angle = rand()%4;
					} else if (hasEast && !hasWest) { //Room3, pointing east
						RoomTemp[x][y].type = RoomTypes::ROOM3;
						RoomTemp[x][y].angle = 3;
					} else if (!hasEast && hasWest) { //Room3, pointing west
						RoomTemp[x][y].type = RoomTypes::ROOM3;
						RoomTemp[x][y].angle = 1;
					} else { //vertical Room2
						RoomTemp[x][y].type = RoomTypes::ROOM2;
						RoomTemp[x][y].angle = (rand()%2)*2;
					}
				} else if (hasEast && hasWest) {
					if (hasNorth && !hasSouth) { //Room3, pointing north
						RoomTemp[x][y].type = RoomTypes::ROOM3;
						RoomTemp[x][y].angle = 0;
					} else if (!hasNorth && hasSouth) { //Room3, pointing south
						RoomTemp[x][y].type = RoomTypes::ROOM3;
						RoomTemp[x][y].angle = 2;
					} else { //horizontal Room2
						RoomTemp[x][y].type = RoomTypes::ROOM2;
						RoomTemp[x][y].angle = ((rand()%2)*2)+1;
					}
				} else if (hasNorth) {
					if (hasEast) { //Room2c, north-east
						RoomTemp[x][y].type = RoomTypes::ROOM2C;
						RoomTemp[x][y].angle = 0;
					} else if (hasWest) { //Room2c, north-west
						RoomTemp[x][y].type = RoomTypes::ROOM2C;
						RoomTemp[x][y].angle = 1;
					} else { //Room1, north
						RoomTemp[x][y].type = RoomTypes::ROOM1;
						RoomTemp[x][y].angle = 0;
					}
				} else if (hasSouth) {
					if (hasEast) { //Room2c, south-east
						RoomTemp[x][y].type = RoomTypes::ROOM2C;
						RoomTemp[x][y].angle = 3;
					} else if (hasWest) { //Room2c, south-west
						RoomTemp[x][y].type = RoomTypes::ROOM2C;
						RoomTemp[x][y].angle = 2;
					} else { //Room1, south
						RoomTemp[x][y].type = RoomTypes::ROOM1;
						RoomTemp[x][y].angle = 2;
					}
				} else if (hasEast) { //Room1, east
					RoomTemp[x][y].type = RoomTypes::ROOM1;
					RoomTemp[x][y].angle = 3;
				} else { //Room1, west
					RoomTemp[x][y].type = RoomTypes::ROOM1;
					RoomTemp[x][y].angle = 1;
				}
				switch (RoomTemp[x][y].type) {
					case RoomTypes::ROOM1:
						Room1amount++;
					break;
					case RoomTypes::ROOM2:
						Room2amount++;
					break;
					case RoomTypes::ROOM2C:
						Room2camount++;
					break;
					case RoomTypes::ROOM3:
						Room3amount++;
					break;
					case RoomTypes::ROOM4:
						Room4amount++;
					break;
				}
			}
			//\}
		}
	}

	//force some Rooms in there
	//for (int i = 0;i<3;i++) {
	if (Room1amount<5) {
		std::cout<<"Forcing some ROOM1s\n";
		for (y=2;y<19 && Room1amount<5;y++) {
			//if (getZone(y+2) == i && getZone(y-2) == i) {
			for (x=2;x<19 && Room1amount<5;x++) {
				if (RoomTemp[x][y].angle<0) {
					bool freeSpace = ((RoomTemp[x+1][y].angle>=0) != (RoomTemp[x-1][y].angle>=0)) != ((RoomTemp[x][y+1].angle>=0) != (RoomTemp[x][y-1].angle>=0));
					freeSpace = freeSpace && (((RoomTemp[x+2][y].angle>=0) != (RoomTemp[x-2][y].angle>=0)) != ((RoomTemp[x][y+2].angle>=0) != (RoomTemp[x][y-2].angle>=0)));
					freeSpace = freeSpace && (((RoomTemp[x+1][y+1].angle>=0) != (RoomTemp[x-1][y-1].angle>=0)) != ((RoomTemp[x-1][y+1].angle>=0) != (RoomTemp[x+1][y-1].angle>=0)));
					if (freeSpace) {
						tempRoom* adjRoom = nullptr;
						if (RoomTemp[x+1][y].angle>=0) {
							adjRoom = &RoomTemp[x+1][y];
							RoomTemp[x][y].angle = 3;
						} else if (RoomTemp[x-1][y].angle>=0) {
							adjRoom = &RoomTemp[x-1][y];
							RoomTemp[x][y].angle = 1;
						} else if (RoomTemp[x][y+1].angle>=0) {
							adjRoom = &RoomTemp[x][y+1];
							RoomTemp[x][y].angle = 2;
						} else {
							adjRoom = &RoomTemp[x][y-1];
							RoomTemp[x][y].angle = 0;
						}

						switch (adjRoom->type) {
							case RoomTypes::ROOM2:
								RoomTemp[x][y].type = RoomTypes::ROOM1;
								Room1amount++;
								Room2amount--;
								Room3amount++;
								adjRoom->type = RoomTypes::ROOM3;
								switch (RoomTemp[x][y].angle) {
									case 0:
										adjRoom->angle = 2;
									break;
									case 1:
										adjRoom->angle = 3;
									break;
									case 2:
										adjRoom->angle = 0;
									break;
									case 3:
										adjRoom->angle = 1;
									break;
								}
							break;
							case RoomTypes::ROOM3:
								RoomTemp[x][y].type = RoomTypes::ROOM1;
								adjRoom->type = RoomTypes::ROOM4;
								Room1amount++;
								Room3amount--;
								Room4amount++;
							break;
							default:
								RoomTemp[x][y].angle = -1;
							break;
						}
					}
				}
			}
			//\}
		}
	}
	if (Room4amount<3) {
		std::cout<<"Forcing some ROOM4s\n";
		for (y=2;y<19 && Room4amount<3;y++) {
			//if (getZone(y+2) == i && getZone(y-2) == i) {
			for (x=2;x<19 && Room4amount<3;x++) {
				if (RoomTemp[x][y].angle<0) {
					bool freeSpace = ((RoomTemp[x+1][y].angle>=0) != (RoomTemp[x-1][y].angle>=0)) != ((RoomTemp[x][y+1].angle>=0) != (RoomTemp[x][y-1].angle>=0));
					freeSpace = freeSpace && (((RoomTemp[x+2][y].angle>=0) != (RoomTemp[x-2][y].angle>=0)) != ((RoomTemp[x][y+2].angle>=0) != (RoomTemp[x][y-2].angle>=0)));
					freeSpace = freeSpace && (((RoomTemp[x+1][y+1].angle>=0) != (RoomTemp[x-1][y-1].angle>=0)) != ((RoomTemp[x-1][y+1].angle>=0) != (RoomTemp[x+1][y-1].angle>=0)));
					if (freeSpace) {
						tempRoom* adjRoom = nullptr;

						if (RoomTemp[x+1][y].angle>=0) {
							adjRoom = &RoomTemp[x+1][y];
							RoomTemp[x][y].angle = 3;
						} else if (RoomTemp[x-1][y].angle>=0) {
							adjRoom = &RoomTemp[x-1][y];
							RoomTemp[x][y].angle = 1;
						} else if (RoomTemp[x][y+1].angle>=0) {
							adjRoom = &RoomTemp[x][y+1];
							RoomTemp[x][y].angle = 2;
						} else {
							adjRoom = &RoomTemp[x][y-1];
							RoomTemp[x][y].angle = 0;
						}

						switch (adjRoom->type) {
							case RoomTypes::ROOM3:
								RoomTemp[x][y].type = RoomTypes::ROOM1;
								adjRoom->type = RoomTypes::ROOM4;
								Room1amount++;
								Room3amount--;
								Room4amount++;
							break;
							default:
								RoomTemp[x][y].angle = -1;
							break;
						}
					}
				}
			}
			//\}
		}
	}
	if (Room2camount<3) {
		std::cout<<"Forcing some ROOM2Cs\n";
		for (y=2;y<19 && Room2camount<3;y++) {
			//if (getZone(y+2) == i && getZone(y-2) == i) {
			for (x=2;x<19 && Room2camount<3;x++) {
				if (RoomTemp[x][y].angle<0) {
					bool freeSpace = ((RoomTemp[x+1][y].angle>=0) != (RoomTemp[x-1][y].angle>=0)) != ((RoomTemp[x][y+1].angle>=0) != (RoomTemp[x][y-1].angle>=0));
					freeSpace = freeSpace && (((RoomTemp[x+2][y].angle>=0) != (RoomTemp[x-2][y].angle>=0)) != ((RoomTemp[x][y+2].angle>=0) != (RoomTemp[x][y-2].angle>=0)));
					freeSpace = freeSpace && (((RoomTemp[x+1][y+1].angle>=0) != (RoomTemp[x-1][y-1].angle>=0)) != ((RoomTemp[x-1][y+1].angle>=0) != (RoomTemp[x+1][y-1].angle>=0)));
					if (freeSpace) {
						tempRoom* adjRoom = nullptr;

						if (RoomTemp[x+1][y].angle>=0) {
							adjRoom = &RoomTemp[x+1][y];
							RoomTemp[x][y].angle = 3;
						} else if (RoomTemp[x-1][y].angle>=0) {
							adjRoom = &RoomTemp[x-1][y];
							RoomTemp[x][y].angle = 1;
						} else if (RoomTemp[x][y+1].angle>=0) {
							adjRoom = &RoomTemp[x][y+1];
							RoomTemp[x][y].angle = 2;
						} else {
							adjRoom = &RoomTemp[x][y-1];
							RoomTemp[x][y].angle = 0;
						}

						switch (adjRoom->type) {
							case RoomTypes::ROOM1:
								RoomTemp[x][y].type = RoomTypes::ROOM1;
								adjRoom->type = RoomTypes::ROOM2C;
								switch (RoomTemp[x][y].angle) {
									case 0:
										if (adjRoom->angle == 1) adjRoom->angle = 2; //south-west
										else if (adjRoom->angle == 3) adjRoom->angle = 3; //south-east
										else { RoomTemp[x][y].angle = -1; adjRoom->type = RoomTypes::ROOM1; }
									break;
									case 1:
										if (adjRoom->angle == 0) adjRoom->angle = 1; //north-east
										else if (adjRoom->angle == 2) adjRoom->angle = 3; //south-east
										else { RoomTemp[x][y].angle = -1; adjRoom->type = RoomTypes::ROOM1; }
									break;
									case 2:
										if (adjRoom->angle == 1) adjRoom->angle = 1; //north-east
										else if (adjRoom->angle == 3) adjRoom->angle = 0; //north-west
										else { RoomTemp[x][y].angle = -1; adjRoom->type = RoomTypes::ROOM1; }
									break;
									case 3:
										if (adjRoom->angle == 0) adjRoom->angle = 0; //north-west
										else if (adjRoom->angle == 2) adjRoom->angle = 2; //south-west
										else { RoomTemp[x][y].angle = -1; adjRoom->type = RoomTypes::ROOM1; }
									break;
								}
								if (RoomTemp[x][y].angle > -1) {
									Room2camount++;
								}
							break;
							default:
								RoomTemp[x][y].angle = -1;
							break;
						}
					}
				}
			}
			//\}
		}
	}
	//\}

	for (x=0;x<20;x++) {
		for (y=0;y<20;y++) {
			//std::cout<<(RoomTemp[y][x].angle>-1);
			if (RoomTemp[x][y].angle>-1 && RoomTemp[x][y].type!=RoomTypes::ROOM1 && RoomTemp[x][y].type!=RoomTypes::ROOM2) {
                unsigned char dist = 0;
                for (unsigned char ix = 1;RoomTemp[x+ix][y].angle>-1 && x+ix<20;ix++) {
                    //dist++;
                    if (RoomTemp[x+ix][y].type!=RoomTypes::ROOM1 && RoomTemp[x+ix][y].type!=RoomTypes::ROOM2) {
						dist = ix;
						break;
                    }
                }
                if (dist>0) { RoomTemp[x][y].linkedTurns[0]=dist; std::cout<<"000\n"; }
                dist = 0;
                for (unsigned char ix = 1;RoomTemp[x-ix][y].angle>-1 && x-ix>=0;ix++) {
                    //dist++;
                    if (RoomTemp[x-ix][y].type!=RoomTypes::ROOM1 && RoomTemp[x-ix][y].type!=RoomTypes::ROOM2) {
						dist = ix;
						break;
                    }
                }
                if (dist>0) { RoomTemp[x][y].linkedTurns[2]=dist; std::cout<<"222\n"; }
                dist = 0;
                for (unsigned char iy = 1;RoomTemp[x][y-iy].angle>-1 && y-iy>0;iy++) {
                    //dist++;
                    if (RoomTemp[x][y-iy].type!=RoomTypes::ROOM1 && RoomTemp[x][y-iy].type!=RoomTypes::ROOM2) {
						dist = iy;
						break;
                    }
                }
                if (dist>0) { RoomTemp[x][y].linkedTurns[1]=dist; std::cout<<"111\n"; }
                dist = 0;
                for (unsigned char iy = 1;RoomTemp[x][y+iy].angle>-1 && y+iy<20;iy++) {
                    //dist++;
                    if (RoomTemp[x][y+iy].type!=RoomTypes::ROOM1 && RoomTemp[x][y+iy].type!=RoomTypes::ROOM2) {
						dist = iy;
						break;
                    }
                }
                if (dist>0) { RoomTemp[x][y].linkedTurns[3]=dist; std::cout<<"333\n"; }
			}
		}
		std::cout<<"\n";
	}

	RoomTypes actualType; char angle;
	for (x=0;x<20;x++) {
		for (y=0;y<20;y++) {
			if (RoomTemp[x][y].angle>-1) {
				bool hasNorth,hasSouth,hasEast,hasWest;
				hasNorth = hasSouth = hasEast = hasWest = false;
				if (x>0) {
					hasWest = (RoomTemp[x-1][y].angle>-1);
				}
				if (x<19) {
					hasEast = (RoomTemp[x+1][y].angle>-1);
				}
				if (y>0) {
					hasNorth = (RoomTemp[x][y-1].angle>-1);
				}
				if (y<19) {
					hasSouth = (RoomTemp[x][y+1].angle>-1);
				}
				if (hasNorth && hasSouth) {
					if (hasEast && hasWest) { //Room4
						actualType = RoomTypes::ROOM4;
						angle = rand()%4;
					} else if (hasEast && !hasWest) { //Room3, pointing east
						actualType = RoomTypes::ROOM3;
						angle = 3;
					} else if (!hasEast && hasWest) { //Room3, pointing west
						actualType = RoomTypes::ROOM3;
						angle = 1;
					} else { //vertical Room2
						actualType = RoomTypes::ROOM2;
						angle = (rand()%2)*2;
					}
				} else if (hasEast && hasWest) {
					if (hasNorth && !hasSouth) { //Room3, pointing north
						actualType = RoomTypes::ROOM3;
						angle = 0;
					} else if (!hasNorth && hasSouth) { //Room3, pointing south
						actualType = RoomTypes::ROOM3;
						angle = 2;
					} else { //horizontal Room2
						actualType = RoomTypes::ROOM2;
						angle = ((rand()%2)*2)+1;
					}
				} else if (hasNorth) {
					if (hasEast) { //Room2c, north-east
						actualType = RoomTypes::ROOM2C;
						angle = 0;
					} else if (hasWest) { //Room2c, north-west
						actualType = RoomTypes::ROOM2C;
						angle = 1;
					} else { //Room1, north
						actualType = RoomTypes::ROOM1;
						angle = 0;
					}
				} else if (hasSouth) {
					if (hasEast) { //Room2c, south-east
						actualType = RoomTypes::ROOM2C;
						angle = 3;
					} else if (hasWest) { //Room2c, south-west
						actualType = RoomTypes::ROOM2C;
						angle = 2;
					} else { //Room1, south
						actualType = RoomTypes::ROOM1;
						angle = 2;
					}
				} else if (hasEast) { //Room1, east
					actualType = RoomTypes::ROOM1;
					angle = 3;
				} else { //Room1, west
					actualType = RoomTypes::ROOM1;
					angle = 1;
				}
				if (actualType!=RoomTemp[x][y].type) {
					std::cout<<"MapGen error at ["<<x<<","<<y<<"]: ";
					switch (actualType) {
						case RoomTypes::ROOM1:
							std::cout<<"ROOM1";
						break;
						case RoomTypes::ROOM2:
							std::cout<<"ROOM2";
						break;
						case RoomTypes::ROOM2C:
							std::cout<<"ROOM2C";
						break;
						case RoomTypes::ROOM3:
							std::cout<<"ROOM3";
						break;
						case RoomTypes::ROOM4:
							std::cout<<"ROOM4";
						break;
					}
					std::cout<<" doesn't match ";
					switch (RoomTemp[x][y].type) {
						case RoomTypes::ROOM1:
							std::cout<<"ROOM1";
						break;
						case RoomTypes::ROOM2:
							std::cout<<"ROOM2";
						break;
						case RoomTypes::ROOM2C:
							std::cout<<"ROOM2C";
						break;
						case RoomTypes::ROOM3:
							std::cout<<"ROOM3";
						break;
						case RoomTypes::ROOM4:
							std::cout<<"ROOM4";
						break;
					}
					std::cout<<"\n";
					std::terminate();
				} else if (angle!=RoomTemp[x][y].angle) {
					switch (actualType) {
						case RoomTypes::ROOM2:
							if (std::abs(angle-RoomTemp[x][y].angle)%2==1) {
								std::cout<<"MapGen error at ["<<x<<","<<y<<"]: ROOM2 incorrect angle\n";
								std::terminate();
							}
						break;
						case RoomTypes::ROOM4:
							//any angle is correct for a Room4
						break;
						default:
							std::cout<<"MapGen error at ["<<x<<","<<y<<"]: ";
							switch (RoomTemp[x][y].type) {
								case RoomTypes::ROOM1:
									std::cout<<"ROOM1";
								break;
								case RoomTypes::ROOM2C:
									std::cout<<"ROOM2C";
								break;
								case RoomTypes::ROOM3:
									std::cout<<"ROOM3";
								break;
								default:
								break;
							}
							std::cout<<" incorrect angle\n";
							std::terminate();
						break;
					}
				}
			}
		}
	}

	unsigned short currentRoom1,currentRoom2,currentRoom2c,currentRoom3,currentRoom4;
	currentRoom1 = currentRoom2 = currentRoom2c = currentRoom3 = currentRoom4 = 0;
	//short prevZone = getZone(19);
	for (y=19;y>=0;y--) {
		/*if (getZone(y)!=prevZone) {
			currentRoom1 = currentRoom2 = currentRoom2c = currentRoom3 = currentRoom4 = 0;
		}*/
		for (x=19;x>=0;x--) {
			if (RoomTemp[x][y].angle>-1 && RoomTemp[x][y].angle<127) {
				switch (RoomTemp[x][y].type) {
					case RoomTypes::ROOM1:
						switch (zone) {
							case 0: //LCZ
								if (currentRoom1==0) {
									roomArray[x][y] = RoomStart::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
									mainPlayer->teleport(irr::core::vector3df(x*204.8f*RoomScale,10.f,y*204.8f*RoomScale));

									for (unsigned int i=0;i<itemList.size();i++) {
										itemList[i]->Unpick(irr::core::vector3df(x*204.8f*RoomScale,10.f,y*204.8f*RoomScale));
									}

								} else if (currentRoom1==(int)(0.4f*(float)Room1amount)) {
									roomArray[x][y] = Roompj::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom1==(int)(0.8f*(float)Room1amount)) {
									roomArray[x][y] = Room914::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
									//mainPlayer->teleport(irr::core::vector3df(x*204.8f*RoomScale,10.f,y*204.8f*RoomScale));
								}
							break;
							case 1: //HCZ
								if (currentRoom1==(int)(0.1f*(float)Room1amount)) {
									roomArray[x][y] = Room079::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom1==(int)(0.3f*(float)Room1amount)) {
									roomArray[x][y] = Room106::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
									mainPlayer->teleport(irr::core::vector3df(x*204.8f*RoomScale,10,y*204.8f*RoomScale));

									for (unsigned int i=0;i<itemList.size();i++) {
										itemList[i]->Unpick(irr::core::vector3df(x*204.8f*RoomScale,10.f,y*204.8f*RoomScale));
									}

								} else if (currentRoom1==(int)(0.5f*(float)Room1amount)) {
									roomArray[x][y] = RoomCoffin::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom1==(int)(0.7f*(float)Room1amount)) {
									roomArray[x][y] = Room035::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom1==(int)(0.9f*(float)Room1amount)) {
									roomArray[x][y] = Room008::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
							case 2: //EZ
								if (currentRoom1==Room1amount-1) {
									roomArray[x][y] = RoomGateaentrance::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom1==Room1amount-2) {
									roomArray[x][y] = RoomExit1::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
						}
						currentRoom1++;
					break;
					case RoomTypes::ROOM2:
						switch (zone) {
							case 0: //LCZ
								if (currentRoom2==0) {
									roomArray[x][y] = Room2closets::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.2f*(float)Room2amount)) {
									roomArray[x][y] = Room2testRoom2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.4f*(float)Room2amount)) {
									roomArray[x][y] = Room2scps::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.8f*(float)Room2amount)) {
									roomArray[x][y] = Room2storage::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.9f*(float)Room2amount)) {
									roomArray[x][y] = Room012::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
							case 1: //HCZ
								if (currentRoom2==(int)(0.2f*(float)Room2amount)) {
									roomArray[x][y] = Room2nuke::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.25f*(float)Room2amount)) {
									roomArray[x][y] = Room2tunnel::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.4f*(float)Room2amount)) {
									roomArray[x][y] = Room049::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.7f*(float)Room2amount)) {
									roomArray[x][y] = Room2servers::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.9f*(float)Room2amount)) {
									roomArray[x][y] = RoomTestroom::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
							case 2: //EZ
								if (currentRoom2==(int)(0.1f*(float)Room2amount)) {
									roomArray[x][y] = Room2poffices::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.2f*(float)Room2amount)) {
									roomArray[x][y] = Room2cafeteria::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.3f*(float)Room2amount)) {
									roomArray[x][y] = Room2sroom::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.45f*(float)Room2amount)) {
									roomArray[x][y] = Room2offices::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.6f*(float)Room2amount)) {
									roomArray[x][y] = Room860::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.8f*(float)Room2amount)) {
									roomArray[x][y] = Room2poffices2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.9f*(float)Room2amount)) {
									roomArray[x][y] = Room2offices2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
						}
						currentRoom2++;
					break;
					case RoomTypes::ROOM2C:
						switch (zone) {
							case 0: //LCZ
								if (currentRoom2c==0) {
									roomArray[x][y] = RoomLockroom::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
							case 1: //HCZ

							break;
							case 2: //EZ
								if (currentRoom2c==0) {
									roomArray[x][y] = Room2ccont::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2c==1) {
									roomArray[x][y] = RoomLockroom2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
						}
						currentRoom2c++;
					break;
					case RoomTypes::ROOM3:
						switch (zone) {
							case 0: //LCZ
								if (currentRoom3==(int)((((rand()%1000)*0.001f)+0.2f)*(float)Room3amount)) {
									roomArray[x][y] = Room3storage::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
							case 1: //HCZ
								if (currentRoom3==(int)(0.5f*(float)Room3amount)) {
									roomArray[x][y] = Room513::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
							case 2: //EZ
								if (currentRoom3==(int)(0.3f*(float)Room3amount)) {
									roomArray[x][y] = Room3servers::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom3==(int)(0.7f*(float)Room3amount)) {
									roomArray[x][y] = Room3servers2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
						}
						currentRoom3++;
					break;
					case RoomTypes::ROOM4:
						switch (zone) {
							case 0: //LCZ

							break;
							case 1: //HCZ

							break;
							case 2: //EZ

							break;
						}
						currentRoom4++;
					break;
				}
				if (roomArray[x][y]==nullptr) {
					addRandomRoom(x,y,RoomTemp[x][y].type,RoomTemp[x][y].angle,zone);
				}
				if (roomArray[x][y]!=nullptr) {
					roomArray[x][y]->setLinkedTurnDist(0,RoomTemp[x][y].linkedTurns[0]);
					roomArray[x][y]->setLinkedTurnDist(1,RoomTemp[x][y].linkedTurns[1]);
					roomArray[x][y]->setLinkedTurnDist(2,RoomTemp[x][y].linkedTurns[2]);
					roomArray[x][y]->setLinkedTurnDist(3,RoomTemp[x][y].linkedTurns[3]);
					if (y<3) {
                        testNPC->teleport(irr::core::vector3df(x*204.8f*RoomScale,-10.f,y*204.8f*RoomScale));
                    }
				}
			}
		}
	}

	for (int y=0;y<20;y++) {
        for (int x=0;x<20;x++) {
            if (roomArray[x][y]!=nullptr) {
                if (roomArray[x][y]->getType()!=RoomTypes::ROOM1 && roomArray[x][y]->getType()!=RoomTypes::ROOM2) {
                    if (roomArray[x+RoomTemp[x][y].linkedTurns[0]][y]->getType()==RoomTypes::ROOM1 || roomArray[x+RoomTemp[x][y].linkedTurns[0]][y]->getType()==RoomTypes::ROOM2) {
                        std::cout<<"broken0\n"; std::terminate();
                    }
                    if (roomArray[x][y-RoomTemp[x][y].linkedTurns[1]]->getType()==RoomTypes::ROOM1 || roomArray[x][y-RoomTemp[x][y].linkedTurns[1]]->getType()==RoomTypes::ROOM2) {
                        std::cout<<"broken1\n"; std::terminate();
                    }
                    if (roomArray[x-RoomTemp[x][y].linkedTurns[2]][y]->getType()==RoomTypes::ROOM1 || roomArray[x-RoomTemp[x][y].linkedTurns[2]][y]->getType()==RoomTypes::ROOM2) {
                        std::cout<<"broken2\n"; std::terminate();
                    }
                    if (roomArray[x][y+RoomTemp[x][y].linkedTurns[3]]->getType()==RoomTypes::ROOM1 || roomArray[x][y+RoomTemp[x][y].linkedTurns[3]]->getType()==RoomTypes::ROOM2) {
                        std::cout<<"broken3\n"; std::terminate();
                    }
                }
            }
        }
	}
}

/*void World::createMap() {
	auto getZone = [] (short y) -> int { return std::max(std::min(std::floor((float)(20-y)/20.f*3.f),2.f),0.f); };

	short x,y,temp;
	short x2,y2;
	short width,height;

	struct tempRoom {
		RoomTypes type;
		char angle;
	};

	tempRoom RoomTemp[20][20];
	for (x=0;x<20;x++) {
		for (y=0;y<20;y++) {
			roomArray[x][y] = nullptr;
			RoomTemp[x][y].type = RoomTypes::ROOM1;
			RoomTemp[x][y].angle = -1;
		}
	}

	x = 10;
	y = 18;

	for (int i = y;i<20;i++) {
		RoomTemp[x][i].angle = 0;
	}

	while (y>=2) {
		width = (rand() % 6) + 10;

		if (x>12) {
			width = -width;
		} else if (x>8) {
			x = x-10;
		}

		//make sure the hallway doesn't go outside the array
		if (x+width > 17) {
			width=17-x;
		} else if (x+width < 2) {
			width=-x+2;
		}


		x = std::min(x,short(x + width));
		width = std::abs(width);
		for (int i = x;i<=x+width;i++) {
			RoomTemp[std::min(i,19)][y].angle = 0;
		}

		height = (rand() % 2) + 3;
		if (y - height < 1) height = y;

		int yhallways = (rand() % 2) + 4;

		if (getZone(y-height)!=getZone(y-height+1)) height--;

		for (int i=1;i<=yhallways;i++) {
			x2 = std::max(std::min((rand() % (width-1)) + x,18),2);
			while (RoomTemp[x2][y-1].angle>=0 || RoomTemp[x2-1][y-1].angle>=0 || RoomTemp[x2+1][y-1].angle>=0) {
				x2++;
				if (x2>18) break;
			}

			if (x2<x+width) {
				short tempheight;
				if (i==1) {
					tempheight = height;
					if (rand()%2 == 0) x2 = x; else x2 = x+width;
				} else {
					tempheight = (rand()%height) + 1;
				}

				for (y2 = y - tempheight;y2<=y;y2++) {
					if (getZone(y2)!=getZone(y2+1)) { //a Room leading from zone to another
						RoomTemp[x2][y2].angle = 127;
					} else {
						RoomTemp[x2][y2].angle = 0;
					}
				}

				if (tempheight == height) temp = x2;
			}
		}

		x = temp;
		y -= height;
	}

	unsigned short Room1amount[3];
	unsigned short Room2amount[3];
	unsigned short Room2camount[3];
	unsigned short Room3amount[3];
	unsigned short Room4amount[3];

	for (int i=0;i<3;i++) {
		Room1amount[i]=0;
		Room2amount[i]=0;
		Room2camount[i]=0;
		Room3amount[i]=0;
		Room4amount[i]=0;
	}

	for (x=0;x<20;x++) {
		for (y=0;y<20;y++) {
			bool hasNorth,hasSouth,hasEast,hasWest;
			hasNorth = hasSouth = hasEast = hasWest = false;
			if (RoomTemp[x][y].angle==127) {
				//get rid of this checkpoint Room if it leads to nothing
				if (RoomTemp[x][y-1].angle<0) RoomTemp[x][y].angle = -1;
			} else if (RoomTemp[x][y].angle==0) { //this is not a checkpoint Room
				if (x>0) {
					hasWest = (RoomTemp[x-1][y].angle>-1);
				}
				if (x<19) {
					hasEast = (RoomTemp[x+1][y].angle>-1);
				}
				if (y>0) {
					hasNorth = (RoomTemp[x][y-1].angle>-1);
				}
				if (y<19) {
					hasSouth = (RoomTemp[x][y+1].angle>-1);
				}
				if (hasNorth && hasSouth) {
					if (hasEast && hasWest) { //Room4
						RoomTemp[x][y].type = RoomTypes::ROOM4;
						RoomTemp[x][y].angle = rand()%4;
					} else if (hasEast && !hasWest) { //Room3, pointing east
						RoomTemp[x][y].type = RoomTypes::ROOM3;
						RoomTemp[x][y].angle = 3;
					} else if (!hasEast && hasWest) { //Room3, pointing west
						RoomTemp[x][y].type = RoomTypes::ROOM3;
						RoomTemp[x][y].angle = 1;
					} else { //vertical Room2
						RoomTemp[x][y].type = RoomTypes::ROOM2;
						RoomTemp[x][y].angle = (rand()%2)*2;
					}
				} else if (hasEast && hasWest) {
					if (hasNorth && !hasSouth) { //Room3, pointing north
						RoomTemp[x][y].type = RoomTypes::ROOM3;
						RoomTemp[x][y].angle = 0;
					} else if (!hasNorth && hasSouth) { //Room3, pointing south
						RoomTemp[x][y].type = RoomTypes::ROOM3;
						RoomTemp[x][y].angle = 2;
					} else { //horizontal Room2
						RoomTemp[x][y].type = RoomTypes::ROOM2;
						RoomTemp[x][y].angle = ((rand()%2)*2)+1;
					}
				} else if (hasNorth) {
					if (hasEast) { //Room2c, north-east
						RoomTemp[x][y].type = RoomTypes::ROOM2C;
						RoomTemp[x][y].angle = 0;
					} else if (hasWest) { //Room2c, north-west
						RoomTemp[x][y].type = RoomTypes::ROOM2C;
						RoomTemp[x][y].angle = 1;
					} else { //Room1, north
						RoomTemp[x][y].type = RoomTypes::ROOM1;
						RoomTemp[x][y].angle = 0;
					}
				} else if (hasSouth) {
					if (hasEast) { //Room2c, south-east
						RoomTemp[x][y].type = RoomTypes::ROOM2C;
						RoomTemp[x][y].angle = 3;
					} else if (hasWest) { //Room2c, south-west
						RoomTemp[x][y].type = RoomTypes::ROOM2C;
						RoomTemp[x][y].angle = 2;
					} else { //Room1, south
						RoomTemp[x][y].type = RoomTypes::ROOM1;
						RoomTemp[x][y].angle = 2;
					}
				} else if (hasEast) { //Room1, east
					RoomTemp[x][y].type = RoomTypes::ROOM1;
					RoomTemp[x][y].angle = 3;
				} else { //Room1, west
					RoomTemp[x][y].type = RoomTypes::ROOM1;
					RoomTemp[x][y].angle = 1;
				}
				switch (RoomTemp[x][y].type) {
					case RoomTypes::ROOM1:
						Room1amount[getZone(y)]++;
					break;
					case RoomTypes::ROOM2:
						Room2amount[getZone(y)]++;
					break;
					case RoomTypes::ROOM2C:
						Room2camount[getZone(y)]++;
					break;
					case RoomTypes::ROOM3:
						Room3amount[getZone(y)]++;
					break;
					case RoomTypes::ROOM4:
						Room4amount[getZone(y)]++;
					break;
				}
			}
		}
	}

	//force some Rooms in there
	for (int i = 0;i<3;i++) {
		if (Room1amount[i]<5) {
			std::cout<<"Forcing some ROOM1s in zone "<<i<<"\n";
			for (y=2;y<19 && Room1amount[i]<5;y++) {
				if (getZone(y+2) == i && getZone(y-2) == i) {
					for (x=2;x<19 && Room1amount[i]<5;x++) {
						if (RoomTemp[x][y].angle<0) {
							if (((RoomTemp[x+1][y].angle>=0) != (RoomTemp[x-1][y].angle>=0)) != ((RoomTemp[x][y+1].angle>=0) != (RoomTemp[x][y-1].angle>=0))) {
								tempRoom* adjRoom = nullptr;
								if (RoomTemp[x+1][y].angle>=0) {
									adjRoom = &RoomTemp[x+1][y];
									RoomTemp[x][y].angle = 3;
								} else if (RoomTemp[x-1][y].angle>=0) {
									adjRoom = &RoomTemp[x-1][y];
									RoomTemp[x][y].angle = 1;
								} else if (RoomTemp[x][y+1].angle>=0) {
									adjRoom = &RoomTemp[x][y+1];
									RoomTemp[x][y].angle = 2;
								} else {
									adjRoom = &RoomTemp[x][y-1];
									RoomTemp[x][y].angle = 0;
								}

								switch (adjRoom->type) {
									case RoomTypes::ROOM2:
										RoomTemp[x][y].type = RoomTypes::ROOM1;
										Room1amount[i]++;
										Room2amount[i]--;
										Room3amount[i]++;
										adjRoom->type = RoomTypes::ROOM3;
										switch (RoomTemp[x][y].angle) {
											case 0:
												adjRoom->angle = 2;
											break;
											case 1:
												adjRoom->angle = 3;
											break;
											case 2:
												adjRoom->angle = 0;
											break;
											case 3:
												adjRoom->angle = 1;
											break;
										}
									break;
									case RoomTypes::ROOM3:
										RoomTemp[x][y].type = RoomTypes::ROOM1;
										adjRoom->type = RoomTypes::ROOM4;
										Room1amount[i]++;
										Room3amount[i]--;
										Room4amount[i]++;
									break;
									default:
										RoomTemp[x][y].angle = -1;
									break;
								}
							}
						}
					}
				}
			}
		}
		if (Room4amount[i]<3) {
			std::cout<<"Forcing some ROOM4s in zone "<<i<<"\n";
			for (y=2;y<19 && Room4amount[i]<3;y++) {
				if (getZone(y+2) == i && getZone(y-2) == i) {
					for (x=2;x<19 && Room4amount[i]<3;x++) {
						if (RoomTemp[x][y].angle<0) {
							if (((RoomTemp[x+1][y].angle>=0) != (RoomTemp[x-1][y].angle>=0)) != ((RoomTemp[x][y+1].angle>=0) != (RoomTemp[x][y-1].angle>=0))) {
								tempRoom* adjRoom = nullptr;

								if (RoomTemp[x+1][y].angle>=0) {
									adjRoom = &RoomTemp[x+1][y];
									RoomTemp[x][y].angle = 3;
								} else if (RoomTemp[x-1][y].angle>=0) {
									adjRoom = &RoomTemp[x-1][y];
									RoomTemp[x][y].angle = 1;
								} else if (RoomTemp[x][y+1].angle>=0) {
									adjRoom = &RoomTemp[x][y+1];
									RoomTemp[x][y].angle = 2;
								} else {
									adjRoom = &RoomTemp[x][y-1];
									RoomTemp[x][y].angle = 0;
								}

								switch (adjRoom->type) {
									case RoomTypes::ROOM3:
										RoomTemp[x][y].type = RoomTypes::ROOM1;
										adjRoom->type = RoomTypes::ROOM4;
										Room1amount[i]++;
										Room3amount[i]--;
										Room4amount[i]++;
									break;
									default:
										RoomTemp[x][y].angle = -1;
									break;
								}
							}
						}
					}
				}
			}
		}
		if (Room2camount[i]<3) {
			std::cout<<"Forcing some ROOM2Cs in zone "<<i<<"\n";
			for (y=2;y<19 && Room2camount[i]<3;y++) {
				if (getZone(y+2) == i && getZone(y-2) == i) {
					for (x=2;x<19 && Room2camount[i]<3;x++) {
						if (RoomTemp[x][y].angle<0) {
							if (((RoomTemp[x+1][y].angle>=0) != (RoomTemp[x-1][y].angle>=0)) != ((RoomTemp[x][y+1].angle>=0) != (RoomTemp[x][y-1].angle>=0))) {
								tempRoom* adjRoom = nullptr;

								if (RoomTemp[x+1][y].angle>=0) {
									adjRoom = &RoomTemp[x+1][y];
									RoomTemp[x][y].angle = 3;
								} else if (RoomTemp[x-1][y].angle>=0) {
									adjRoom = &RoomTemp[x-1][y];
									RoomTemp[x][y].angle = 1;
								} else if (RoomTemp[x][y+1].angle>=0) {
									adjRoom = &RoomTemp[x][y+1];
									RoomTemp[x][y].angle = 2;
								} else {
									adjRoom = &RoomTemp[x][y-1];
									RoomTemp[x][y].angle = 0;
								}

								switch (adjRoom->type) {
									case RoomTypes::ROOM1:
										RoomTemp[x][y].type = RoomTypes::ROOM1;
										adjRoom->type = RoomTypes::ROOM2C;
										switch (RoomTemp[x][y].angle) {
											case 0:
												if (adjRoom->angle == 1) adjRoom->angle = 2; //south-west
												else if (adjRoom->angle == 3) adjRoom->angle = 3; //south-east
												else { RoomTemp[x][y].angle = -1; adjRoom->type = RoomTypes::ROOM1; }
											break;
											case 1:
												if (adjRoom->angle == 0) adjRoom->angle = 1; //north-east
												else if (adjRoom->angle == 2) adjRoom->angle = 3; //south-east
												else { RoomTemp[x][y].angle = -1; adjRoom->type = RoomTypes::ROOM1; }
											break;
											case 2:
												if (adjRoom->angle == 1) adjRoom->angle = 1; //north-east
												else if (adjRoom->angle == 3) adjRoom->angle = 0; //north-west
												else { RoomTemp[x][y].angle = -1; adjRoom->type = RoomTypes::ROOM1; }
											break;
											case 3:
												if (adjRoom->angle == 0) adjRoom->angle = 0; //north-west
												else if (adjRoom->angle == 2) adjRoom->angle = 2; //south-west
												else { RoomTemp[x][y].angle = -1; adjRoom->type = RoomTypes::ROOM1; }
											break;
										}
										if (RoomTemp[x][y].angle > -1) {
											Room2camount[i]++;
										}
									break;
									default:
										RoomTemp[x][y].angle = -1;
									break;
								}
							}
						}
					}
				}
			}
		}
	}

	for (x=0;x<20;x++) {
		for (y=0;y<20;y++) {
			std::cout<<(RoomTemp[y][x].angle>-1);
		}
		std::cout<<"\n";
	}

	unsigned short currentRoom1,currentRoom2,currentRoom2c,currentRoom3,currentRoom4;
	currentRoom1 = currentRoom2 = currentRoom2c = currentRoom3 = currentRoom4 = 0;
	short prevZone = getZone(19);
	for (y=19;y>=0;y--) {
		if (getZone(y)!=prevZone) {
			currentRoom1 = currentRoom2 = currentRoom2c = currentRoom3 = currentRoom4 = 0;
		}
		for (x=19;x>=0;x--) {
			if (RoomTemp[x][y].angle>-1 && RoomTemp[x][y].angle<127) {
				switch (RoomTemp[x][y].type) {
					case RoomTypes::ROOM1:
						switch (getZone(y)) {
							case 0: //LCZ
								if (currentRoom1==0) {
									roomArray[x][y] = start::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
									mainPlayer->teleport(irr::core::vector3df(x*204.8f*RoomScale,10.f,y*204.8f*RoomScale));

									for (unsigned int i=0;i<itemList.size();i++) {
										itemList[i]->Unpick(irr::core::vector3df(x*204.8f*RoomScale,10.f,y*204.8f*RoomScale));
									}

								} else if (currentRoom1==(int)(0.4f*(float)Room1amount[0])) {
									roomArray[x][y] = Roompj::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom1==(int)(0.8f*(float)Room1amount[0])) {
									roomArray[x][y] = r_914::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
									//mainPlayer->teleport(irr::core::vector3df(x*204.8f*RoomScale,10.f,y*204.8f*RoomScale));
								}
							break;
							case 1: //HCZ
								if (currentRoom1==(int)(0.1f*(float)Room1amount[1])) {
									roomArray[x][y] = Room079::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom1==(int)(0.3f*(float)Room1amount[1])) {
									roomArray[x][y] = Room106::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
									//mainPlayer->teleport(irr::core::vector3df(x*204.8f*RoomScale,10,y*204.8f*RoomScale));
								} else if (currentRoom1==(int)(0.5f*(float)Room1amount[1])) {
									roomArray[x][y] = RoomCoffin::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom1==(int)(0.7f*(float)Room1amount[1])) {
									roomArray[x][y] = Room035::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom1==(int)(0.9f*(float)Room1amount[1])) {
									roomArray[x][y] = Room008::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
							case 2: //EZ
								if (currentRoom1==Room1amount[2]-1) {
									roomArray[x][y] = RoomGateaentrance::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom1==Room1amount[2]-2) {
									roomArray[x][y] = RoomExit1::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
						}
						currentRoom1++;
					break;
					case RoomTypes::ROOM2:
						switch (getZone(y)) {
							case 0: //LCZ
								if (currentRoom2==0) {
									roomArray[x][y] = Room2closets::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.2f*(float)Room2amount[0])) {
									roomArray[x][y] = Room2testRoom2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.4f*(float)Room2amount[0])) {
									roomArray[x][y] = Room2scps::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.8f*(float)Room2amount[0])) {
									roomArray[x][y] = Room2storage::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.9f*(float)Room2amount[0])) {
									roomArray[x][y] = Room012::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
							case 1: //HCZ
								if (currentRoom2==(int)(0.2f*(float)Room2amount[1])) {
									roomArray[x][y] = Room2nuke::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.25f*(float)Room2amount[1])) {
									roomArray[x][y] = Room2tunnel::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.4f*(float)Room2amount[1])) {
									roomArray[x][y] = Room049::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.7f*(float)Room2amount[1])) {
									roomArray[x][y] = Room2servers::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.9f*(float)Room2amount[1])) {
									roomArray[x][y] = testRoom::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
							case 2: //EZ
								if (currentRoom2==(int)(0.1f*(float)Room2amount[2])) {
									roomArray[x][y] = Room2poffices::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.2f*(float)Room2amount[2])) {
									roomArray[x][y] = Room2cafeteria::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.3f*(float)Room2amount[2])) {
									roomArray[x][y] = Room2sroom::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.45f*(float)Room2amount[2])) {
									roomArray[x][y] = Room2offices::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.6f*(float)Room2amount[2])) {
									roomArray[x][y] = Room860::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.8f*(float)Room2amount[2])) {
									roomArray[x][y] = Room2poffices2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2==(int)(0.9f*(float)Room2amount[2])) {
									roomArray[x][y] = Room2offices2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
						}
						currentRoom2++;
					break;
					case RoomTypes::ROOM2C:
						switch (getZone(y)) {
							case 0: //LCZ
								if (currentRoom2c==0) {
									roomArray[x][y] = RoomLockroom::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
							case 1: //HCZ

							break;
							case 2: //EZ
								if (currentRoom2c==0) {
									roomArray[x][y] = Room2ccont::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom2c==1) {
									roomArray[x][y] = RoomLockroom2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
						}
						currentRoom2c++;
					break;
					case RoomTypes::ROOM3:
						switch (getZone(y)) {
							case 0: //LCZ
								if (currentRoom3==(int)((((rand()%1000)*0.001f)+0.2f)*(float)Room3amount[0])) {
									roomArray[x][y] = Room3storage::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
							case 1: //HCZ
								if (currentRoom3==(int)(0.5f*(float)Room3amount[1])) {
									roomArray[x][y] = Room513::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
							case 2: //EZ
								if (currentRoom3==(int)(0.3f*(float)Room3amount[2])) {
									roomArray[x][y] = Room3servers::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								} else if (currentRoom3==(int)(0.7f*(float)Room3amount[2])) {
									roomArray[x][y] = Room3servers2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),RoomTemp[x][y].angle);
								}
							break;
						}
						currentRoom3++;
					break;
					case RoomTypes::ROOM4:
						switch (getZone(y)) {
							case 0: //LCZ

							break;
							case 1: //HCZ

							break;
							case 2: //EZ

							break;
						}
						currentRoom4++;
					break;
				}
				if (roomArray[x][y]==nullptr) {
					addRandomRoom(x,y,RoomTemp[x][y].type,RoomTemp[x][y].angle,getZone(y));
				}
			} else if (RoomTemp[x][y].angle==127) {
				if (getZone(y)==1) {
					roomArray[x][y] = checkpoint1::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),0);
				} else {
					roomArray[x][y] = checkpoint2::createNew(irr::core::vector3df(x*204.8f*RoomScale,0,y*204.8f*RoomScale),0);
				}
			}
		}
		prevZone = getZone(y);
	}
}*/