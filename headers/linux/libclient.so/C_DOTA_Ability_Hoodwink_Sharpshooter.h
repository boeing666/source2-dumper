#pragma once

class C_DOTA_Ability_Hoodwink_Sharpshooter : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    float32 max_charge_time; // offset 0x828, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x82C, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x838, size 0x4, align 255
    char _pad_083C[0x14]; // offset 0x83C
};
