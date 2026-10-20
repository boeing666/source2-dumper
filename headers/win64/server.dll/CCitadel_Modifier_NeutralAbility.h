#pragma once

class CCitadel_Modifier_NeutralAbility : public CCitadelModifier /*0x0*/  // sizeof 0x200, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    ENeutralAbilityState m_eState; // offset 0x150, size 0x4, align 4
    GameTime_t m_tExecuteTime; // offset 0x154, size 0x4, align 255
    GameTime_t m_tStateChangeTime; // offset 0x158, size 0x4, align 255
    GameTime_t m_tNextCastTime; // offset 0x15C, size 0x4, align 255
    char _pad_0160[0x68]; // offset 0x160
    CModifierHandleTyped< CCitadelModifier > m_pCastDelayAutoModifier; // offset 0x1C8, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_pChannelAutoModifier; // offset 0x1E0, size 0x18, align 8
    AttachmentHandle_t m_hShootAttach; // offset 0x1F8, size 0x1, align 255
    char _pad_01F9[0x7]; // offset 0x1F9
};
