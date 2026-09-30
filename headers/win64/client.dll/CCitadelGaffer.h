#pragma once

class CCitadelGaffer : public C_BaseEntity /*0x0*/  // sizeof 0x690, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    Vector[2] m_vSkyboxScale; // offset 0x5F0, size 0x18, align 4
    Vector[2] m_vCubemapFogScale; // offset 0x608, size 0x18, align 4
    Vector[2] m_vSunlightScale; // offset 0x620, size 0x18, align 4
    GameTime_t[2] m_LerpTimes; // offset 0x638, size 0x8, align 4
    char _pad_0640[0x50]; // offset 0x640
};
