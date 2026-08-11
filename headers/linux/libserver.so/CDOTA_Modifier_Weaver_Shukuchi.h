#pragma once

class CDOTA_Modifier_Weaver_Shukuchi : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A84]; // offset 0x0
    float32 radius; // offset 0x1A84, size 0x4, align 4
    int32 damage; // offset 0x1A88, size 0x4, align 4
    int32 speed; // offset 0x1A8C, size 0x4, align 4
    int32 min_movespeed_override; // offset 0x1A90, size 0x4, align 4
    float32 geminate_attack_mark_duration; // offset 0x1A94, size 0x4, align 4
    float32 slow_duration; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
    CUtlVector< CHandle< CBaseEntity > > m_hEntitiesAffected; // offset 0x1AA0, size 0x18, align 8
};
