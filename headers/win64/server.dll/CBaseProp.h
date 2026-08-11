#pragma once

class CBaseProp : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x7D0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0x798, size 0x1, align 1
    char _pad_0799[0x3]; // offset 0x799
    int32 m_iShapeType; // offset 0x79C, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0x7A0, size 0x1, align 1
    char _pad_07A1[0xF]; // offset 0x7A1
    CTransform m_mPreferredCatchTransform; // offset 0x7B0, size 0x20, align 16
};
