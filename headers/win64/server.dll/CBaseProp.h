#pragma once

class CBaseProp : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x8B0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x3]; // offset 0x879
    int32 m_iShapeType; // offset 0x87C, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0x880, size 0x1, align 1
    char _pad_0881[0xF]; // offset 0x881
    CTransform m_mPreferredCatchTransform; // offset 0x890, size 0x20, align 16
};
