#pragma once

class CEntityDissolve : public CBaseModelEntity /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    float32 m_flFadeInStart; // offset 0x878, size 0x4, align 4
    float32 m_flFadeInLength; // offset 0x87C, size 0x4, align 4
    float32 m_flFadeOutModelStart; // offset 0x880, size 0x4, align 4
    float32 m_flFadeOutModelLength; // offset 0x884, size 0x4, align 4
    float32 m_flFadeOutStart; // offset 0x888, size 0x4, align 4
    float32 m_flFadeOutLength; // offset 0x88C, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x890, size 0x4, align 255
    EntityDissolveType_t m_nDissolveType; // offset 0x894, size 0x4, align 4
    VectorWS m_vDissolverOrigin; // offset 0x898, size 0xC, align 4
    uint32 m_nMagnitude; // offset 0x8A4, size 0x4, align 4
};
