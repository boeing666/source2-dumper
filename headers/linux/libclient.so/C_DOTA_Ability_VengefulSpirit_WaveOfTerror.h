#pragma once

class C_DOTA_Ability_VengefulSpirit_WaveOfTerror : public C_DOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 wave_width; // offset 0x824, size 0x4, align 4
    float32 wave_speed; // offset 0x828, size 0x4, align 4
    int32 m_iProjectile; // offset 0x82C, size 0x4, align 4
    float32 vision_aoe; // offset 0x830, size 0x4, align 4
    float32 vision_duration; // offset 0x834, size 0x4, align 4
    int32 steal_pct; // offset 0x838, size 0x4, align 4
    float32 damage; // offset 0x83C, size 0x4, align 4
    int32 m_nNumHeroesHit; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
    CountdownTimer m_ViewerTimer; // offset 0x848, size 0x18, align 8
    char _pad_0860[0x18]; // offset 0x860
};
