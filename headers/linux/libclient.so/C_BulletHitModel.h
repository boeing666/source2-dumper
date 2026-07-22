#pragma once

class C_BulletHitModel : public CBaseAnimGraph /*0x0*/  // sizeof 0x1158, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    matrix3x4_t m_matLocal; // offset 0x1108, size 0x30, align 4
    int32 m_iBoneIndex; // offset 0x1138, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPlayerParent; // offset 0x113C, size 0x4, align 4
    bool m_bIsHit; // offset 0x1140, size 0x1, align 1
    char _pad_1141[0x3]; // offset 0x1141
    float32 m_flTimeCreated; // offset 0x1144, size 0x4, align 4
    VectorWS m_vecStartPos; // offset 0x1148, size 0xC, align 4
    char _pad_1154[0x4]; // offset 0x1154
};
