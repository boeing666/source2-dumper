#pragma once

class CDOTA_Modifier_Grimstroke_InkCreature_Latched : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hAttachTarget; // offset 0x1AF8, size 0x4, align 4
    float32 m_fZOffset; // offset 0x1AFC, size 0x4, align 4
    bool m_bRemovedByEnemy; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x3]; // offset 0x1B01
    float32 latch_duration; // offset 0x1B04, size 0x4, align 4
    int32 pop_damage; // offset 0x1B08, size 0x4, align 4
    int32 latched_unit_offset; // offset 0x1B0C, size 0x4, align 4
    int32 latched_unit_offset_short; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
