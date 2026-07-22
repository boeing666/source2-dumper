#pragma once

class CDOTA_Ability_Enigma_Malefice : public CDOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 tick_rate; // offset 0x85C, size 0x4, align 4
    int32 stun_instances; // offset 0x860, size 0x4, align 4
    float32 m_flDuration; // offset 0x864, size 0x4, align 4
};
