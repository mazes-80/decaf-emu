#pragma once
#include "types.h"
#include "gx2_enum.h"

void
GX2SetTessellation(GX2TessellationMode tessellationMode,
                   GX2PrimitiveMode primitiveMode,
                   GX2IndexType indexType);

void
GX2SetMinTessellationLevel(float min);

void
GX2SetMaxTessellationLevel(float max);
