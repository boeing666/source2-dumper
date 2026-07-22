#pragma once

class CEntityDissolve : public CBaseModelEntity /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    float32 m_flFadeInStart; // offset 0x778, size 0x4, align 4
    float32 m_flFadeInLength; // offset 0x77C, size 0x4, align 4
    float32 m_flFadeOutModelStart; // offset 0x780, size 0x4, align 4
    float32 m_flFadeOutModelLength; // offset 0x784, size 0x4, align 4
    float32 m_flFadeOutStart; // offset 0x788, size 0x4, align 4
    float32 m_flFadeOutLength; // offset 0x78C, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x790, size 0x4, align 255
    EntityDissolveType_t m_nDissolveType; // offset 0x794, size 0x4, align 4
    VectorWS m_vDissolverOrigin; // offset 0x798, size 0xC, align 4
    uint32 m_nMagnitude; // offset 0x7A4, size 0x4, align 4
};
