#pragma once

class CNPC_BarrackBoss : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1A60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1720]; // offset 0x0
    CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // offset 0x1720, size 0x20, align 255
    char _pad_1740[0x4]; // offset 0x1740
    int32 m_iLane; // offset 0x1744, size 0x4, align 4
    char _pad_1748[0x300]; // offset 0x1748
    CHandle< CBaseEntity > m_hTrooperSpawnPoint; // offset 0x1A48, size 0x4, align 4
    LaneSide_t m_LaneSide; // offset 0x1A4C, size 0x1, align 1
    char _pad_1A4D[0x3]; // offset 0x1A4D
    GameTime_t m_flFadeOutStart; // offset 0x1A50, size 0x4, align 255 | MNotSaved
    GameTime_t m_flFadeOutEnd; // offset 0x1A54, size 0x4, align 255 | MNotSaved
    char _pad_1A58[0x8]; // offset 0x1A58
};
