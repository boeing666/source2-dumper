#pragma once

class CDOTA_Modifier_Rattletrap_Cog : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bEnabled; // offset 0x1AF8, size 0x1, align 1
    bool m_bPassThrough; // offset 0x1AF9, size 0x1, align 1
    char _pad_1AFA[0x2]; // offset 0x1AFA
    int32 push_length; // offset 0x1AFC, size 0x4, align 4
    float32 push_duration; // offset 0x1B00, size 0x4, align 4
    int32 radius; // offset 0x1B04, size 0x4, align 4
    int32 cogs_pullin; // offset 0x1B08, size 0x4, align 4
    int32 attacks_to_destroy; // offset 0x1B0C, size 0x4, align 4
    float32 m_flTriggerDistance; // offset 0x1B10, size 0x4, align 4
    bool m_bCogsPullin; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
    int32 m_iCogIndex; // offset 0x1B18, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B1C, size 0x4, align 255
    VectorWS vCenter; // offset 0x1B20, size 0xC, align 4
    char _pad_1B2C[0x4]; // offset 0x1B2C
};
