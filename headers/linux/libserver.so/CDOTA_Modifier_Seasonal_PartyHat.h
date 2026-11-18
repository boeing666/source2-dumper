#pragma once

class CDOTA_Modifier_Seasonal_PartyHat : public CDOTA_Buff /*0x0*/  // sizeof 0x1B70, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 controlled_unit_search_radius; // offset 0x1AF8, size 0x4, align 4
    bool child_modifier; // offset 0x1AFC, size 0x1, align 1
    char _pad_1AFD[0x3]; // offset 0x1AFD
    CUtlVector< ParticleIndex_t > m_vecParticles; // offset 0x1B00, size 0x18, align 8
    CUtlVector< int32 > m_vecHatColors; // offset 0x1B18, size 0x18, align 8
    uint32 m_unVersion; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
    CUtlVector< CHandle< CBaseEntity > > m_vecNearbyUnits; // offset 0x1B38, size 0x18, align 8
    CUtlVector< GameTime_t > m_vecUnitIdleStartTimes; // offset 0x1B50, size 0x18, align 8
    bool m_bPlayEndcapOnNext; // offset 0x1B68, size 0x1, align 1
    char _pad_1B69[0x7]; // offset 0x1B69
};
