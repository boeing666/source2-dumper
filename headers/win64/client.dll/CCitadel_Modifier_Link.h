#pragma once

class CCitadel_Modifier_Link : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    CHandle< CCitadelPortalTrigger > m_hPortalToSource; // offset 0x130, size 0x4, align 4
    GameTime_t m_flPortalStartTime; // offset 0x134, size 0x4, align 255
    GameTime_t m_flPortalEndTime; // offset 0x138, size 0x4, align 255
    char _pad_013C[0x4]; // offset 0x13C
    CUtlString m_sSourceAttachment; // offset 0x140, size 0x8, align 8
    CUtlString m_sParentAttachment; // offset 0x148, size 0x8, align 8
    VectorWS m_vecLinkPosition; // offset 0x150, size 0xC, align 4
    char _pad_015C[0xC]; // offset 0x15C
};
