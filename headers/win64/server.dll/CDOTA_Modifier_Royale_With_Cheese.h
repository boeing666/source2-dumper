#pragma once

class CDOTA_Modifier_Royale_With_Cheese : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 shield; // offset 0x1AA8, size 0x4, align 4
    float32 regen; // offset 0x1AAC, size 0x4, align 4
    float32 idle; // offset 0x1AB0, size 0x4, align 4
    int32 m_nDamageAbsorbed; // offset 0x1AB4, size 0x4, align 4
    GameTime_t m_timeLastTick; // offset 0x1AB8, size 0x4, align 255
    GameTime_t m_timeLastDamage; // offset 0x1ABC, size 0x4, align 255
    ParticleIndex_t nFXIndex; // offset 0x1AC0, size 0x4, align 255
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
