#pragma once

struct PlayOfTheGameTrigger_t  // sizeof 0x40, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x30]; // offset 0x0
    GameTime_t m_tTriggerTime; // offset 0x30, size 0x4, align 255 | MNetworkEnable
    EPlayOfTheGameReplayTrigger m_eType; // offset 0x34, size 0x1, align 1 | MNetworkEnable
    char _pad_0035[0x3]; // offset 0x35
    CPlayerSlot m_nTarget; // offset 0x38, size 0x4, align 4 | MNetworkEnable
    char _pad_003C[0x4]; // offset 0x3C
};
