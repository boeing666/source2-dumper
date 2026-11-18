#pragma once

class CEntityDissolve : public CBaseModelEntity /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    float32 m_flFadeInStart; // offset 0x8B8, size 0x4, align 4
    float32 m_flFadeInLength; // offset 0x8BC, size 0x4, align 4
    float32 m_flFadeOutModelStart; // offset 0x8C0, size 0x4, align 4
    float32 m_flFadeOutModelLength; // offset 0x8C4, size 0x4, align 4
    float32 m_flFadeOutStart; // offset 0x8C8, size 0x4, align 4
    float32 m_flFadeOutLength; // offset 0x8CC, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x8D0, size 0x4, align 255
    EntityDissolveType_t m_nDissolveType; // offset 0x8D4, size 0x4, align 4
    VectorWS m_vDissolverOrigin; // offset 0x8D8, size 0xC, align 4
    uint32 m_nMagnitude; // offset 0x8E4, size 0x4, align 4
};
