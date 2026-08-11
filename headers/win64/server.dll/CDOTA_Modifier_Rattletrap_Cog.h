#pragma once

class CDOTA_Modifier_Rattletrap_Cog : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bEnabled; // offset 0x1A78, size 0x1, align 1
    bool m_bPassThrough; // offset 0x1A79, size 0x1, align 1
    char _pad_1A7A[0x2]; // offset 0x1A7A
    int32 push_length; // offset 0x1A7C, size 0x4, align 4
    float32 push_duration; // offset 0x1A80, size 0x4, align 4
    int32 radius; // offset 0x1A84, size 0x4, align 4
    int32 cogs_pullin; // offset 0x1A88, size 0x4, align 4
    int32 attacks_to_destroy; // offset 0x1A8C, size 0x4, align 4
    float32 m_flTriggerDistance; // offset 0x1A90, size 0x4, align 4
    bool m_bCogsPullin; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
    int32 m_iCogIndex; // offset 0x1A98, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A9C, size 0x4, align 255
    VectorWS vCenter; // offset 0x1AA0, size 0xC, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
