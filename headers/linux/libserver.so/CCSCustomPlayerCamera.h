#pragma once

class CCSCustomPlayerCamera : public CBaseEntity /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CHandle< CCSPlayerPawnBase > m_hPawn; // offset 0x788, size 0x4, align 4
    CustomCameraMode_t m_nCameraMode; // offset 0x78C, size 0x1, align 1
    char _pad_078D[0x3]; // offset 0x78D
    CHandle< CBaseEntity > m_hFollowEntity; // offset 0x790, size 0x4, align 4
    bool m_bFollowEyes; // offset 0x794, size 0x1, align 1
    char _pad_0795[0x3]; // offset 0x795
    Vector m_vecFollowOffset; // offset 0x798, size 0xC, align 4
    Vector m_vecCameraOffset; // offset 0x7A4, size 0xC, align 4
    bool m_bClipCameraOffset; // offset 0x7B0, size 0x1, align 1
    char _pad_07B1[0x3]; // offset 0x7B1
    float32 m_flCameraOffsetReturnStrength; // offset 0x7B4, size 0x4, align 4
    char _pad_07B8[0x8]; // offset 0x7B8
};
