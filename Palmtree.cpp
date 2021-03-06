#include "Palmtree.hpp"
#include <vector>
#include "Sparkler.hpp"

void Palmtree::Trigger(std::vector<Rocket *> &v)
{
	int hForce = -4;
	for (int i = 0; i < 9; i++)
	{
		
		Rocket *s = new Sparkler();

		*s = Rocket();
		s->SetForce(this->force.x + hForce, this->force.y - 1);
		s->SetPosition(*this);
		s->SetAgeLimit(40);
		
		v.push_back(s);
		hForce++;
	}
}