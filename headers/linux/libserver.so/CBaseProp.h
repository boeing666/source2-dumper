#pragma once

class CBaseProp : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xAA0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA70]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xA70, size 0x1, align 1
    char _pad_0A71[0x3]; // offset 0xA71
    int32 m_iShapeType; // offset 0xA74, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xA78, size 0x1, align 1
    char _pad_0A79[0x7]; // offset 0xA79
    CTransform m_mPreferredCatchTransform; // offset 0xA80, size 0x20, align 16
};
