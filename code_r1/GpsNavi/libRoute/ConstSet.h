// Copyright (c) 2005 PLink Corp.  All rights reserved.
// $Author: daniel $
// $Date: 2011/05/20 07:31:35 $
// $Revision: 1.16 $
#include "NuroNaviConst.h"
#ifndef Def_ConstSet
	#define Def_ConstSet
	
	#define DEFNEWTHCFORMAT//?O?_??�bsTHC?[?c

//DataMaxNum
	#define _MAXUNSHORT						65535
	#define _MAXUNLONG						4294967295UL
	#define _COORLEVELNUM					65536
	#define _DEFNODEID						1040000

	
//System Base Const

	#define _THRRTBID						4095
	
	#define _LONLATBASE						1024//1000 ?�Z?p??P?n????t??P?Z???????
	#define _EACHDEGREECOORSIZE				100000
	#define _ROUTEDATABASERDLEN				15000000//?W?????G ?D?????l?????


	#define	_CARDIRECTIONEFFECTDIS			5000//?@?}?l???W?? ??q???Y???V
	#define	_DOUBLE_CARDIRECTIONEFFECTDIS	10000//CarDirectionEffectDis???@?�hd??

	#define	_FIRSTROADCHECKDIS				100//?}?l???p???n300????????~????{?O?_?n?n???s??????
	#define	_FIRSTROADRETURNDIS				4000//????????j???�aZ??
	

//Draw Const
	#define __DATAABOVERANGE_EN					0 //?????????X?W???d??(??K???|????u?q ?{?b??????u??n?�M????p?????V?h?X?i?Y?i)
	#define __DATAABOVERANGE_WS			EACHBLOCKSIZE//?????????X?W???d??(??K???|????u?q)

	#define _WEIGHTINGBASE					10//Routing Weight Base Const
	#define _ROUTEFIXDIS					2000//2000m(if Distance of Routing Point leave Road, less then this number it be check an Workable Routing Point)

//???e???j?P?_?]?l
	#define _TSANG							15//???�N? 
	#define _TXANG							40//50//?e???
	#define _TTANG							135//???s???? 
	#define _TUANG							175//?j??? 

	#define _TSCODE							1//?????X 
	#define _TXCODE							2//?e???X 
	#define _TTCODE							3//???s?X 
	#define _TUCODE							4//?j???X 
	#define _LARGEDIFFANGLE					30//?O?_????F?D?????P?O 
	#define _VERYLARGEDIFFANGLE				50//?O?_????F?D?????P?O 

	#define _TURNFLAGDIFFDIS				35//(5*CoorConst)

	#define _VRT_SHORTCROSS					100//?W?u?Z?o?//
	#define _DEF_SHORTANGLE					5//?W?u?Z?o?

//???????O??
	#define _MAXWAITTINGTIMER				40//????????j?p????
	#define _SYSTEMSLEEPTIME				100//?t?�ZC?????~?m???(?????v?????C??24?T ?o??N???|???H??lag???P? ?o????????41ms???k ?????]?p???C??40?T3???3?I??????p?~??)

//AutoMoveModeKey ?????????N?X
	#define _AUTOMOVE_GPS					0//?HGPS???????		
	#define _AUTOMOVE_SIMULATION			1//?H???>?????????  

//MapActionSource
	#define	_ACTIONCODESOURCE_GPS			    0//GPS????  
	#define	_ACTIONCODESOURCE_SIMULATION		1//????? 
	#define	_ACTIONCODESOURCE_UI			    2//UI????   


	#define _LEVELCHOOSEDIS1				2500  //_LEVELCHOOSEDIS1
	#define _LEVELCHOOSEDIS2				5000  //_LEVELCHOOSEDIS2
	#define _LEVELCHOOSEDIS3			   10000  //_LEVELCHOOSEDIS3
/*
	#define Way_Freeway			0//???t????(???D)
	#define Way_Highspeedway	1//??t?D??
	#define Way_SlipRoad		2//???y?D
	#define Way_CityRoad		3//??D
	#define Way_CountyRoad		4//???D
	#define Way_TownRoad		5//?m?D
	#define Way_OtherRoad		6//???L?D??
	#define Way_NoNameRoad		7//?L?W?D??
*/
	#define _IMPORTANTRDLEVEL	    9//???n????? _IMPORTANTRDLEVEL
	#define _GENERALRDLEVEL		   10//?@???D??? 
	#define _CONNECTLEVELCLASSLIMIT	8//?]?N????0~8?O?@?w?i?H????s?q?????? 
	#define _WALKINGRDLEVEL		   13//?@???D??? 
	#define _PLANRDLEVEL			14

	#define _MAPLAYER_DEF			5
	#define _MAPLAYER_SRT			0
	#define _MAPLAYER_STHR			1
	#define _MAPLAYER_THC			2
	#define _MAPLAYER_TTHR			3
	#define _MAPLAYER_TRT			4

	#define CONST_UNITOFTHCDIS		1000

	#define CONST_COMBINEROADSIZE		0//20
	#define CONST_MAXCOMBINEROADCOUNT	6
	#define CONST_PASSROADSIZE			20

	#define _SLEEPTICKCOUNT				1//10 
	#define _SMALLSTRAIGHT			18
	#define _STRAIGHT				35
	#define _XROADANGLE				60
	#define _VERTICAL				90

	#define _SHORTESTROADLEN		40
	#define FOLLOWWEIGHTING			200

	#define _DROUTE_ERROR			
	#define _DNEARTARGETNODECOUNT 256
	//#define NT_TO_TT//?w??s?_???C?????T??????S?O?B?z20110302
	#define _DTMC
	//#define _DDst
	#ifdef VALUE_EMGRT
		#ifndef DEF_MAKETHRROUTE
			#define _DAR
		#endif
	#else
		//#define NT_TO_TT//?w??s?_???C?????T??????S?O?B?z20110302
	#endif

	#define TOBESLEEPTIMER	1
    #ifdef VALUE_EMGRT
      // #define _USERT6
    #endif
//	#ifdef _USETTI
		#define _TTI_MONDAY		0x01
		#define _TTI_TUESDAY	0x02
		#define	_TTI_WEDNESDAY	0x04
		#define _TTI_THURSDAY	0x08 
		#define _TTI_FRIDAY		0x10
		#define _TTI_SATURDAY	0x20
		#define _TTI_SUNDAY		0x40
//	#endif
	
	#define THC_THR_LINK
	#ifdef THC_THR_LINK
		#define THR_TO_THC
		#define THC_TO_THR
	#endif
#endif