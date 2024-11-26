#pragma once
#include "DrawableBase.h"
#include <random>
#include "VertexIndexedListCone.h"
#include "Bindable/BindableBase.h"

class Cone : public DrawableBase<Cone>
{
public:
	Cone(Graphics& gfx, bool randomCoord, bool worldRot, bool modelRot, bool moving);

private:
	VertexIndexedListCone verIndListCone;
};