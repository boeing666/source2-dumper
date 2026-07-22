#pragma once

class C_EntityDissolve : public C_BaseModelEntity /*0x0*/  // sizeof 0xAD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0xA90, size 0x4, align 255 | MNotSaved
    float32 m_flFadeInStart; // offset 0xA94, size 0x4, align 4 | MNotSaved
    float32 m_flFadeInLength; // offset 0xA98, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelStart; // offset 0xA9C, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelLength; // offset 0xAA0, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutStart; // offset 0xAA4, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutLength; // offset 0xAA8, size 0x4, align 4 | MNotSaved
    EntityDissolveType_t m_nDissolveType; // offset 0xAAC, size 0x4, align 4 | MNotSaved
    uint32 m_nMagnitude; // offset 0xAB0, size 0x4, align 4 | MNotSaved
    VectorWS m_vDissolverOrigin; // offset 0xAB4, size 0xC, align 4 | MNotSaved
    GameTime_t m_flNextSparkTime; // offset 0xAC0, size 0x4, align 255 | MNotSaved
    bool m_bCoreExplode; // offset 0xAC4, size 0x1, align 1 | MNotSaved
    bool m_bLinkedToServerEnt; // offset 0xAC5, size 0x1, align 1 | MNotSaved
    char _pad_0AC6[0xA]; // offset 0xAC6
};
