#pragma once

class CDOTA_Modifier_Pugna_DrainSouls : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 health_drain_death_boost; // offset 0x1AF8, size 0x4, align 4
    char _pad_1AFC[0x4]; // offset 0x1AFC
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_vecDrainedHeroes; // offset 0x1B00, size 0x18, align 8
};
