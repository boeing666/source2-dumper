#pragma once

class CCitadel_Modifier_Link : public CCitadelModifier /*0x0*/  // sizeof 0x170, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CHandle< CCitadelPortalTrigger > m_hPortalToSource; // offset 0x140, size 0x4, align 4
    GameTime_t m_flPortalStartTime; // offset 0x144, size 0x4, align 255
    GameTime_t m_flPortalEndTime; // offset 0x148, size 0x4, align 255
    char _pad_014C[0x4]; // offset 0x14C
    CUtlString m_sSourceAttachment; // offset 0x150, size 0x8, align 8
    CUtlString m_sParentAttachment; // offset 0x158, size 0x8, align 8
    VectorWS m_vecLinkPosition; // offset 0x160, size 0xC, align 4
    char _pad_016C[0x4]; // offset 0x16C
};
