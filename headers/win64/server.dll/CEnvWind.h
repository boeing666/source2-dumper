#pragma once

class CEnvWind : public CBaseEntity /*0x0*/  // sizeof 0x5D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CEnvWindShared m_EnvWindShared; // offset 0x4A8, size 0x130, align 8
};
