#pragma once

class CBaseProp : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xB80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB50]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xB50, size 0x1, align 1
    char _pad_0B51[0x3]; // offset 0xB51
    int32 m_iShapeType; // offset 0xB54, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xB58, size 0x1, align 1
    char _pad_0B59[0x7]; // offset 0xB59
    CTransform m_mPreferredCatchTransform; // offset 0xB60, size 0x20, align 16
};
