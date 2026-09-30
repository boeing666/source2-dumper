#pragma once

class CCitadelTrooperMinimap : public C_BaseEntity /*0x0*/  // sizeof 0x660, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    float32 m_flUpdateInterval; // offset 0x5F0, size 0x4, align 4
    char _pad_05F4[0x4]; // offset 0x5F4
    C_UtlVectorEmbeddedNetworkVar< STrooperFOWEntity > m_vecFOWEntities; // offset 0x5F8, size 0x68, align 8 | MNotSaved
};
