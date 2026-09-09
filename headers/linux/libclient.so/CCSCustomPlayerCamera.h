#pragma once

class CCSCustomPlayerCamera : public C_BaseEntity /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    CHandle< C_CSPlayerPawnBase > m_hPawn; // offset 0x77C, size 0x4, align 4
    CustomCameraMode_t m_nCameraMode; // offset 0x780, size 0x1, align 1
    char _pad_0781[0x3]; // offset 0x781
    CHandle< C_BaseEntity > m_hFollowEntity; // offset 0x784, size 0x4, align 4
    bool m_bFollowEyes; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    Vector m_vecFollowOffset; // offset 0x78C, size 0xC, align 4
    Vector m_vecCameraOffset; // offset 0x798, size 0xC, align 4
    bool m_bClipCameraOffset; // offset 0x7A4, size 0x1, align 1
    char _pad_07A5[0x3]; // offset 0x7A5
    float32 m_flCameraOffsetReturnStrength; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0xC]; // offset 0x7AC
};
