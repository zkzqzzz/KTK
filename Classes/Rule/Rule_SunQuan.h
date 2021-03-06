#ifndef Rule_SunQuan_h__
#define Rule_SunQuan_h__

#include "Rule_Base.h"

class Rule_SunQuan : public Rule_Base {
public:
	void playCardStage() const;
	void afterProcessEvent(const std::shared_ptr<Event_Base> & event) const;
	void zhiHeng() const;
	void jiuYuan(const std::shared_ptr<Event_Base> & event) const;
};
#endif // Rule_SunQuan_h__
