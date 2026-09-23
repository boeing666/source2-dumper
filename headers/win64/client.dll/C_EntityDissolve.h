#pragma once

class C_EntityDissolve : public C_BaseModelEntity /*0x0*/  // sizeof 0x10E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x10A0]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x10A0, size 0x4, align 255 | MNotSaved
    float32 m_flFadeInStart; // offset 0x10A4, size 0x4, align 4 | MNotSaved
    float32 m_flFadeInLength; // offset 0x10A8, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelStart; // offset 0x10AC, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelLength; // offset 0x10B0, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutStart; // offset 0x10B4, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutLength; // offset 0x10B8, size 0x4, align 4 | MNotSaved
    EntityDissolveType_t m_nDissolveType; // offset 0x10BC, size 0x4, align 4 | MNotSaved
    uint32 m_nMagnitude; // offset 0x10C0, size 0x4, align 4 | MNotSaved
    VectorWS m_vDissolverOrigin; // offset 0x10C4, size 0xC, align 4 | MNotSaved
    GameTime_t m_flNextSparkTime; // offset 0x10D0, size 0x4, align 255 | MNotSaved
    bool m_bCoreExplode; // offset 0x10D4, size 0x1, align 1 | MNotSaved
    bool m_bLinkedToServerEnt; // offset 0x10D5, size 0x1, align 1 | MNotSaved
    char _pad_10D6[0xA]; // offset 0x10D6
};
