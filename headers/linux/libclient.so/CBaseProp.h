#pragma once

class CBaseProp : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xDD0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xD9A]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xD9A, size 0x1, align 1
    char _pad_0D9B[0x1]; // offset 0xD9B
    int32 m_iShapeType; // offset 0xD9C, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xDA0, size 0x1, align 1
    char _pad_0DA1[0xF]; // offset 0xDA1
    CTransform m_mPreferredCatchTransform; // offset 0xDB0, size 0x20, align 16
};
