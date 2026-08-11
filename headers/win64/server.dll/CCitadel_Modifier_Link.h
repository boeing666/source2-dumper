#pragma once

class CCitadel_Modifier_Link : public CCitadelModifier /*0x0*/  // sizeof 0x100, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CHandle< CCitadelPortalTrigger > m_hPortalToCaster; // offset 0xD0, size 0x4, align 4
    GameTime_t m_flPortalStartTime; // offset 0xD4, size 0x4, align 255
    GameTime_t m_flPortalEndTime; // offset 0xD8, size 0x4, align 255
    char _pad_00DC[0x4]; // offset 0xDC
    CUtlString m_sCasterAttachment; // offset 0xE0, size 0x8, align 8
    CUtlString m_sParentAttachment; // offset 0xE8, size 0x8, align 8
    VectorWS m_vecLinkPosition; // offset 0xF0, size 0xC, align 4
    char _pad_00FC[0x4]; // offset 0xFC
};
