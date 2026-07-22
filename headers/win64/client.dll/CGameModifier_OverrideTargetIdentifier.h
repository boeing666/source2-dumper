#pragma once

class CGameModifier_OverrideTargetIdentifier : public CCitadelModifier /*0x0*/  // sizeof 0xE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CGlobalSymbol m_sTargetIdentifier; // offset 0xC0, size 0x8, align 8
    CHandle< C_BaseEntity > m_hTarget; // offset 0xC8, size 0x4, align 4
    EntityAttachmentType_t m_nOriginType; // offset 0xCC, size 0x4, align 4
    CGlobalSymbol m_sAttachmentName; // offset 0xD0, size 0x8, align 8
    AttachmentHandle_t m_hAttachment; // offset 0xD8, size 0x1, align 255
    char _pad_00D9[0x7]; // offset 0xD9
};
