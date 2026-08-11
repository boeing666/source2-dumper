#pragma once

class CBaseTrackedStatsEntity : public CBaseEntity /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< TrackedStatNetworkData_t > m_vecTrackedStats; // offset 0x778, size 0x68, align 8
};
