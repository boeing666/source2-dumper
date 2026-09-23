#pragma once

class CEntityDissolve : public CBaseModelEntity /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    float32 m_flFadeInStart; // offset 0x850, size 0x4, align 4
    float32 m_flFadeInLength; // offset 0x854, size 0x4, align 4
    float32 m_flFadeOutModelStart; // offset 0x858, size 0x4, align 4
    float32 m_flFadeOutModelLength; // offset 0x85C, size 0x4, align 4
    float32 m_flFadeOutStart; // offset 0x860, size 0x4, align 4
    float32 m_flFadeOutLength; // offset 0x864, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x868, size 0x4, align 255
    EntityDissolveType_t m_nDissolveType; // offset 0x86C, size 0x4, align 4
    VectorWS m_vDissolverOrigin; // offset 0x870, size 0xC, align 4
    uint32 m_nMagnitude; // offset 0x87C, size 0x4, align 4
};
