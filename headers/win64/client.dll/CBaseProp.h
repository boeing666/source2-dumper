#pragma once

class CBaseProp : public CBaseAnimGraph /*0x0*/  // sizeof 0x12A0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1268]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0x1268, size 0x1, align 1
    char _pad_1269[0x3]; // offset 0x1269
    int32 m_iShapeType; // offset 0x126C, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0x1270, size 0x1, align 1
    char _pad_1271[0xF]; // offset 0x1271
    CTransform m_mPreferredCatchTransform; // offset 0x1280, size 0x20, align 16
};
