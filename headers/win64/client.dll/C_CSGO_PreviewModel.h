#pragma once

class C_CSGO_PreviewModel : public CBaseAnimGraph /*0x0*/  // sizeof 0x18B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1268]; // offset 0x0
    CUtlString m_defaultAnim; // offset 0x1268, size 0x8, align 8
    AnimLoopMode_t m_nDefaultAnimLoopMode; // offset 0x1270, size 0x4, align 4
    float32 m_flInitialModelScale; // offset 0x1274, size 0x4, align 4
    CUtlString m_sInitialWeaponState; // offset 0x1278, size 0x8, align 8
    char _pad_1280[0x638]; // offset 0x1280
};
