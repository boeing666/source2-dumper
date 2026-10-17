#pragma once

class CBaseProp : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xBE0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xBB0, size 0x1, align 1
    char _pad_0BB1[0x3]; // offset 0xBB1
    int32 m_iShapeType; // offset 0xBB4, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xBB8, size 0x1, align 1
    char _pad_0BB9[0x7]; // offset 0xBB9
    CTransform m_mPreferredCatchTransform; // offset 0xBC0, size 0x20, align 16
};
