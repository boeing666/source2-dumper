#pragma once

class CCitadel_Modifier_RespawnCredit : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    bool m_bActivated; // offset 0x140, size 0x1, align 1
    bool m_bSpokeAboutToExpire; // offset 0x141, size 0x1, align 1
    char _pad_0142[0x2]; // offset 0x142
    int32 m_iMessageCount; // offset 0x144, size 0x4, align 4
};
