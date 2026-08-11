#pragma once

class CBaseProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xAC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xA90, size 0x1, align 1
    char _pad_0A91[0x3]; // offset 0xA91
    int32 m_iShapeType; // offset 0xA94, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xA98, size 0x1, align 1
    char _pad_0A99[0x7]; // offset 0xA99
    CTransform m_mPreferredCatchTransform; // offset 0xAA0, size 0x20, align 16
};
