#pragma once

class C_EntityDissolve : public C_BaseModelEntity /*0x0*/  // sizeof 0xC58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC18]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0xC18, size 0x4, align 255 | MNotSaved
    float32 m_flFadeInStart; // offset 0xC1C, size 0x4, align 4 | MNotSaved
    float32 m_flFadeInLength; // offset 0xC20, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelStart; // offset 0xC24, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelLength; // offset 0xC28, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutStart; // offset 0xC2C, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutLength; // offset 0xC30, size 0x4, align 4 | MNotSaved
    EntityDissolveType_t m_nDissolveType; // offset 0xC34, size 0x4, align 4 | MNotSaved
    uint32 m_nMagnitude; // offset 0xC38, size 0x4, align 4 | MNotSaved
    VectorWS m_vDissolverOrigin; // offset 0xC3C, size 0xC, align 4 | MNotSaved
    GameTime_t m_flNextSparkTime; // offset 0xC48, size 0x4, align 255 | MNotSaved
    bool m_bCoreExplode; // offset 0xC4C, size 0x1, align 1 | MNotSaved
    bool m_bLinkedToServerEnt; // offset 0xC4D, size 0x1, align 1 | MNotSaved
    char _pad_0C4E[0xA]; // offset 0xC4E
};
