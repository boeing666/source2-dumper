#pragma once

class CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 decay_to_zero_seconds; // offset 0x1A78, size 0x4, align 4
    float32 aura_radius; // offset 0x1A7C, size 0x4, align 4
    CHandle< CBaseEntity > m_hOwningItem; // offset 0x1A80, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A84, size 0x4, align 4
};
