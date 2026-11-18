#pragma once

class CDOTA_Modifier_AncientApparition_IceVortexThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    int32 movement_speed_pct; // offset 0x1AFC, size 0x4, align 4
    int32 spell_resist_pct; // offset 0x1B00, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B04, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hChilledEntities; // offset 0x1B08, size 0x18, align 8
};
