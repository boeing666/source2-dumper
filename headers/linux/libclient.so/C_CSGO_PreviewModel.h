#pragma once

class C_CSGO_PreviewModel : public CBaseAnimGraph /*0x0*/  // sizeof 0x2748, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11F0]; // offset 0x0
    CUtlString m_defaultAnim; // offset 0x11F0, size 0x8, align 8
    AnimLoopMode_t m_nDefaultAnimLoopMode; // offset 0x11F8, size 0x4, align 4
    float32 m_flInitialModelScale; // offset 0x11FC, size 0x4, align 4
    CUtlString m_sInitialWeaponState; // offset 0x1200, size 0x8, align 8
    char _pad_1208[0x1540]; // offset 0x1208
};
