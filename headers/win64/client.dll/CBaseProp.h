#pragma once

class CBaseProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xCE0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xCA8, size 0x1, align 1
    char _pad_0CA9[0x3]; // offset 0xCA9
    int32 m_iShapeType; // offset 0xCAC, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xCB0, size 0x1, align 1
    char _pad_0CB1[0xF]; // offset 0xCB1
    CTransform m_mPreferredCatchTransform; // offset 0xCC0, size 0x20, align 16
};
