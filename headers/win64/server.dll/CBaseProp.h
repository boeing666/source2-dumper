#pragma once

class CBaseProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xA70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA40]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xA40, size 0x1, align 1
    char _pad_0A41[0x3]; // offset 0xA41
    int32 m_iShapeType; // offset 0xA44, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xA48, size 0x1, align 1
    char _pad_0A49[0x7]; // offset 0xA49
    CTransform m_mPreferredCatchTransform; // offset 0xA50, size 0x20, align 16
};
