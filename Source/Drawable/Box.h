#pragma once
#include "DrawableBase.h"
#include "VertexIndexedListBox.h"
#include "Bindable/BindableBase.h"

class VertexIndexedListBox;

class Box : public DrawableBase<Box>
{
public:
	Box(Graphics& gfx, bool randomCoord, bool worldRot, bool modelRot, bool moving);

private:
	VertexIndexedListBox verIndListBox;
};

