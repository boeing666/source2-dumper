#pragma once

class CBaseProp : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC70, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xC42]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xC42, size 0x1, align 1
    char _pad_0C43[0x1]; // offset 0xC43
    int32 m_iShapeType; // offset 0xC44, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xC48, size 0x1, align 1
    char _pad_0C49[0x7]; // offset 0xC49
    CTransform m_mPreferredCatchTransform; // offset 0xC50, size 0x20, align 16
};
