#pragma once

class CDOTA_Modifier_FacelessVoid_TimeDilation_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1A78, size 0x4, align 255
    int32 m_nAffectedAbilities; // offset 0x1A7C, size 0x4, align 4
    GameTime_t m_flLastDamageTime; // offset 0x1A80, size 0x4, align 255
    int32 slow; // offset 0x1A84, size 0x4, align 4
    int32 cooldown_percentage; // offset 0x1A88, size 0x4, align 4
    int32 damage_per_stack; // offset 0x1A8C, size 0x4, align 4
    int32 base_damage; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
