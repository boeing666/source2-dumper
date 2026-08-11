#pragma once

class CDOTA_Modifier_Dazzle_Bad_Juju_Manacost : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 mana_cost_increase_duration; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
    CUtlVector< GameTime_t > m_vecExpirationTimes; // offset 0x1A80, size 0x18, align 8
};
