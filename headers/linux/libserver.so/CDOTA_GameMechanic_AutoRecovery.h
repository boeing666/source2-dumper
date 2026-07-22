#pragma once

class CDOTA_GameMechanic_AutoRecovery : public CServerOnlyEntity /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x784]; // offset 0x0
    float32 m_flRecoveryDelay; // offset 0x784, size 0x4, align 4
    float32 m_flHealthRegenPerSecond; // offset 0x788, size 0x4, align 4
    float32 m_flManaRegenPerSecond; // offset 0x78C, size 0x4, align 4
    float32 m_flTickInterval; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x3C]; // offset 0x794
};
