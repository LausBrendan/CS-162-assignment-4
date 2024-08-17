#ifndef EVENT_HPP
#define EVENT_HPP

// Event interface
class event {
private:
	// TODO private members, if relevant
	virtual void encounter(player& p) = 0;

	virtual void print() const = 0;

	virtual ~event() = default;
protected:
	// TODO protected members, if relevant
public:
	// TODO public members
};

#endif
