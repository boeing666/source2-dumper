#pragma once

class CGameModifier_OverrideTargetIdentifier : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CGlobalSymbol m_sTargetIdentifier; // offset 0x140, size 0x8, align 8
    CHandle< C_BaseEntity > m_hTarget; // offset 0x148, size 0x4, align 4
    EntityAttachmentType_t m_nOriginType; // offset 0x14C, size 0x4, align 4
    CGlobalSymbol m_sAttachmentName; // offset 0x150, size 0x8, align 8
    AttachmentHandle_t m_hAttachment; // offset 0x158, size 0x1, align 255
    char _pad_0159[0x7]; // offset 0x159
};
