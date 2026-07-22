#pragma once

class CDOTA_Modifier_AncientApparition_IceVortex : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 spell_resist_pct; // offset 0x1A58, size 0x4, align 4
    int32 drag_speed; // offset 0x1A5C, size 0x4, align 4
    float32 aura_origin_x; // offset 0x1A60, size 0x4, align 4
    float32 aura_origin_y; // offset 0x1A64, size 0x4, align 4
    int32 movement_speed_pct; // offset 0x1A68, size 0x4, align 4
    int32 shard_attack_speed_reduction; // offset 0x1A6C, size 0x4, align 4
    int32 damage_per_second; // offset 0x1A70, size 0x4, align 4
    VectorWS m_vCenter; // offset 0x1A74, size 0xC, align 4
};
