#pragma once

class CBaseProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xE30, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xDF8, size 0x1, align 1
    char _pad_0DF9[0x3]; // offset 0xDF9
    int32 m_iShapeType; // offset 0xDFC, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xE00, size 0x1, align 1
    char _pad_0E01[0xF]; // offset 0xE01
    CTransform m_mPreferredCatchTransform; // offset 0xE10, size 0x20, align 16
};
