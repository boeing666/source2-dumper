#pragma once

class CDOTA_Modifier_Medusa_StoneGaze : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    float32 vision_cone; // offset 0x1AFC, size 0x4, align 4
    float32 duration; // offset 0x1B00, size 0x4, align 4
    int32 speed_boost; // offset 0x1B04, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x1B08, size 0x18, align 8
    char _pad_1B20[0x18]; // offset 0x1B20
};
