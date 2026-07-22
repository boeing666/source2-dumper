#pragma once

class CDOTA_Modifier_Rattletrap_Cog : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bEnabled; // offset 0x1A58, size 0x1, align 1
    bool m_bPassThrough; // offset 0x1A59, size 0x1, align 1
    char _pad_1A5A[0x2]; // offset 0x1A5A
    int32 push_length; // offset 0x1A5C, size 0x4, align 4
    float32 push_duration; // offset 0x1A60, size 0x4, align 4
    int32 radius; // offset 0x1A64, size 0x4, align 4
    int32 cogs_pullin; // offset 0x1A68, size 0x4, align 4
    int32 attacks_to_destroy; // offset 0x1A6C, size 0x4, align 4
    float32 m_flTriggerDistance; // offset 0x1A70, size 0x4, align 4
    bool m_bCogsPullin; // offset 0x1A74, size 0x1, align 1
    char _pad_1A75[0x3]; // offset 0x1A75
    int32 m_iCogIndex; // offset 0x1A78, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A7C, size 0x4, align 255
    VectorWS vCenter; // offset 0x1A80, size 0xC, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
