#ifndef Rule_CaoCao_h__
#define Rule_CaoCao_h__


class Rule_CaoCao : public Rule_Character {


public:
	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void huJia(std::shared_ptr<Event_RequestCard>& event);

	void jianXiong(std::shared_ptr<Event_Hurt>& event);
};
#endif // Rule_CaoCao_h__