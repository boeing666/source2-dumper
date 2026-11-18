#pragma once

class CDOTA_Modifier_Enigma_DemonicConversion : public CDOTA_Modifier_Kill /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B00]; // offset 0x0
    int32 m_iAttackCount; // offset 0x1B00, size 0x4, align 4
    int32 split_attack_count; // offset 0x1B04, size 0x4, align 4
    float32 life_extension; // offset 0x1B08, size 0x4, align 4
    int32 eidolon_attack_range; // offset 0x1B0C, size 0x4, align 4
    int32 eidolon_bonus_damage; // offset 0x1B10, size 0x4, align 4
    int32 eidolon_bonus_attack_speed; // offset 0x1B14, size 0x4, align 4
    int32 eidelon_max_health; // offset 0x1B18, size 0x4, align 4
    int32 eidolon_magic_resist; // offset 0x1B1C, size 0x4, align 4
    int32 eidelon_base_damage; // offset 0x1B20, size 0x4, align 4
    int32 eidolon_damage_spread; // offset 0x1B24, size 0x4, align 4
    int32 eidelon_base_movespeed; // offset 0x1B28, size 0x4, align 4
    int32 eidolon_xp_bounty; // offset 0x1B2C, size 0x4, align 4
    int32 eidolon_gold_bounty_min; // offset 0x1B30, size 0x4, align 4
    int32 eidolon_gold_bounty_max; // offset 0x1B34, size 0x4, align 4
    int32 current_health_pct; // offset 0x1B38, size 0x4, align 4
    bool m_bAllowSplit; // offset 0x1B3C, size 0x1, align 1
    char _pad_1B3D[0x3]; // offset 0x1B3D
    int32 m_nSpawnNum; // offset 0x1B40, size 0x4, align 4
    char _pad_1B44[0x4]; // offset 0x1B44
};
