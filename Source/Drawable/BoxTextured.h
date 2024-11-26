#pragma once
#include "DrawableBase.h"
#include <random>
#include "Bindable/BindableBase.h"
#include "VertexIndexedListBox.h"

class BoxTextured : public DrawableBase<BoxTextured>
{
public:
	BoxTextured(Graphics& gfx, bool randomCoord, bool worldRot, bool modelRot, bool moving, float x_in, float y_in, float z_in);

private:
	VertexIndexedListBox verIndListBox;
};