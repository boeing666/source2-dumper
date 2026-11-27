#pragma once

class CGenericShapeProxy  // sizeof 0x98, align 0xFF (physicslib)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CUtlLeanVectorFixedGrowable< Vector, 8 > m_verts; // offset 0x30, size 0x68, align 8
};
