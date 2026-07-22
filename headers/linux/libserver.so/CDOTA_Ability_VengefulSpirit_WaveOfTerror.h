#pragma once

class CDOTA_Ability_VengefulSpirit_WaveOfTerror : public CDOTABaseAbility /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 wave_width; // offset 0x85C, size 0x4, align 4
    float32 wave_speed; // offset 0x860, size 0x4, align 4
    int32 m_iProjectile; // offset 0x864, size 0x4, align 4
    float32 vision_aoe; // offset 0x868, size 0x4, align 4
    float32 vision_duration; // offset 0x86C, size 0x4, align 4
    int32 steal_pct; // offset 0x870, size 0x4, align 4
    float32 damage; // offset 0x874, size 0x4, align 4
    int32 m_nNumHeroesHit; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
    CountdownTimer m_ViewerTimer; // offset 0x880, size 0x18, align 8
    char _pad_0898[0x18]; // offset 0x898
};
