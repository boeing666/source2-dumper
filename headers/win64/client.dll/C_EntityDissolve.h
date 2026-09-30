#pragma once

class C_EntityDissolve : public C_BaseModelEntity /*0x0*/  // sizeof 0xBF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB8]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0xBB8, size 0x4, align 255 | MNotSaved
    float32 m_flFadeInStart; // offset 0xBBC, size 0x4, align 4 | MNotSaved
    float32 m_flFadeInLength; // offset 0xBC0, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelStart; // offset 0xBC4, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelLength; // offset 0xBC8, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutStart; // offset 0xBCC, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutLength; // offset 0xBD0, size 0x4, align 4 | MNotSaved
    EntityDissolveType_t m_nDissolveType; // offset 0xBD4, size 0x4, align 4 | MNotSaved
    uint32 m_nMagnitude; // offset 0xBD8, size 0x4, align 4 | MNotSaved
    VectorWS m_vDissolverOrigin; // offset 0xBDC, size 0xC, align 4 | MNotSaved
    GameTime_t m_flNextSparkTime; // offset 0xBE8, size 0x4, align 255 | MNotSaved
    bool m_bCoreExplode; // offset 0xBEC, size 0x1, align 1 | MNotSaved
    bool m_bLinkedToServerEnt; // offset 0xBED, size 0x1, align 1 | MNotSaved
    char _pad_0BEE[0xA]; // offset 0xBEE
};
