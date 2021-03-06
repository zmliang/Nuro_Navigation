#ifndef __NURO_NAVIGATION_CONSTANTS
#define __NURO_NAVIGATION_CONSTANTS

#define VRT_Defway						0//General Road						一般道路
#define VRT_Freeway						1//Freeway							高速公路
#define VRT_Fastway						2//Fastway							快速道路
#define VRT_SlipRoad					3//Slip Road						交流道
#define VRT_Overpass					4//Overpass							高架橋
#define VRT_Tunnel						5//Tunnel							隧道
#define VRT_Underpass					6//Underpass						地下道
#define VRT_UnOverpass					7//Road Under Overpass				高架橋下道路
#define VRT_SurroundWay					8//Road Surrond the City			外環道
#define VRT_StopcockWay					9//Slip Road(Diff Name)				匝道
#define VRT_GuideWay					10//Road along MajorRoad 			引道
#define VRT_3DSlipRoad					11//Overpass Slip Road				立交橋
#define VRT_Tollgate					20//Tollgate						收費站
#define VRT_RestStop					21//Reststop						休息區
#define VRT_HasSlipRoad					22//warn user here has Slip Road	有交流道
#define	VRT_ScanSpeed					23//測速照相
#define VRT_IN_FASTROAD					27
#define	VRT_IN_SLOWROAD					28 
#define VRT_TrafficCircle				30//Traffic Circle					圓環
#define VRT_ROADCROSS					31
#define VRT_FastToSlow                  33//(辦?鞣) for panasonic
#define VRT_SlowToFast					34//(鞣?辦) for panasonic
#define VRT_SlowWay						40//:鞣?耋
#define VRT_UTURN						41
#define VRT_LTURN						42
#define VRT_RTURN						43
#define VRT_FERRY						50 //啊傾
#define VRT_Bridge                      51//橋梁
#define VRT_StartSite					91//Start Site that u set set		起點
#define VRT_CityTownBoundary			96//City or Town Boundary			鄉鎮邊境
#define VRT_MapBoundary					97//Near Map Boundary				地圖邊境
#define VRT_MidSite						98//Middle Site that uset set		經由點
#define VRT_EndSite						99//End Site that user set			終點
//TurnFlag in RoutingData 
#define T_No						    0//無動作
#define T_Afore							1//直行
#define T_Left						    2//左轉
#define T_Right							3//右轉
#define T_LeftSide						4//岔路向左
#define T_RightSide						5//岔路向右
#define T_MidWay						6//中線
#define T_LUturn						7//左迴轉
#define T_RUturn						8//右迴轉
#define T_Direction						9//依指示方向
#define T_LeftLeft						18//左轉
#define T_RightRight				    19//右轉
#define T_LeftLeftSide                  20//岔路向左
#define T_RightRightSide				21//岔路向右
#define T_LULUturn						22//左迴轉
#define T_RURUturn						23//右迴轉
//--------------------------------------------------------------
#define AF_NoPlay						9999//(完全不播報)
#define AF_LoseHere						0//(只播報距離與方向)
#define AF_In_SlipRoad					1//進入交流道
#define AF_In_Underpass					2//進入地下道
#define AF_In_Fastway					3//進入快速道路
#define AF_In_Overpass					4//進入高架橋
#define AF_In_Freeway					5//進入高速公路
#define AF_In_Tunnel					6//進入隧道
#define AF_Out_SlipRoad					7//駛離交流道
#define AF_Out_Underpass				8//駛離地下道
#define AF_Out_Fastway					9//駛離快速道路
#define AF_Out_Overpass					10//駛離高架橋
#define AF_Out_Freeway					11//駛離高速公路
#define AF_Out_Tunnel					12//駛離隧道
#define AF_In_UnOverpass				13//走平面道路
#define AF_In_Tollgate					14//進入收費站
#define AF_In_RestStop					15//進入休息站
#define AF_Has_SlipRoad					16//有交流道
#define	AF_MidSit						17//測速照相
#define AF_In_TrafficCircle				18//In Traffic Circle					圓環
#define AF_Out_TrafficCircle			19//Out Traffic Circle					圓環
#define AF_Has_RestStop					20
#define AF_IN_FASTROAD					21
#define	AF_IN_SLOWROAD					22 
#define AF_OUT_FASTROAD					23
#define AF_OUT_SLOWROAD					24
#define AF_IN_MAINROAD					25 //輛�鄵鰽�
#define AF_IN_AUXROAD				    26  //輛�賳巡�
#define AF_OUT_MAINROAD					27 //燭羲翋耋
#define AF_OUT_AUXROAD				    28  //燭羲落耋
#define AF_IN_Bridge                    29 //進入橋梁

