#ifndef __objectIdentifyH_
#define __objectIdentifyH_

enum _objectIdentify
{
	//背景物体id,丧尸id
	//武器id(与图片相关),子弹id(与武器相同)
	//如果改动此文件数值，同时改动map.data文件
	/************************************************************************/
 ID_MAP = 0,
 ID_PLAYER, 
 ID_CLIENT_ORGPOS_ON_MAP,
 ID_DOOR_INDEX_TABLE,

 OBJECT_GROUND = 10,
 OBJECT_TREE ,
 OBJECT_CLOUD ,
 OBJECT_GRASS ,
 OBJECT_ROOM_DOOR ,
 OBJECT_CUTDOWNTREE ,
 OBJECT_DEADTREE ,//16
 OBJECT_SMALLCAR ,//17
 OBJECT_KEY ,//18
 OBJECT_PAPER ,//19
 OBJECT_HOUSE1 ,//20
 OBJECT_WALL ,//21
 OBJECT_WINDOW1 ,//22
 OBJECT_CABINET ,//23
 OBJECT_BULLETSUPPLY ,//24
 OBJECT_ROADSIGN ,//25
 OBJECT_BUS ,//26
 OBJECT_CLOSESTOOL ,//27
 OBJECT_BED ,//28
 OBJECT_TV ,//29
 OBJECT_SOCKET ,//30
 OBJECT_DISK ,//31
 OBJECT_WASHPOT ,//32
 OBJECT_SAFEBOX ,//33
 OBJECT_SOFA ,//34
 OBJECT_DESK ,//35
 OBJECT_FOOTBALL ,//36
 OBJECT_MESSIPAPER ,//37
 OBJECT_HOMEGATE ,//38
 OBJECT_STICK ,//39
 OBJECT_BUSSET ,//40
 OBJECT_RAIN,//41
 OBJECT_TRUCK,//42
 OBJECT_TRUCK1,//43
 OBJECT_BIKE,//44
 OBJECT_BUIDING,//45
 OBJECT_GAMEMACHINE,//46
 OBJECT_COIN,//47
 OBJECT_ROADDIRECTLIGHT,//48
 OBJECT_LADDER,//49
 OBJECT_GAMEMACHINE1,//50
 OBJECT_GAMEMACHINE2,//51
 OBJECT_MASK1,//52
 OBJECT_MASK2,//53
 OBJECT_BLOODSUPPLY, //54
 OBJECT_NONINTERACTIVE, //55 非交互物体通用
 OBJECT_LADDEREX, //56
 OBJECT_SPIDERBLOOD, //57
 OBJECT_LUADEF, //58 由lua脚本定义的物体

 ID_SMALLZOMBIE = 130,
 ID_BIRD ,//131
 ID_DEADMAN ,//132
 ID_DOG ,//133
 ID_HUNTER, //134
 ID_SPIDER_S, //135 小蜘蛛
 ID_SPIDER_B //136 大蜘蛛
};

// >160
#define ID_DESERT_EAGLE IDB_MSG_DESERTEAGLE //160
#define ID_AK47 IDB_MSG_AK47 //166
#define ID_M4A1 IDB_MSG_M4A1 //170
#define ID_AWP IDB_MSG_AWP //174
#define ID_FIVESEVEN IDB_MSG_FIVESEVEN //177
#define ID_USP IDB_MSG_USP //180
#define ID_MP5 IDB_MSG_MP5 //183
#define ID_BOW IDB_MSG_BOW //203

#endif