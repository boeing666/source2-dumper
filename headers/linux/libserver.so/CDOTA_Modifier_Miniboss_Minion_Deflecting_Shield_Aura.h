#pragma once

class CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 decay_to_zero_seconds; // offset 0x1AF8, size 0x4, align 4
    float32 aura_radius; // offset 0x1AFC, size 0x4, align 4
    CHandle< CBaseEntity > m_hOwningItem; // offset 0x1B00, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B04, size 0x4, align 4
};