#define AF_CityTownBoundary				30//到達城鄉邊界
#define AF_MapBoundary					31//到達邊界

#define AF_IN_UTURN						40
#define AF_IN_LTURN						41
#define AF_IN_RTURN						42
#define AF_IN_FERRY						43 //輛�諻痗�

//#define AF_MidSit						98//到達經由點
#define AF_EndSite						99//到達終點
#define AF_ChangeRoadName				100//變換路

//Distance.txt index
#define	DIS_FOLLOW							1
#define	DIS_100M							2
#define DIS_300M							3
#define	DIS_700M							4
#define DIS_500M							5
#define DIS_1KM								6
#define DIS_2KM								7
#define DIS_IGNORE							0
#define DIS_ESTIMATION                      8
//
#define DIS_DRIVE                           9
#define DIS_PREPARE                         10
//fastway
#define  VOICEDIS2000_E						1850
#define  VOICEDIS2000_S						2150
#define  VOICEDIS1000_E						850
#define  VOICEDIS1000_S						1150
#define  VOICEDIS500_E_FastWay				400
#define  VOICEDIS500_S_FastWay				600
//
#define  VOICEDIS500_E_SlowWay				400
#define  VOICEDIS500_S_SlowWay				600
#define  VOICEDIS300_E						250
#define  VOICEDIS300_S						350
#define  VOICEDIS100_E						0
#define  VOICEDIS100_S						150 

//
#define  IN_REAL3DPIC						600
#define  IN_CROSSDIS_LEVEL_1				300
#define	 IN_CROSSDIS_LEVEL_2				150
#define  OUT_CROSSDIS_LEVEL_1				50
#define  OUT_CROSSDIS_LEVEL_2				100
//
#define  NO_ACTION							0
#define  IN_LEVEL_1							1
#define  IN_LEVEL_2							2
#define  OUT_LEVEL_1						3
#define	 OUT_LEVEL_2						4

//
#define  DIS_BETWEENINGORE							150
#endif

#define Elead_Roundabout_Right               1//逆時針
#define Elead_Roundabout_Left				 2//順時針
#define Elead_In_TrafficCircle               3//靠近圓環
#define Elead_Straight						 4//直行
#define Elead_Slight_Left					 5//左前方轉彎
#define Elead_Slight_Right					 6//右前方轉彎
#define Elead_Keep_Left						 7//岔路向左
#define Elead_Keep_Right					 8//岔路向右
#define Elead_Left							 9//左轉
#define Elead_Right							10//右轉
#define Elead_Hard_Left						11//左後方轉彎
#define Elead_Hard_Right					12//右後方轉彎
#define Elead_Uturn_Left					13//左迴轉
#define Elead_Uturn_Right					14//右迴轉
#define Elead_Destination                   15//到達目的地
#define Elead_LeaveNaviLine					16//偏離導航路線
#define Elead_Enter_Bridge                  17//進入橋梁
#define Elead_Enterfreeway_Left             18//左測進入高速公路
#define Elead_Enterfreeway_Right            19//右側進入高速公路
#define Elead_Exitfreeway_Left              20//左側離開高速公路
#define Elead_Exitfreeway_Right             21//右側離開高速公路
#define Elead_Toll_Booth                    22//收費站
#define Elead_Enter_Tunnel                  23//進入隧道
#define Elead_Enterferry_Left               24//左邊進入渡輪
#define Elead_Enterferry_Right              25//右邊進入渡輪
#define Elead_Exitferry_Left                26//左邊離開渡輪
#define Elead_Exitferry_Right               27//右邊離開渡輪
#define Elead_Exitferry                     28//靠近渡輪
#define Elead_Takeramp_Right                29//右邊進入匝道
#define Elead_Takeramp_Left                 30//左邊進入匝道