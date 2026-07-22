#pragma once

class CDOTA_Ability_Animation_Attack : public CDOTABaseAbility /*0x0*/  // sizeof 0x868, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 m_flPlaybackRate; // offset 0x85C, size 0x4, align 4
    float32 animation_time; // offset 0x860, size 0x4, align 4
    char _pad_0864[0x4]; // offset 0x864
};
