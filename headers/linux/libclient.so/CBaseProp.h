#pragma once

class CBaseProp : public CBaseAnimGraph /*0x0*/  // sizeof 0x1140, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0x1108, size 0x1, align 1
    char _pad_1109[0x3]; // offset 0x1109
    int32 m_iShapeType; // offset 0x110C, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0x1110, size 0x1, align 1
    char _pad_1111[0xF]; // offset 0x1111
    CTransform m_mPreferredCatchTransform; // offset 0x1120, size 0x20, align 16
};
