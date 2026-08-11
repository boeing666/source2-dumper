#pragma once

class CDOTA_Ability_AghsFort_Creature_Impale : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    ParticleIndex_t m_nPreviewFX; // offset 0x85C, size 0x4, align 255
    int32 width; // offset 0x860, size 0x4, align 4
    float32 duration; // offset 0x864, size 0x4, align 4
    int32 length; // offset 0x868, size 0x4, align 4
    int32 speed; // offset 0x86C, size 0x4, align 4
};
