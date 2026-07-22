#pragma once

class C_TriggerTier3Phase2Shield : public C_TriggerNeutralShield /*0x0*/  // sizeof 0xA80, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    int8 m_nNumEnemyPlayers; // offset 0xA78, size 0x1, align 1 | MNetworkEnable
    char _pad_0A79[0x7]; // offset 0xA79
};
