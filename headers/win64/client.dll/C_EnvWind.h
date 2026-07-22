#pragma once

class C_EnvWind : public C_BaseEntity /*0x0*/  // sizeof 0x6E8, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    C_EnvWindShared m_EnvWindShared; // offset 0x5F0, size 0xF8, align 255 | MNetworkEnable MNotSaved
};
