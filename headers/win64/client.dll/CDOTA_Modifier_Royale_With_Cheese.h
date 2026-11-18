#pragma once

class CDOTA_Modifier_Royale_With_Cheese : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 shield; // offset 0x1AF8, size 0x4, align 4
    float32 regen; // offset 0x1AFC, size 0x4, align 4
    float32 idle; // offset 0x1B00, size 0x4, align 4
    int32 m_nDamageAbsorbed; // offset 0x1B04, size 0x4, align 4
    GameTime_t m_timeLastTick; // offset 0x1B08, size 0x4, align 255
    GameTime_t m_timeLastDamage; // offset 0x1B0C, size 0x4, align 255
    ParticleIndex_t nFXIndex; // offset 0x1B10, size 0x4, align 255
    char _pad_1B14[0x4]; // offset 0x1B14
};
