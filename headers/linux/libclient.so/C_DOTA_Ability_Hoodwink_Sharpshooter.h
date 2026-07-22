#pragma once

class C_DOTA_Ability_Hoodwink_Sharpshooter : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 max_charge_time; // offset 0x824, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x828, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x834, size 0x4, align 255
    char _pad_0838[0x18]; // offset 0x838
};
