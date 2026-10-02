#pragma once

class CBaseProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xB10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xAE0, size 0x1, align 1
    char _pad_0AE1[0x3]; // offset 0xAE1
    int32 m_iShapeType; // offset 0xAE4, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xAE8, size 0x1, align 1
    char _pad_0AE9[0x7]; // offset 0xAE9
    CTransform m_mPreferredCatchTransform; // offset 0xAF0, size 0x20, align 16
};
