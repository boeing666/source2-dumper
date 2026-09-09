#pragma once

class CCSCustomPlayerCamera : public CBaseEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CHandle< CCSPlayerPawnBase > m_hPawn; // offset 0x4A8, size 0x4, align 4
    CustomCameraMode_t m_nCameraMode; // offset 0x4AC, size 0x1, align 1
    char _pad_04AD[0x3]; // offset 0x4AD
    CHandle< CBaseEntity > m_hFollowEntity; // offset 0x4B0, size 0x4, align 4
    bool m_bFollowEyes; // offset 0x4B4, size 0x1, align 1
    char _pad_04B5[0x3]; // offset 0x4B5
    Vector m_vecFollowOffset; // offset 0x4B8, size 0xC, align 4
    Vector m_vecCameraOffset; // offset 0x4C4, size 0xC, align 4
    bool m_bClipCameraOffset; // offset 0x4D0, size 0x1, align 1
    char _pad_04D1[0x3]; // offset 0x4D1
    float32 m_flCameraOffsetReturnStrength; // offset 0x4D4, size 0x4, align 4
    char _pad_04D8[0x8]; // offset 0x4D8
};
