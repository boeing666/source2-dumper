#pragma once

class CBaseProp : public CBaseAnimGraph /*0x0*/  // sizeof 0x1220, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x11F0]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0x11F0, size 0x1, align 1
    char _pad_11F1[0x3]; // offset 0x11F1
    int32 m_iShapeType; // offset 0x11F4, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0x11F8, size 0x1, align 1
    char _pad_11F9[0x7]; // offset 0x11F9
    CTransform m_mPreferredCatchTransform; // offset 0x1200, size 0x20, align 16
};
