#pragma once

class CDOTA_Modifier_Leshrac_Diabolic_Edict : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 num_explosions; // offset 0x1A78, size 0x4, align 4
    float32 radius; // offset 0x1A7C, size 0x4, align 4
    float32 m_fExplosions; // offset 0x1A80, size 0x4, align 4
    float32 tower_bonus; // offset 0x1A84, size 0x4, align 4
    int32 affects_buildings; // offset 0x1A88, size 0x4, align 4
    int32 damage; // offset 0x1A8C, size 0x4, align 4
    int32 targets; // offset 0x1A90, size 0x4, align 4
    int32 iDamageType; // offset 0x1A94, size 0x4, align 4
    bool m_bTalentActive; // offset 0x1A98, size 0x1, align 1
    char _pad_1A99[0x17]; // offset 0x1A99
};
