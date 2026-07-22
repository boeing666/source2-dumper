#pragma once

class CBaseTrackedStatsEntity : public C_BaseEntity /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< TrackedStatNetworkData_t > m_vecTrackedStats; // offset 0x770, size 0x68, align 8
    char _pad_07D8[0x8]; // offset 0x7D8
};
