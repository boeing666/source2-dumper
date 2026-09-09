#pragma once

class CCSCustomPlayerCamera : public C_BaseEntity /*0x0*/  // sizeof 0x640, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CHandle< C_CSPlayerPawnBase > m_hPawn; // offset 0x600, size 0x4, align 4
    CustomCameraMode_t m_nCameraMode; // offset 0x604, size 0x1, align 1
    char _pad_0605[0x3]; // offset 0x605
    CHandle< C_BaseEntity > m_hFollowEntity; // offset 0x608, size 0x4, align 4
    bool m_bFollowEyes; // offset 0x60C, size 0x1, align 1
    char _pad_060D[0x3]; // offset 0x60D
    Vector m_vecFollowOffset; // offset 0x610, size 0xC, align 4
    Vector m_vecCameraOffset; // offset 0x61C, size 0xC, align 4
    bool m_bClipCameraOffset; // offset 0x628, size 0x1, align 1
    char _pad_0629[0x3]; // offset 0x629
    float32 m_flCameraOffsetReturnStrength; // offset 0x62C, size 0x4, align 4
    char _pad_0630[0x10]; // offset 0x630
};
