#pragma once

class CDOTA_Ability_Animation_TailSpin : public CDOTABaseAbility /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 m_flPlaybackRate; // offset 0x580, size 0x4, align 4
    float32 animation_time; // offset 0x584, size 0x4, align 4
};
