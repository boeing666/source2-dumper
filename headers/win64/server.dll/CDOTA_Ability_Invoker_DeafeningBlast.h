#pragma once

class CDOTA_Ability_Invoker_DeafeningBlast : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x5C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    float32 end_vision_duration; // offset 0x590, size 0x4, align 4
    float32 damage; // offset 0x594, size 0x4, align 4
    float32 knockback_duration; // offset 0x598, size 0x4, align 4
    float32 disarm_duration; // offset 0x59C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x5A0, size 0x18, align 8
    bool m_bGrantedGem; // offset 0x5B8, size 0x1, align 1
    char _pad_05B9[0x7]; // offset 0x5B9
};
