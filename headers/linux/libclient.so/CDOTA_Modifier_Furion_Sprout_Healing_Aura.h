#pragma once

class CDOTA_Modifier_Furion_Sprout_Healing_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_hFXIndexes; // offset 0x1A58, size 0x18, align 8
};
