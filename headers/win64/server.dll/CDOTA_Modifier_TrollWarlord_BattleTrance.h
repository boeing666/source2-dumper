#pragma once

class CDOTA_Modifier_TrollWarlord_BattleTrance : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 movement_speed; // offset 0x1AF8, size 0x4, align 4
    int32 status_resistance; // offset 0x1AFC, size 0x4, align 4
    int32 attack_speed; // offset 0x1B00, size 0x4, align 4
    int32 lifesteal; // offset 0x1B04, size 0x4, align 4
    int32 ignore_attack_speed_limit; // offset 0x1B08, size 0x4, align 4
    bool priortize_creep_heroes; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x3]; // offset 0x1B0D
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
