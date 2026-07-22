#pragma once

class C_BulletHitModel : public CBaseAnimGraph /*0x0*/  // sizeof 0x11D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    matrix3x4_t m_matLocal; // offset 0x1180, size 0x30, align 4
    int32 m_iBoneIndex; // offset 0x11B0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPlayerParent; // offset 0x11B4, size 0x4, align 4
    bool m_bIsHit; // offset 0x11B8, size 0x1, align 1
    char _pad_11B9[0x3]; // offset 0x11B9
    float32 m_flTimeCreated; // offset 0x11BC, size 0x4, align 4
    VectorWS m_vecStartPos; // offset 0x11C0, size 0xC, align 4
    char _pad_11CC[0x4]; // offset 0x11CC
};
