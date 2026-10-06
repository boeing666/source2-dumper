#pragma once

class CCitadel_Neutral_Attack_LobBook : public CCitadel_Neutral_Attack_BulletToPointModifier /*0x0*/  // sizeof 0x238, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x200]; // offset 0x0
    bool m_bFirstBullet; // offset 0x200, size 0x1, align 1
    char _pad_0201[0x3]; // offset 0x201
    VectorWS m_vTargetLocation; // offset 0x204, size 0xC, align 4
    int32 m_nBooksLanded; // offset 0x210, size 0x4, align 4
    int32 m_nBooksExpected; // offset 0x214, size 0x4, align 4
    CHandle< CPointModifierThinker > m_hPointThinker; // offset 0x218, size 0x4, align 4
    char _pad_021C[0x4]; // offset 0x21C
    CModifierHandleTyped< CCitadelModifier > m_pShotCounterAutoModifier; // offset 0x220, size 0x18, align 8
};
