#pragma once

class CCitadel_Modifier_NeutralAbility : public CCitadelModifier /*0x0*/  // sizeof 0x1F8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    ENeutralAbilityState m_eState; // offset 0x148, size 0x4, align 4
    GameTime_t m_tExecuteTime; // offset 0x14C, size 0x4, align 255
    GameTime_t m_tStateChangeTime; // offset 0x150, size 0x4, align 255
    GameTime_t m_tNextCastTime; // offset 0x154, size 0x4, align 255
    char _pad_0158[0x68]; // offset 0x158
    CModifierHandleTyped< CCitadelModifier > m_pCastDelayAutoModifier; // offset 0x1C0, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_pChannelAutoModifier; // offset 0x1D8, size 0x18, align 8
    AttachmentHandle_t m_hShootAttach; // offset 0x1F0, size 0x1, align 255
    char _pad_01F1[0x7]; // offset 0x1F1
};
