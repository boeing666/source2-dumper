#pragma once

class CBaseTrackedStatsEntity : public C_BaseEntity /*0x0*/  // sizeof 0x660, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< TrackedStatNetworkData_t > m_vecTrackedStats; // offset 0x5F0, size 0x68, align 8 | MNetworkEnable MNetworkChangeCallback
    char _pad_0658[0x8]; // offset 0x658
};
