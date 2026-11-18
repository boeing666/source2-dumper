#pragma once

class CDOTA_Modifier_Item_Conjurers_Catalyst : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 damage_aoe; // offset 0x1AF8, size 0x4, align 4
    float32 damage; // offset 0x1AFC, size 0x4, align 4
    float32 damage_creep; // offset 0x1B00, size 0x4, align 4
    float32 cooldown; // offset 0x1B04, size 0x4, align 4
    float32 duration; // offset 0x1B08, size 0x4, align 4
    int32 damage_threshold; // offset 0x1B0C, size 0x4, align 4
    bool has_hands; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x3]; // offset 0x1B11
    ParticleIndex_t m_nFXIndex; // offset 0x1B14, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1B18, size 0x4, align 255
    char _pad_1B1C[0x4]; // offset 0x1B1C
    CountdownTimer m_OverheatTimer; // offset 0x1B20, size 0x18, align 8
};
