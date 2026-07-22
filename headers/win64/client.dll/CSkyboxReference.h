#pragma once

class CSkyboxReference : public C_BaseEntity /*0x0*/  // sizeof 0x5F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    WorldGroupId_t m_worldGroupId; // offset 0x5F0, size 0x4, align 4
    CHandle< C_SkyCamera > m_hSkyCamera; // offset 0x5F4, size 0x4, align 4 | MNotSaved
};
