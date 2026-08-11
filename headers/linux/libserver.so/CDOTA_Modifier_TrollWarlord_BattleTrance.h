#pragma once

class CDOTA_Modifier_TrollWarlord_BattleTrance : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 movement_speed; // offset 0x1A78, size 0x4, align 4
    int32 slow_resistance; // offset 0x1A7C, size 0x4, align 4
    int32 attack_speed; // offset 0x1A80, size 0x4, align 4
    int32 lifesteal; // offset 0x1A84, size 0x4, align 4
    int32 ignore_attack_speed_limit; // offset 0x1A88, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A8C, size 0x4, align 4
};
