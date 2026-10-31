#pragma once

class CCitadel_Neutral_Attack_LobBook : public CCitadel_Neutral_Attack_BulletToPointModifier /*0x0*/  // sizeof 0x238, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x208]; // offset 0x0
    bool m_bFieldOpened; // offset 0x208, size 0x1, align 1
    char _pad_0209[0x3]; // offset 0x209
    VectorWS m_vTargetLocation; // offset 0x20C, size 0xC, align 4
    GameTime_t m_tChannelStartTime; // offset 0x218, size 0x4, align 255
    CHandle< CPointModifierThinker > m_hSleepField; // offset 0x21C, size 0x4, align 4
    CModifierHandleTyped< CCitadelModifier > m_pShotCounterAutoModifier; // offset 0x220, size 0x18, align 8
};
