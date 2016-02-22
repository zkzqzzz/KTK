#ifndef SelectedCards_h__
#define SelectedCards_h__

#include <deque>
#include "UI\UI_Card.h"
#include <functional>

class SelectedCards {

public:
	std::deque<UI_Card*>& getCards() const;
	void addCard(const UI_Card* card) const;
	void removeCard(const UI_Card* card) const;
	void popFront() const;
	void popAll() const;
	bool hasCard(const std::shared_ptr<Card> card) const;
	bool hasCard(const UI_Card* card) const;

	int getMaxSelects() const;
	void setMaxSelects(int maxSelects);
	const std::function<void()> & getMaxCallBack() const;
	void setMaxCallBack(const std::function<void ()> & maxCallBack);
	const std::function<void()> & getUnmaxCallBack() const;
	void setUnmaxCallBack(const std::function<void ()> & unmaxCallBack);

private:
	std::deque<UI_Card*> m_cards;
	int m_maxSelects;
	std::function<void ()> m_maxCallBack;
	std::function<void ()> m_unmaxCallBack;
};
#endif // SelectedCards_h__
