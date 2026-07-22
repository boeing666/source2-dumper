#pragma once

class C_DOTA_Ability_Enigma_Malefice : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 tick_rate; // offset 0x824, size 0x4, align 4
    int32 stun_instances; // offset 0x828, size 0x4, align 4
    float32 m_flDuration; // offset 0x82C, size 0x4, align 4
};
