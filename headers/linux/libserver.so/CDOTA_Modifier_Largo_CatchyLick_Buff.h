#pragma once

class CDOTA_Modifier_Largo_CatchyLick_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 dispel_hp_regen; // offset 0x1AF8, size 0x4, align 4
    int32 num_purged; // offset 0x1AFC, size 0x4, align 4
    CHandle< CBaseEntity > m_hDispelTarget; // offset 0x1B00, size 0x4, align 4
    float32 m_fHealingDone; // offset 0x1B04, size 0x4, align 4
};
