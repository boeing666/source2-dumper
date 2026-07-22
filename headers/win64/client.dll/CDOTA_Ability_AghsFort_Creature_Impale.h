#pragma once

class CDOTA_Ability_AghsFort_Creature_Impale : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    ParticleIndex_t m_nPreviewFX; // offset 0x6A8, size 0x4, align 255
    int32 width; // offset 0x6AC, size 0x4, align 4
    float32 duration; // offset 0x6B0, size 0x4, align 4
    int32 length; // offset 0x6B4, size 0x4, align 4
    int32 speed; // offset 0x6B8, size 0x4, align 4
    char _pad_06BC[0x4]; // offset 0x6BC
};
