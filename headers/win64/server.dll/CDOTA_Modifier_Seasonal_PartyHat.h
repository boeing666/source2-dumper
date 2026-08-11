#pragma once

class CDOTA_Modifier_Seasonal_PartyHat : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 controlled_unit_search_radius; // offset 0x1A78, size 0x4, align 4
    bool child_modifier; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
    CUtlVector< ParticleIndex_t > m_vecParticles; // offset 0x1A80, size 0x18, align 8
    CUtlVector< int32 > m_vecHatColors; // offset 0x1A98, size 0x18, align 8
    uint32 m_unVersion; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
    CUtlVector< CHandle< CBaseEntity > > m_vecNearbyUnits; // offset 0x1AB8, size 0x18, align 8
    CUtlVector< GameTime_t > m_vecUnitIdleStartTimes; // offset 0x1AD0, size 0x18, align 8
    bool m_bPlayEndcapOnNext; // offset 0x1AE8, size 0x1, align 1
    char _pad_1AE9[0x7]; // offset 0x1AE9
};
