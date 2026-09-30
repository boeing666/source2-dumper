#pragma once

class CCitadelGaffer : public CBaseEntity /*0x0*/  // sizeof 0x550, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    Vector[2] m_vSkyboxScale; // offset 0x4B0, size 0x18, align 4
    Vector[2] m_vCubemapFogScale; // offset 0x4C8, size 0x18, align 4
    Vector[2] m_vSunlightScale; // offset 0x4E0, size 0x18, align 4
    GameTime_t[2] m_LerpTimes; // offset 0x4F8, size 0x8, align 4
    char _pad_0500[0x50]; // offset 0x500
};
