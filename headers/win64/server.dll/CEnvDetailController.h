#pragma once

class CEnvDetailController : public CBaseEntity /*0x0*/  // sizeof 0x4A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    float32 m_flFadeStartDist; // offset 0x498, size 0x4, align 4
    float32 m_flFadeEndDist; // offset 0x49C, size 0x4, align 4
};
