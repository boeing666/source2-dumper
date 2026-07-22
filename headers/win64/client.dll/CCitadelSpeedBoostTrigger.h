#pragma once

class CCitadelSpeedBoostTrigger : public C_BaseTrigger /*0x0*/  // sizeof 0xA80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    float32 m_flMovespeedOverride; // offset 0xA78, size 0x4, align 4
    char _pad_0A7C[0x4]; // offset 0xA7C
};
