#pragma once

class CCitadelTrooperMinimap : public CBaseEntity /*0x0*/  // sizeof 0x510, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    GameTime_t m_timeLastUpdate; // offset 0x4A0, size 0x4, align 255 | MNetworkEnable MNetworkPriority MNotSaved
    char _pad_04A4[0x4]; // offset 0x4A4
    CUtlVectorEmbeddedNetworkVar< STrooperFOWEntity > m_vecFOWEntities; // offset 0x4A8, size 0x68, align 8 | MNetworkEnable MNetworkPriority MNotSaved
};
