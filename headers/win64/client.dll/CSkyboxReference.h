#pragma once

class CSkyboxReference : public C_BaseEntity /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    WorldGroupId_t m_worldGroupId; // offset 0x600, size 0x4, align 4
    CHandle< C_SkyCamera > m_hSkyCamera; // offset 0x604, size 0x4, align 4 | MNotSaved
};
