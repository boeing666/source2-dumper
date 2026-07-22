#pragma once

class CDOTA_Ability_VengefulSpirit_WaveOfTerror : public CDOTABaseAbility /*0x0*/  // sizeof 0x5D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 wave_width; // offset 0x580, size 0x4, align 4
    float32 wave_speed; // offset 0x584, size 0x4, align 4
    int32 m_iProjectile; // offset 0x588, size 0x4, align 4
    float32 vision_aoe; // offset 0x58C, size 0x4, align 4
    float32 vision_duration; // offset 0x590, size 0x4, align 4
    int32 steal_pct; // offset 0x594, size 0x4, align 4
    float32 damage; // offset 0x598, size 0x4, align 4
    int32 m_nNumHeroesHit; // offset 0x59C, size 0x4, align 4
    CountdownTimer m_ViewerTimer; // offset 0x5A0, size 0x18, align 8
    char _pad_05B8[0x18]; // offset 0x5B8
};
