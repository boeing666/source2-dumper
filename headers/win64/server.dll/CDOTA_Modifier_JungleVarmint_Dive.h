#pragma once

class CDOTA_Modifier_JungleVarmint_Dive : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_flTotalTime; // offset 0x1AA8, size 0x4, align 4
    float32 m_flInitialVelocity; // offset 0x1AAC, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1AB0, size 0xC, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1ABC, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1AC8, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1ACC, size 0x4, align 4
    bool m_bInterrupted; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x3]; // offset 0x1AD1
    int32 distance; // offset 0x1AD4, size 0x4, align 4
    float32 speed; // offset 0x1AD8, size 0x4, align 4
    float32 acceleration; // offset 0x1ADC, size 0x4, align 4
    int32 radius; // offset 0x1AE0, size 0x4, align 4
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
