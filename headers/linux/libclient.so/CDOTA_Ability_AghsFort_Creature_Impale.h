#pragma once

class CDOTA_Ability_AghsFort_Creature_Impale : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    ParticleIndex_t m_nPreviewFX; // offset 0x824, size 0x4, align 255
    int32 width; // offset 0x828, size 0x4, align 4
    float32 duration; // offset 0x82C, size 0x4, align 4
    int32 length; // offset 0x830, size 0x4, align 4
    int32 speed; // offset 0x834, size 0x4, align 4
};
