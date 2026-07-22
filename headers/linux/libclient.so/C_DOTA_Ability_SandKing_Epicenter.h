#pragma once

class C_DOTA_Ability_SandKing_Epicenter : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    ParticleIndex_t m_nFXEpicenterIndex; // offset 0x824, size 0x4, align 255
    int32 m_iExplosionQuadrant; // offset 0x828, size 0x4, align 4
    int32 m_iExplosionDistance; // offset 0x82C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x830, size 0x4, align 255
    char _pad_0834[0x4]; // offset 0x834
};
