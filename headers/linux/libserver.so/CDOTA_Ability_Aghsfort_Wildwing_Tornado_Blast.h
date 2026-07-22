#pragma once

class CDOTA_Ability_Aghsfort_Wildwing_Tornado_Blast : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 disable_duration; // offset 0x85C, size 0x4, align 4
    float32 damage; // offset 0x860, size 0x4, align 4
    ParticleIndex_t m_nPreviewFX; // offset 0x864, size 0x4, align 255
    char _pad_0868[0x18]; // offset 0x868
};
