#include <sdktools>

//////////////////////////////
//			ENUMS			// 
//////////////////////////////
//玩家数据
enum Clients
{
	iUID,
	iGetShare,
	iSignNum,
	iSignTime,
	iConnectTime,
	iPlayerId,
	iNumber,
	iOnline,
	iVitality,
	iLastseen,
	iDataRetry,
	iAnalyticsId,
	iGroupId,
	iVipType,
	iCPId,
	iCPDate,
	bool:bLoaded,
	bool:bIsBot,
	bool:bListener,
	bool:bAllowLogin,
	bool:bTwiceLogin,
	bool:bLoginProc,
	String:szIP[32],
	String:szGroupName[64],
	String:szSignature[256],
	String:szDiscuzName[128],
	String:szAdminFlags[64],
	String:szInsertData[512],
	String:szUpdateData[512],
	String:szNewSignature[256],
	Handle:hSignTimer,
	Handle:hListener,
}

//Handles
enum Handles
{
	Handle:DB_Game,
	Handle:DB_Discuz,
	Handle:CV_Hiden,
	Handle:KV_Local
}

//Forwards
enum Forward
{
	Handle:ServerLoaded,
	Handle:ClientLoaded,
	Handle:ClientSigned,
	Handle:ClientVipChecked,
	Handle:ClientMarried,
	Handle:ClientDivorce,
	Handle:ClientAuthTerm,
	Handle:APIGetCredits,
	Handle:APISetCredits,
	Handle:OnNewDay
}

//Events
enum hEvents
{
	Handle:round_start,
	Handle:round_end,
	Handle:player_spawn,
	Handle:player_death,
	Handle:player_hurt,
	Handle:player_team,
	Handle:player_jump,
	Handle:weapon_fire
}