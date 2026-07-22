#pragma once

class CDOTA_Ability_Invoker_DeafeningBlast : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x868]; // offset 0x0
    float32 end_vision_duration; // offset 0x868, size 0x4, align 4
    float32 damage; // offset 0x86C, size 0x4, align 4
    float32 knockback_duration; // offset 0x870, size 0x4, align 4
    float32 disarm_duration; // offset 0x874, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x878, size 0x18, align 8
    bool m_bGrantedGem; // offset 0x890, size 0x1, align 1
    char _pad_0891[0x7]; // offset 0x891
};
