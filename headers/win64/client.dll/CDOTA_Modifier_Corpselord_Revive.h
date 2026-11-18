#pragma once

class CDOTA_Modifier_Corpselord_Revive : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 radius; // offset 0x1AF8, size 0x4, align 4
    int32 ticks_to_revive; // offset 0x1AFC, size 0x4, align 4
    float32 tick_interval; // offset 0x1B00, size 0x4, align 4
    CHandle< C_DOTA_BaseNPC > m_pReviveTarget; // offset 0x1B04, size 0x4, align 4
    int32 m_nCurrentTicks; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
