#pragma once

class CBaseProp : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC40, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xC10, size 0x1, align 1
    char _pad_0C11[0x3]; // offset 0xC11
    int32 m_iShapeType; // offset 0xC14, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xC18, size 0x1, align 1
    char _pad_0C19[0x7]; // offset 0xC19
    CTransform m_mPreferredCatchTransform; // offset 0xC20, size 0x20, align 16
};
