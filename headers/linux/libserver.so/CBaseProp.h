#pragma once

class CBaseProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xC70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xC40, size 0x1, align 1
    char _pad_0C41[0x3]; // offset 0xC41
    int32 m_iShapeType; // offset 0xC44, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xC48, size 0x1, align 1
    char _pad_0C49[0x7]; // offset 0xC49
    CTransform m_mPreferredCatchTransform; // offset 0xC50, size 0x20, align 16
};
