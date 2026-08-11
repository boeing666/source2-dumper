#pragma once

class CDOTA_Ability_AghsFort_Creature_Impale : public CDOTABaseAbility /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    ParticleIndex_t m_nPreviewFX; // offset 0x580, size 0x4, align 255
    int32 width; // offset 0x584, size 0x4, align 4
    float32 duration; // offset 0x588, size 0x4, align 4
    int32 length; // offset 0x58C, size 0x4, align 4
    int32 speed; // offset 0x590, size 0x4, align 4
    char _pad_0594[0x4]; // offset 0x594
};
