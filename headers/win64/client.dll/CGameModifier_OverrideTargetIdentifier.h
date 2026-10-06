#pragma once

class CGameModifier_OverrideTargetIdentifier : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CGlobalSymbol m_sTargetIdentifier; // offset 0x138, size 0x8, align 8
    CHandle< C_BaseEntity > m_hTarget; // offset 0x140, size 0x4, align 4
    EntityAttachmentType_t m_nOriginType; // offset 0x144, size 0x4, align 4
    CGlobalSymbol m_sAttachmentName; // offset 0x148, size 0x8, align 8
    AttachmentHandle_t m_hAttachment; // offset 0x150, size 0x1, align 255
    char _pad_0151[0x7]; // offset 0x151
};
