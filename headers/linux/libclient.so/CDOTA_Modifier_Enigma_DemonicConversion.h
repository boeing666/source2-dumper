#pragma once

class CDOTA_Modifier_Enigma_DemonicConversion : public CDOTA_Modifier_Kill /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A5C]; // offset 0x0
    int32 m_iAttackCount; // offset 0x1A5C, size 0x4, align 4
    int32 split_attack_count; // offset 0x1A60, size 0x4, align 4
    float32 life_extension; // offset 0x1A64, size 0x4, align 4
    int32 eidolon_attack_range; // offset 0x1A68, size 0x4, align 4
    int32 eidolon_bonus_damage; // offset 0x1A6C, size 0x4, align 4
    int32 eidolon_bonus_attack_speed; // offset 0x1A70, size 0x4, align 4
    int32 eidelon_max_health; // offset 0x1A74, size 0x4, align 4
    int32 eidolon_magic_resist; // offset 0x1A78, size 0x4, align 4
    int32 eidelon_base_damage; // offset 0x1A7C, size 0x4, align 4
    int32 eidolon_damage_spread; // offset 0x1A80, size 0x4, align 4
    int32 eidelon_base_movespeed; // offset 0x1A84, size 0x4, align 4
    int32 eidolon_xp_bounty; // offset 0x1A88, size 0x4, align 4
    int32 eidolon_gold_bounty_min; // offset 0x1A8C, size 0x4, align 4
    int32 eidolon_gold_bounty_max; // offset 0x1A90, size 0x4, align 4
    int32 current_health_pct; // offset 0x1A94, size 0x4, align 4
    bool m_bAllowSplit; // offset 0x1A98, size 0x1, align 1
    char _pad_1A99[0x3]; // offset 0x1A99
    int32 m_nSpawnNum; // offset 0x1A9C, size 0x4, align 4
};
