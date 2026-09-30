#pragma once

class CCitadel_Neutral_Attack_LobBook : public CCitadel_Neutral_Attack_BulletToPointModifier /*0x0*/  // sizeof 0x230, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1F8]; // offset 0x0
    bool m_bFirstBullet; // offset 0x1F8, size 0x1, align 1
    char _pad_01F9[0x3]; // offset 0x1F9
    VectorWS m_vTargetLocation; // offset 0x1FC, size 0xC, align 4
    int32 m_nBooksLanded; // offset 0x208, size 0x4, align 4
    int32 m_nBooksExpected; // offset 0x20C, size 0x4, align 4
    CHandle< CPointModifierThinker > m_hPointThinker; // offset 0x210, size 0x4, align 4
    char _pad_0214[0x4]; // offset 0x214
    CModifierHandleTyped< CCitadelModifier > m_pShotCounterAutoModifier; // offset 0x218, size 0x18, align 8
};
