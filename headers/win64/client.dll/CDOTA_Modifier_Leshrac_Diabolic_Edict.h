#pragma once

class CDOTA_Modifier_Leshrac_Diabolic_Edict : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 num_explosions; // offset 0x1A58, size 0x4, align 4
    float32 radius; // offset 0x1A5C, size 0x4, align 4
    float32 m_fExplosions; // offset 0x1A60, size 0x4, align 4
    float32 tower_bonus; // offset 0x1A64, size 0x4, align 4
    int32 affects_buildings; // offset 0x1A68, size 0x4, align 4
    int32 damage; // offset 0x1A6C, size 0x4, align 4
    int32 targets; // offset 0x1A70, size 0x4, align 4
    int32 iDamageType; // offset 0x1A74, size 0x4, align 4
    bool m_bTalentActive; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x17]; // offset 0x1A79
};
