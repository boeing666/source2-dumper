#pragma once

class CBaseProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xDD0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xDA0, size 0x1, align 1
    char _pad_0DA1[0x3]; // offset 0xDA1
    int32 m_iShapeType; // offset 0xDA4, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xDA8, size 0x1, align 1
    char _pad_0DA9[0x7]; // offset 0xDA9
    CTransform m_mPreferredCatchTransform; // offset 0xDB0, size 0x20, align 16
};
