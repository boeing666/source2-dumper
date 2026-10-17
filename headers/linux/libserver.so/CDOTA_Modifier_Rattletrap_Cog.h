#pragma once

class CDOTA_Modifier_Rattletrap_Cog : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bEnabled; // offset 0x1AA8, size 0x1, align 1
    bool m_bPassThrough; // offset 0x1AA9, size 0x1, align 1
    char _pad_1AAA[0x2]; // offset 0x1AAA
    int32 push_length; // offset 0x1AAC, size 0x4, align 4
    float32 push_duration; // offset 0x1AB0, size 0x4, align 4
    int32 radius; // offset 0x1AB4, size 0x4, align 4
    int32 cogs_pullin; // offset 0x1AB8, size 0x4, align 4
    int32 attacks_to_destroy; // offset 0x1ABC, size 0x4, align 4
    float32 m_flTriggerDistance; // offset 0x1AC0, size 0x4, align 4
    bool m_bCogsPullin; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0x3]; // offset 0x1AC5
    int32 m_iCogIndex; // offset 0x1AC8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1ACC, size 0x4, align 255
    VectorWS vCenter; // offset 0x1AD0, size 0xC, align 4
    char _pad_1ADC[0x4]; // offset 0x1ADC
};
