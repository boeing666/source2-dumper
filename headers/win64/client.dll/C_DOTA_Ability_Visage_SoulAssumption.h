#pragma once

class C_DOTA_Ability_Visage_SoulAssumption : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 m_fDamage; // offset 0x6A8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6AC, size 0x4, align 255
    int32 m_iForcedStacks; // offset 0x6B0, size 0x4, align 4
    int32 m_nGold; // offset 0x6B4, size 0x4, align 4
};
