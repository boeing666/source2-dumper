#pragma once

class CNPC_FamiliarHelper : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1BA0, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1B90]; // offset 0x0
    GameTime_t m_tCooldownStartTime; // offset 0x1B90, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_tCooldownEndTime; // offset 0x1B94, size 0x4, align 255 | MNetworkEnable
    bool m_bIsHelperAvailableNet; // offset 0x1B98, size 0x1, align 1 | MNetworkEnable
    char _pad_1B99[0x7]; // offset 0x1B99
};
