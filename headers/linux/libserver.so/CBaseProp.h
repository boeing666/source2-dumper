#pragma once

class CBaseProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xD50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD20]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xD20, size 0x1, align 1
    char _pad_0D21[0x3]; // offset 0xD21
    int32 m_iShapeType; // offset 0xD24, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xD28, size 0x1, align 1
    char _pad_0D29[0x7]; // offset 0xD29
    CTransform m_mPreferredCatchTransform; // offset 0xD30, size 0x20, align 16
};
