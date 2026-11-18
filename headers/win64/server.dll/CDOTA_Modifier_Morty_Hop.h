#pragma once

class CDOTA_Modifier_Morty_Hop : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vStartPosition; // offset 0x1AF8, size 0xC, align 4
    VectorWS m_vTargetPosition; // offset 0x1B04, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1B10, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1B14, size 0x4, align 4
    float32 m_flZCoefficientA; // offset 0x1B18, size 0x4, align 4
    float32 m_flZCoefficientB; // offset 0x1B1C, size 0x4, align 4
    bool m_bInterrupted; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x3]; // offset 0x1B21
    float32 duration; // offset 0x1B24, size 0x4, align 4
    int32 height; // offset 0x1B28, size 0x4, align 4
    int32 damage; // offset 0x1B2C, size 0x4, align 4
    int32 damage_radius; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
};
