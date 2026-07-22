#pragma once

class C_NPC_BarrackBoss : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1C08, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1BD0]; // offset 0x0
    CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // offset 0x1BD0, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    char _pad_1BF0[0xC]; // offset 0x1BF0
    int32 m_iLane; // offset 0x1BFC, size 0x4, align 4 | MNetworkEnable MNotSaved
    GameTime_t m_flFadeOutStart; // offset 0x1C00, size 0x4, align 255 | MNetworkEnable MNotSaved
    GameTime_t m_flFadeOutEnd; // offset 0x1C04, size 0x4, align 255 | MNetworkEnable MNotSaved
};
