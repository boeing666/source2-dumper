#pragma once

class CDOTA_Modifier_Leshrac_Diabolic_Edict : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 num_explosions; // offset 0x1AF8, size 0x4, align 4
    float32 radius; // offset 0x1AFC, size 0x4, align 4
    float32 m_fExplosions; // offset 0x1B00, size 0x4, align 4
    float32 tower_bonus; // offset 0x1B04, size 0x4, align 4
    int32 affects_buildings; // offset 0x1B08, size 0x4, align 4
    int32 damage; // offset 0x1B0C, size 0x4, align 4
    int32 targets; // offset 0x1B10, size 0x4, align 4
    int32 iDamageType; // offset 0x1B14, size 0x4, align 4
    bool m_bTalentActive; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x17]; // offset 0x1B19
};
