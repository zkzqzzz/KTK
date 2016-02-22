#include "Event_Slash.h"

//	Todo:stl
const std::shared_ptr<Player> & Event_Slash::getFirstPlayer() const {
	return this->m_firstPlayer;
}

//	Todo:stl
void Event_Slash::setFirstPlayer(const std::shared_ptr<Player> & firstPlayer) {
	throw "Not yet implemented";
}

//	Todo:stl
const std::shared_ptr<Card> & Event_Slash::getWeapon() const {
	return this->m_weapon;
}

//	Todo:stl
void Event_Slash::setWeapon(const std::shared_ptr<Card> & weapon) {
	throw "Not yet implemented";
}

//	Todo:stl
const std::shared_ptr<Player> & Event_Slash::getGoalPlayers() const {
	return this->m_goalPlayers;
}

//	Todo:stl
void Event_Slash::setGoalPlayers(const std::shared_ptr<Player> & goalPlayers) {
	throw "Not yet implemented";
}

//	Todo:stl
const std::shared_ptr<Card> & Event_Slash::getArmor() const {
	return this->m_armor;
}

//	Todo:stl
void Event_Slash::setArmor(const std::shared_ptr<Card> & armor) {
	throw "Not yet implemented";
}

//	Todo:stl
std::vector<std::shared_ptr<Card>> & Event_Slash::getSlashs() {
	return this->m_slashs;
}

//	Todo:stl
bool Event_Slash::getNeedToAskPlayer() const {
	return this->m_needToAskPlayer;
}

//	Todo:stl
void Event_Slash::setNeedToAskPlayer(bool needToAskPlayer) {
	throw "Not yet implemented";
}

//	Todo:stl
ESlashState Event_Slash::getSlashState() const {
	return this->m_slashState;
}

void Event_Slash::setSlashState(ESlashState slashState) {
//	Todo:stm
	//更新needtoaskplayer
	throw "Not yet implemented";
}

void Event_Slash::eventResolve() const {
	//检测needtoaskplayer，调用后翻转，根据此布尔值，调用下列两个操作：
//关联player的preeventresovel
//根据状态来确定，要调用的函数
	// TODO - implement Event_Slash::eventResolve
	throw "Not yet implemented";
}

void Event_Slash::weaponCheckBeforeSlash() const {
	//if(青釭剑)			调用装备eventResolve
//else if(雌雄双股剑且满足雌雄条件)	调用装备eventResolve
//else	设置Slash_state为armorcheckbeforeSlashing
	// TODO - implement Event_Slash::weaponCheckBeforeSlash
	throw "Not yet implemented";
}

void Event_Slash::armorCheckBeforeSlash() const {
	//如果（仁王盾&&有效）则发调用装备eventResolve
//如果无防具        设置slashstate为slashing
	// TODO - implement Event_Slash::armorCheckBeforeSlash
	throw "Not yet implemented";
}

void Event_Slash::slashing() const {
	//发出“请求闪”事件，请求成功调用slashFail，请求失败调用slashsuccess
	// TODO - implement Event_Slash::slashing
	throw "Not yet implemented";
}

void Event_Slash::slashSuccess() const {
	//如果（寒冰剑） 调用装备eventResolve
//如果（麒麟弓且目标有马） 调用装备eventResolve
//其他	设置slashstate为hurting
	// TODO - implement Event_Slash::slashSuccess
	throw "Not yet implemented";
}

void Event_Slash::slashFail() const {
	//如果（青龙偃月刀）调用装备eventResolve
//如果（贯石斧） 调用装备eventResolve
//其他	设置slash_state为slashFinish
	// TODO - implement Event_Slash::slashFail
	throw "Not yet implemented";
}

void Event_Slash::hurting() const {
	//发动“伤害事件”，设置slash_state为slashFinish
	// TODO - implement Event_Slash::hurting
	throw "Not yet implemented";
}

void Event_Slash::slashFinish() const {
	//设置被杀者防具为有效。设置eventstate为finish
	// TODO - implement Event_Slash::slashFinish
	throw "Not yet implemented";
}
