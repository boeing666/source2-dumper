#pragma once

class CBaseTrackedStatsEntity : public CBaseEntity /*0x0*/  // sizeof 0x508, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< TrackedStatNetworkData_t > m_vecTrackedStats; // offset 0x4A0, size 0x68, align 8 | MNetworkEnable MNetworkChangeCallback
};
