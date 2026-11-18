#pragma once

class CDOTA_Modifier_Pugna_Oblivion_Savant : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 tower_scale; // offset 0x1AF8, size 0x4, align 4
    char _pad_1AFC[0x4]; // offset 0x1AFC
    CUtlVector< CHandle< CDOTABaseAbility > > m_vecRecastAbilities; // offset 0x1B00, size 0x18, align 8
    CUtlVector< GameTime_t > m_vecRecastCooldownEnds; // offset 0x1B18, size 0x18, align 8
};
