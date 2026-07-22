#pragma once

class C_DOTA_Ability_Aghsfort_Wildwing_Tornado_Blast : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 disable_duration; // offset 0x824, size 0x4, align 4
    float32 damage; // offset 0x828, size 0x4, align 4
    ParticleIndex_t m_nPreviewFX; // offset 0x82C, size 0x4, align 255
};
