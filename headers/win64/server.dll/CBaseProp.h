#pragma once

class CBaseProp : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x910, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0x8D8, size 0x1, align 1
    char _pad_08D9[0x3]; // offset 0x8D9
    int32 m_iShapeType; // offset 0x8DC, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0x8E0, size 0x1, align 1
    char _pad_08E1[0xF]; // offset 0x8E1
    CTransform m_mPreferredCatchTransform; // offset 0x8F0, size 0x20, align 16
};
