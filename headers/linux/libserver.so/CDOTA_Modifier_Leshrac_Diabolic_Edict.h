#pragma once

class CDOTA_Modifier_Leshrac_Diabolic_Edict : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 num_explosions; // offset 0x1AA8, size 0x4, align 4
    float32 radius; // offset 0x1AAC, size 0x4, align 4
    float32 m_fExplosions; // offset 0x1AB0, size 0x4, align 4
    float32 tower_bonus; // offset 0x1AB4, size 0x4, align 4
    int32 affects_buildings; // offset 0x1AB8, size 0x4, align 4
    int32 damage; // offset 0x1ABC, size 0x4, align 4
    int32 targets; // offset 0x1AC0, size 0x4, align 4
    int32 iDamageType; // offset 0x1AC4, size 0x4, align 4
    bool m_bTalentActive; // offset 0x1AC8, size 0x1, align 1
    char _pad_1AC9[0x17]; // offset 0x1AC9
};
