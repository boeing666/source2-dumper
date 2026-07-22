#pragma once

class CNPC_FamiliarHelper : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1BE0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1BD0]; // offset 0x0
    GameTime_t m_tCooldownStartTime; // offset 0x1BD0, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_tCooldownEndTime; // offset 0x1BD4, size 0x4, align 255 | MNetworkEnable
    bool m_bIsHelperAvailableNet; // offset 0x1BD8, size 0x1, align 1 | MNetworkEnable
    char _pad_1BD9[0x7]; // offset 0x1BD9
};
