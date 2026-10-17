#pragma once

class C_EntityDissolve : public C_BaseModelEntity /*0x0*/  // sizeof 0xD48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD08]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0xD08, size 0x4, align 255 | MNotSaved
    float32 m_flFadeInStart; // offset 0xD0C, size 0x4, align 4 | MNotSaved
    float32 m_flFadeInLength; // offset 0xD10, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelStart; // offset 0xD14, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelLength; // offset 0xD18, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutStart; // offset 0xD1C, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutLength; // offset 0xD20, size 0x4, align 4 | MNotSaved
    EntityDissolveType_t m_nDissolveType; // offset 0xD24, size 0x4, align 4 | MNotSaved
    uint32 m_nMagnitude; // offset 0xD28, size 0x4, align 4 | MNotSaved
    VectorWS m_vDissolverOrigin; // offset 0xD2C, size 0xC, align 4 | MNotSaved
    GameTime_t m_flNextSparkTime; // offset 0xD38, size 0x4, align 255 | MNotSaved
    bool m_bCoreExplode; // offset 0xD3C, size 0x1, align 1 | MNotSaved
    bool m_bLinkedToServerEnt; // offset 0xD3D, size 0x1, align 1 | MNotSaved
    char _pad_0D3E[0xA]; // offset 0xD3E
};
