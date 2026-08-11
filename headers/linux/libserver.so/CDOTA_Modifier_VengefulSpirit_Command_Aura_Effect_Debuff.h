#pragma once

class CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_base_damage; // offset 0x1A78, size 0x4, align 4
    int32 max_base_damage; // offset 0x1A7C, size 0x4, align 4
    float32 effect_time; // offset 0x1A80, size 0x4, align 4
    GameTime_t m_flHeroDeathTime; // offset 0x1A84, size 0x4, align 255
};
