#pragma once

class CDOTA_GameMechanic_AutoRecovery : public CServerOnlyEntity /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    float32 m_flRecoveryDelay; // offset 0x4A8, size 0x4, align 4
    float32 m_flHealthRegenPerSecond; // offset 0x4AC, size 0x4, align 4
    float32 m_flManaRegenPerSecond; // offset 0x4B0, size 0x4, align 4
    float32 m_flTickInterval; // offset 0x4B4, size 0x4, align 4
    char _pad_04B8[0x38]; // offset 0x4B8
};
