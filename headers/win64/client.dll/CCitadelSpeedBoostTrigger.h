#pragma once

class CCitadelSpeedBoostTrigger : public C_BaseTrigger /*0x0*/  // sizeof 0xCA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC98]; // offset 0x0
    float32 m_flMovespeedOverride; // offset 0xC98, size 0x4, align 4
    char _pad_0C9C[0x4]; // offset 0xC9C
};
