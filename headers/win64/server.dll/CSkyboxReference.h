#pragma once

class CSkyboxReference : public CBaseEntity /*0x0*/  // sizeof 0x4A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    WorldGroupId_t m_worldGroupId; // offset 0x498, size 0x4, align 4
    CHandle< CSkyCamera > m_hSkyCamera; // offset 0x49C, size 0x4, align 4 | MNotSaved
};
