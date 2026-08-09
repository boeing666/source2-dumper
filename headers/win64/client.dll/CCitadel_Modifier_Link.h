#pragma once

class CCitadel_Modifier_Link : public CCitadelModifier /*0x0*/  // sizeof 0xE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CHandle< CCitadelPortalTrigger > m_hPortalToCaster; // offset 0xC0, size 0x4, align 4
    GameTime_t m_flPortalStartTime; // offset 0xC4, size 0x4, align 255
    GameTime_t m_flPortalEndTime; // offset 0xC8, size 0x4, align 255
    char _pad_00CC[0x4]; // offset 0xCC
    CUtlString m_sCasterAttachment; // offset 0xD0, size 0x8, align 8
    CUtlString m_sParentAttachment; // offset 0xD8, size 0x8, align 8
    char _pad_00E0[0x8]; // offset 0xE0
};
