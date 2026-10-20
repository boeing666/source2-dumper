#pragma once

class CCitadel_Modifier_Link : public CCitadelModifier /*0x0*/  // sizeof 0x180, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CHandle< CCitadelPortalTrigger > m_hPortalToSource; // offset 0x150, size 0x4, align 4
    GameTime_t m_flPortalStartTime; // offset 0x154, size 0x4, align 255
    GameTime_t m_flPortalEndTime; // offset 0x158, size 0x4, align 255
    char _pad_015C[0x4]; // offset 0x15C
    CUtlString m_sSourceAttachment; // offset 0x160, size 0x8, align 8
    CUtlString m_sParentAttachment; // offset 0x168, size 0x8, align 8
    VectorWS m_vecLinkPosition; // offset 0x170, size 0xC, align 4
    char _pad_017C[0x4]; // offset 0x17C
};
