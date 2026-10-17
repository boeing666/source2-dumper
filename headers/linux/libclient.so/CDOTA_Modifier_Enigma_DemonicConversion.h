#pragma once

class CDOTA_Modifier_Enigma_DemonicConversion : public CDOTA_Modifier_Kill /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AAC]; // offset 0x0
    int32 m_iAttackCount; // offset 0x1AAC, size 0x4, align 4
    int32 split_attack_count; // offset 0x1AB0, size 0x4, align 4
    float32 life_extension; // offset 0x1AB4, size 0x4, align 4
    int32 eidolon_attack_range; // offset 0x1AB8, size 0x4, align 4
    int32 eidolon_bonus_damage; // offset 0x1ABC, size 0x4, align 4
    int32 eidolon_bonus_attack_speed; // offset 0x1AC0, size 0x4, align 4
    int32 eidelon_max_health; // offset 0x1AC4, size 0x4, align 4
    int32 eidolon_magic_resist; // offset 0x1AC8, size 0x4, align 4
    int32 eidelon_base_damage; // offset 0x1ACC, size 0x4, align 4
    int32 eidolon_damage_spread; // offset 0x1AD0, size 0x4, align 4
    int32 eidelon_base_movespeed; // offset 0x1AD4, size 0x4, align 4
    int32 eidolon_xp_bounty; // offset 0x1AD8, size 0x4, align 4
    int32 eidolon_gold_bounty_min; // offset 0x1ADC, size 0x4, align 4
    int32 eidolon_gold_bounty_max; // offset 0x1AE0, size 0x4, align 4
    int32 current_health_pct; // offset 0x1AE4, size 0x4, align 4
    bool m_bAllowSplit; // offset 0x1AE8, size 0x1, align 1
    char _pad_1AE9[0x3]; // offset 0x1AE9
    int32 m_nSpawnNum; // offset 0x1AEC, size 0x4, align 4
};
