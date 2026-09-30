#pragma once

class CTriggerTier3Phase2Shield : public CTriggerNeutralShield /*0x0*/  // sizeof 0xA28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA20]; // offset 0x0
    int8 m_nNumEnemyPlayers; // offset 0xA20, size 0x1, align 1
    char _pad_0A21[0x7]; // offset 0xA21
};
