#pragma once

class CNPC_TrooperBoss : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1B00, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x17C8]; // offset 0x0
    CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // offset 0x17C8, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    char _pad_17E8[0x4]; // offset 0x17E8
    int32 m_iLane; // offset 0x17EC, size 0x4, align 4 | MNetworkEnable
    char _pad_17F0[0x2FC]; // offset 0x17F0
    CHandle< CBaseEntity > m_hTrooperSpawnPoint; // offset 0x1AEC, size 0x4, align 4
    LaneSide_t m_LaneSide; // offset 0x1AF0, size 0x1, align 1
    char _pad_1AF1[0x3]; // offset 0x1AF1
    GameTime_t m_flFadeOutStart; // offset 0x1AF4, size 0x4, align 255 | MNetworkEnable MNotSaved
    GameTime_t m_flFadeOutEnd; // offset 0x1AF8, size 0x4, align 255 | MNetworkEnable MNotSaved
    char _pad_1AFC[0x4]; // offset 0x1AFC
};
