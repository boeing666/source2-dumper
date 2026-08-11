#pragma once

class CDOTA_Modifier_Medusa_StoneGaze : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    float32 vision_cone; // offset 0x1A7C, size 0x4, align 4
    float32 duration; // offset 0x1A80, size 0x4, align 4
    int32 speed_boost; // offset 0x1A84, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x1A88, size 0x18, align 8
    char _pad_1AA0[0x18]; // offset 0x1AA0
};
