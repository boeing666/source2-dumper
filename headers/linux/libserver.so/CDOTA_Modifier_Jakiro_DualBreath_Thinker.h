#pragma once

class CDOTA_Modifier_Jakiro_DualBreath_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 start_radius; // offset 0x1AA8, size 0x4, align 4
    float32 end_radius; // offset 0x1AAC, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1AB0, size 0x4, align 255
    float32 m_fTotalTime; // offset 0x1AB4, size 0x4, align 4
    VectorWS m_vCastPosition; // offset 0x1AB8, size 0xC, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
