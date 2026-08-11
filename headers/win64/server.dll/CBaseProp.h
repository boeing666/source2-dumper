#pragma once

class CBaseProp : public CBaseAnimGraph /*0x0*/  // sizeof 0x990, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x960]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0x960, size 0x1, align 1
    char _pad_0961[0x3]; // offset 0x961
    int32 m_iShapeType; // offset 0x964, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0x968, size 0x1, align 1
    char _pad_0969[0x7]; // offset 0x969
    CTransform m_mPreferredCatchTransform; // offset 0x970, size 0x20, align 16
};
