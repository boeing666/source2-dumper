#pragma once

class CBaseProp : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xAF0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xAC0, size 0x1, align 1
    char _pad_0AC1[0x3]; // offset 0xAC1
    int32 m_iShapeType; // offset 0xAC4, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xAC8, size 0x1, align 1
    char _pad_0AC9[0x7]; // offset 0xAC9
    CTransform m_mPreferredCatchTransform; // offset 0xAD0, size 0x20, align 16
};
