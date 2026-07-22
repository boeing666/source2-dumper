#pragma once

class CDOTA_Modifier_Weaver_Shukuchi : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A68]; // offset 0x0
    float32 radius; // offset 0x1A68, size 0x4, align 4
    int32 damage; // offset 0x1A6C, size 0x4, align 4
    int32 speed; // offset 0x1A70, size 0x4, align 4
    int32 min_movespeed_override; // offset 0x1A74, size 0x4, align 4
    float32 geminate_attack_mark_duration; // offset 0x1A78, size 0x4, align 4
    float32 slow_duration; // offset 0x1A7C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hEntitiesAffected; // offset 0x1A80, size 0x18, align 8
};
